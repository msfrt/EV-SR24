// Dave Yonkers, 2022

#include <EasyTimer.h>
#include <PWMControl.h>
#include <ReadADC.h>
#include <StateCAN.h>
#include <FlexCAN_T4.h>
#include <SPI.h>
#include <Adafruit_NeoPixel.h>
#include <BoardTemp.h>
#include <EepromHelper.h>


// can bus decleration
FlexCAN_T4<CAN1, RX_SIZE_256, TX_SIZE_16> can1;
FlexCAN_T4<CAN2, RX_SIZE_256, TX_SIZE_16> can2;
static CAN_message_t rxmsg;
// each bus has a total of 64 mailboxes
#define NUM_RX_STD_MAILBOXES 32
#define NUM_RX_EXT_MAILBOXES 2
#define NUM_TX_MAILBOXES 30
// limit the number of messages each bus can read for each loop cycle.
// Typically, only one message is recieved in the time that the loop can run,
// but a buildup can occur, and this limit can poll the bus to read messages
// while not getting stuck in an infinite loop
#define MAX_CAN_FRAME_READ_PER_CYCLE 5


// global variable definition
int GLO_engine_state = 0; // engine state (no need to change this variable)
const int GLO_read_resolution_bits = 12; // bits for Teensy-based read resolution
const int GLO_max_analog_write_pwm = 255; // maximum PWN value

// minimum voltage for the engine to be in "cranking" mode
const int GLO_cranking_starter_volt_threshold = 5;
// max rpm for the engine to still be in "cranking" mode
const int GLO_cranking_rpm_threshold = 2000;
// engine running min rpm threshold
const int GLO_engine_on_rpm_threshold = 900;
// engine cooldown state duration in milliseconds
const int GLO_engine_cooldown_duration = 5000;

const int GLO_brakelight_min_pressure_F = 150; // minimum pressure required to activate the brakelight (PSI)
const int GLO_brakelight_min_pressure_R = 125;
const int GLO_brakelight_teensy_pin = 4;

const int GLO_data_circuit_teensy_pin = 5;

const int GLO_NeoPixel_teensy_pin = 2;
      int GLO_NeoPixel_brightness_percent = 10; // 0 - 100 %

// boolean used in the C50 to determine if we should be logging
bool GLO_data_log_bool = 0;
const unsigned long data_log_timeout_ms = 5000; // time to log after engine and cooldown mode has stopped

Adafruit_NeoPixel GLO_obd_neopixel(1, GLO_NeoPixel_teensy_pin, NEO_GRB + NEO_KHZ800);

//BoardTemp(int pin, int read_bits, int temp_cal, int mv_cal);
BoardTempDiode board_temp(21, GLO_read_resolution_bits, 28.1, 594);
EasyTimer board_temp_sample_timer(50);

// EEPROM
const int eeprom_cs_pin = 9;
EEPROM_25LC128 eeprom(eeprom_cs_pin);

// engine time clock update frequency. (can be quite low, but don't set too low, as we want this to still be accurate)
// the actual time checking happens in the timer function.
EasyTimer engine_time_update_timer(1);

// odemeter update frequency. Should probably keep this pretty low, because if it updates too fast, the calculations
// will be so small that mileage may actually never be incremented because of poor floating-point math
EasyTimer odometer_update_timer(2);

//sets override percentage for fans
const int override_percent = 80;
const int wp_override_percent = 50;

// eeprom-saved signals
#include "EEPROM_sigs.hpp"

// useful sensor sampling definitions can be found here
#include "sensors.hpp"

// this file contains all of the control tables & declarations for fans and water pump
#include "fans.hpp"

// signal definitions are inside
#include "CAN/CAN1.hpp"
#include "CAN/CAN2.hpp"

// CAN message definitions are inside
#include "can_send.hpp"

// odds and ends functions
#include "misc_fcns.hpp"

// on-board diagnostics
#include "obd.hpp"


// timer that you can use to print things out for debugging
EasyTimer debug(2);
const bool GLO_debug = false;

#define cool_down_pin 19
//Previous reading of cool down switch
int lastButtonState = HIGH;
int buttonState;
int coolDownState = LOW; 

  
unsigned long lastDebounceTime = 0;  // the last time the output pin was toggled
unsigned long debounceDelay = 50;    // the debounce time; increase if the output flickers

void setup() { //high 18 low 26

  analogReadResolution(GLO_read_resolution_bits);
  

  // begin OBD Neopixel
  GLO_obd_neopixel.begin();
  GLO_obd_neopixel.setBrightness(map(GLO_NeoPixel_brightness_percent, 0, 100, 0, 255));
  GLO_obd_neopixel.setPixelColor(0, 255, 0, 0); // red
  GLO_obd_neopixel.show();

  // Initialize serial communication
  Serial.begin(112500);

  //initialize the CAN Bus and set its baud rate to 1Mb
  can1.begin();
  can1.setBaudRate(1000000);
  can2.begin();
  can2.setBaudRate(1000000);
  set_mailboxes();

  // populate left fan table
  int *fanl_table_ptr = fan_left_table[0]; // create a temp ptr to populate PWM device
  fan_left.fill_table(fanl_table_ptr); // populate the PWMDevice table

  // populate right fan table
  int *fanr_table_ptr = fan_right_table[0];
  fan_right.fill_table(fanr_table_ptr);

  // populate water pump table
  int *wp_table_ptr = wp_table[0];
  water_pump.fill_table(wp_table_ptr);

  // initialize the ADC sensors
  initialize_ADCs();

  // initialize SPI communication
  SPI.begin();

  // initialize the data circuit pin
  pinMode(GLO_data_circuit_teensy_pin, OUTPUT);
  // turn the data circuit on
  digitalWrite(GLO_data_circuit_teensy_pin, HIGH);
  // initialize brakelight pin
  pinMode(GLO_brakelight_teensy_pin, OUTPUT);

  // EEPROM
  // eeprom.begin();

  // write the eeprom variables that are not commented out in the write eeprom function in the EEPROM_sigs file
  // initialize_eeprom_variables();

  GLO_obd_neopixel.setPixelColor(0, 0, 255, 0); // green
  GLO_obd_neopixel.show();

  // board temp initialization
  board_temp.begin();

  // neat brakelight animation
  brakelight_startup();

  //initializes the fans off
  //CMD_fanLeftOverride = 0;
  //CMD_fanRightOverride = 0;

  //sets cool mode pin
  pinMode(cool_down_pin, INPUT);

}


void loop() {

  // sensor sampling
  sample_ADCs();
  if (board_temp_sample_timer.isup()){
    board_temp.sample();
  }

  // read both can buses
  read_CAN();

  // run the brakelight
  brakelight_run();
  

  // determine engine state and control PWM outputs
  determine_engine_state(GLO_engine_state);
  fan_left.set_pwm(GLO_engine_state);
  fan_right.set_pwm(GLO_engine_state);
  water_pump.set_pwm(GLO_engine_state);

  // determine if we need to log right now
  GLO_data_log_bool = determine_logging_state(GLO_engine_state, GLO_engine_cooldown_duration);

  // continously run OBD (individual timers are included)
  obd_main();

  // engine timer update
  // if (engine_time_update_timer.isup()){
  //   engine_timer(eeprom_engine_hours, eeprom_engine_minutes);
  // }

  // odometer update
  // if (odometer_update_timer.isup())
  //   odometer(M400_groundSpeed, eeprom_mileage);

  // send all of the things
  send_can1();
  send_can2();

  if (GLO_debug && debug.isup()){
    Serial.println();
    // Serial.println(eeprom_engine_hours.value());
    // Serial.println(eeprom_engine_minutes.value());
    Serial.print("FanR duty cycle %: "); Serial.println(PDM_fanRightDutyCycle.value());

    M400_batteryVoltage = 14;
    M400_rpm = 5000;

    if (millis() > 5000){

      M400_engineTemp = 100;

    }
  }
  
  //Reads cool down switch and set override accordingly
  int reading = digitalRead(cool_down_pin);

  if(reading != lastButtonState){
    lastDebounceTime = millis();
  }

  if((millis() - lastDebounceTime) > debounceDelay){
    if(reading != buttonState){
      buttonState = reading;

      if(buttonState == LOW){
        coolDownState = !coolDownState;
      }
    }
  }

  if(coolDownState == HIGH){ // temporary fix after FTT
    CMD_fanLeftOverride = override_percent;
    CMD_fanRightOverride = override_percent;
    CMD_waterPumpOverride = wp_override_percent;
  } 
  
  else if(coolDownState == LOW){ // check to see if the below is efficient
    // populate left fan table
    int* fanl_table_ptr = fan_left_table[0]; // create a temp ptr to populate PWM device
    fan_left.fill_table(fanl_table_ptr); // populate the PWMDevice table

    // populate right fan table
    int* fanr_table_ptr = fan_right_table[0];
    fan_right.fill_table(fanr_table_ptr);

    // populate water pump table
    int *wp_table_ptr = wp_table[0];
    water_pump.fill_table(wp_table_ptr);

  }
  
  lastButtonState = reading; 
  
  /*
    if(reading == LOW){
      CMD_fanLeftOverride = override_percent;
      CMD_fanRightOverride = override_percent;
    }
    else if(reading == HIGH){
      CMD_fanLeftOverride = 0;
      CMD_fanRightOverride = 0;
    }
*/
    
}



void set_mailboxes(){

  // to view mailbox status, you can use the member function mailboxStatus(). Don't put it in a fast loop, though,
  // because you may actually affect how the chips moves things around

  // CAN 2 - sends a bunch of stuff
  can2.setMaxMB(64); // change from default 16 mailboxes to 64 (maximum)
  can2.enableFIFO(); // first in-first out prevents overwriting unsent messages depending on the queue
  can2.setMB(MB4,RX,STD);  // change the first 12 mailboxes to recieve standard frames. 4 for extended. the first four
  can2.setMB(MB5,RX,STD);  // already do by default. the rest of the mailboxes (48) are TX mailboxes by default, which
  can2.setMB(MB6,RX,STD);  // is necessary because we send more data than the bus can handle in short periods of time
  can2.setMB(MB7,RX,STD);
  can2.setMB(MB8,RX,STD);
  can2.setMB(MB9,RX,STD);
  can2.setMB(MB10,RX,STD);
  can2.setMB(MB11,RX,STD);
  can2.setMB(MB12,RX,EXT);  // perhaps there is an issue and something is sending extended frames for whatever reason
  can2.setMB(MB13,RX,EXT);  // we have a lot of mailboxes anyways, so these four can be set to extended
  can2.setMB(MB14,RX,EXT);
  can2.setMB(MB15,RX,EXT);
  // can2.setMB(MB16,TX);
  // can2.setMB(MB17, TX);
  // can2.setMB(MB18, TX);
  // can2.setMB(MB19, TX);
  // can2.setMB(MB20, TX);
  // can2.setMB(MB21, TX);
  // can2.setMB(MB22, TX);
  // can2.setMB(MB23, TX);
  // can2.setMB(MB24, TX);
  // can2.setMB(MB25, TX);
  // can2.setMB(MB26, TX);
  // can2.setMB(MB27, TX);
  // can2.setMB(MB28, TX);
  // can2.setMB(MB29, TX);
  // can2.setMB(MB30, TX);
  // can2.setMB(MB31, TX);
  // can2.setMB(MB32, TX);
  // can2.setMB(MB33, TX);
  // can2.setMB(MB34, TX);
  // can2.setMB(MB35, TX);
  // can2.setMB(MB36, TX);
  // can2.setMB(MB37, TX);
  // can2.setMB(MB38, TX);
  // can2.setMB(MB39, TX);
  // can2.setMB(MB40, TX);
  // can2.setMB(MB41, TX);
  // can2.setMB(MB42, TX);
  // can2.setMB(MB43, TX);
  // can2.setMB(MB44, TX);
  // can2.setMB(MB45, TX);
  // can2.setMB(MB46, TX);
  // can2.setMB(MB47, TX);
  // can2.setMB(MB48, TX);
  // can2.setMB(MB49, TX);
  // can2.setMB(MB50, TX);
  // can2.setMB(MB51, TX);
  // can2.setMB(MB52, TX);
  // can2.setMB(MB53, TX);
  // can2.setMB(MB54, TX);
  // can2.setMB(MB55, TX);
  // can2.setMB(MB56, TX);
  // can2.setMB(MB57, TX);
  // can2.setMB(MB58, TX);
  // can2.setMB(MB59, TX);
  // can2.setMB(MB60, TX);
  // can2.setMB(MB61, TX);
  // can2.setMB(MB62, TX);
  // can2.setMB(MB63, TX);


  can1.setMaxMB(64);
  can1.enableFIFO();
  can1.setMB(MB4,RX,STD);  // first 16 mailboxes as rx, 4 rx extended. this is pretty overkill, but hey, here they are
  can1.setMB(MB5,RX,STD);
  can1.setMB(MB6,RX,STD);
  can1.setMB(MB7,RX,STD);
  can1.setMB(MB8,RX,STD);
  can1.setMB(MB9,RX,STD);
  can1.setMB(MB10,RX,STD);
  can1.setMB(MB11,RX,STD);
  can1.setMB(MB12,RX,STD);
  can1.setMB(MB13,RX,STD);
  can1.setMB(MB14,RX,STD);
  can1.setMB(MB15,RX,STD);
  can1.setMB(MB16,RX,EXT);
  can1.setMB(MB17,RX,EXT);
  can1.setMB(MB18,RX,EXT);
  can1.setMB(MB19,RX,EXT);
}


/**
 *  Reads a CAN message if available and then sends it to thr
 *  proper decoding funciton
 **/
void read_CAN() {
  int count = 0;
  while (can1.read(rxmsg) && count < MAX_CAN_FRAME_READ_PER_CYCLE) {
    decode_CAN1(rxmsg);
    count++;
  }

  count = 0;
  while (can2.read(rxmsg) && count < MAX_CAN_FRAME_READ_PER_CYCLE) {
    decode_CAN2(rxmsg);
    count++;
  }
}
