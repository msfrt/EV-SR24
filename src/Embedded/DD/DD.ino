// Dave Yonkers, 2022

#include <Adafruit_NeoPixel.h>
#include <BoardTemp.h>
#include <EasyTimer.h>
#include <FlexCAN_T4.h>
#include <StateCAN.h>

#include "Adafruit_GFX.h"
#include "ILI9341_t3n.h"
#include "SPI.h"
#define SPI0_DISP1

#define READ_RESOLUTION_BITS 12

// can bus decleration
FlexCAN_T4<CAN1, RX_SIZE_256, TX_SIZE_16> can1;
FlexCAN_T4<CAN2, RX_SIZE_256, TX_SIZE_16> can2;
static CAN_message_t rxmsg;
// each bus has a total of 64 mailboxes
#define NUM_RX_STD_MAILBOXES 60
#define NUM_RX_EXT_MAILBOXES 2
#define NUM_TX_MAILBOXES 2
// limit the number of messages each bus can read for each loop cycle.
// Typically, only one message is recieved in the time that the loop can run,
// but a buildup can occur, and this limit can poll the bus to read messages
// while not getting stuck in an infinite loop
#define MAX_CAN_FRAME_READ_PER_CYCLE 5

// BoardTemp(int pin, int read_bits, int temp_cal, int mv_cal);
BoardTempDiode board_temp(21, READ_RESOLUTION_BITS, 26.2, 598);
EasyTimer board_temp_sample_timer(10);

// fonts :)
#include "fonts/LiberationMonoBold.h"
#include "fonts/LiberationMonoBoldItalic.h"

// NeoPixel parameters
const int pixelsTopPin = 3;  // teensy pin #
const int pixelsLeftPin = 2;
const int pixelsRightPin = 4;
const int pixelsTopCount = 16;  // number of LEDs
const int pixelsLeftCount = 4;
const int pixelsRightCount = 4;
int pixelsBrightnessPercent = 5;      // 0 - 100; 100 is blinding... 4 is the
                                      // minimum for all LED bar colors to work
const int pixelsBrightnessNight = 1;  // %
const int pixelsBrightnessDay = 55;   // %

Adafruit_NeoPixel pixelsTop =
    Adafruit_NeoPixel(pixelsTopCount, pixelsTopPin, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixelsLeft =
    Adafruit_NeoPixel(pixelsLeftCount, pixelsLeftPin, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixelsRight =
    Adafruit_NeoPixel(pixelsRightCount, pixelsRightPin, NEO_GRB + NEO_KHZ800);

// TFT display paramters
#define TFTL_DC 18
#define TFTL_CS 10
#define TFTL_MOSI 11
#define TFTL_MISO 12
#define TFTL_CLK 13
#define TFTL_RST 19
#define TFTL_BL 6
int displayLeft_brightness_percent = 100;

#define TFTR_DC 5
#define TFTR_CS 9
#define TFTR_MOSI 11
#define TFTR_MISO 12
#define TFTR_CLK 13
#define TFTR_RST 17
#define TFTR_BL 7
int displayRight_brightness_percent = 100;

// used for light-sensor dimin_g
const int displayBrightnessPercentNight = 75;
const int displayBrightnessPercentDay = 100;

ILI9341_t3n displayLeft = ILI9341_t3n(TFTL_CS, TFTL_DC, TFTL_RST);
ILI9341_t3n displayRight = ILI9341_t3n(TFTR_CS, TFTR_DC, TFTR_RST);

// keep track of the time elapsed between loop iterations
unsigned long previousUpdateTime = 0;

// pins for the steering wheel buttons
const int button1Pin = 14; // page up
const int button2Pin = 15; // page down
int button1State = HIGH;
int button2State = LOW;
int button1StatePrev = HIGH;
int button2StatePrev = LOW;
unsigned long button1Time = 0;
unsigned long button2Time = 0;
const unsigned long buttonDebounceDelay =
    100;  // @GLOBAL_PARAM - milliseconds - used in check_button to avoid
          // double-presses

// CAN message and read definitions
#include "CAN/CAN1.hpp"
#include "CAN/CAN2.hpp"
#include "LightSensor.hpp"
const int lightSensorPin = 20;

EasyTimer debug(50);  // debugging timer

// used for dynamically changing clock speed :-)))
// #if defined(__IMXRT1062__)
// extern "C" uint32_t set_arm_clock(uint32_t frequency);
// #endif

// include externally-written functions
#include "LedStartup.hpp"

// classes for control
//#include "classes/ScreenController.h"
#include "LightBarBlink.hpp"
#include "LightBarController.hpp"
#include "LightBarRPM.hpp"
#include "Screen.hpp"
#include "ScreenInfo.hpp"
#include "ScreensController.hpp"

ScreensController screensController(displayLeft, displayRight);
LightBarController lightsController(pixelsLeft, pixelsTop, pixelsRight);
// ScreenInfo testScreen(displayLeft, DISPLAY_WIDTH, DISPLAY_HEIGHT);

void setup() {
  // dynamically change clock speed
  // #if defined(__IMXRT1062__)
  //   set_arm_clock(45000000);
  //   Serial.print("F_CPU_ACTUAL=");
  //   Serial.println(F_CPU_ACTUAL);
  // #endif

  // set analog read resolution
  analogReadResolution(READ_RESOLUTION_BITS);

  // initilize CAN busses
  can1.begin();
  can1.setBaudRate(1000000);
  can2.begin();
  can2.setBaudRate(1000000);
  set_mailboxes();

  // initialze serial coms
  Serial.begin(115200);

  // init top pixels
  pixelsTop.setBrightness(map(pixelsBrightnessPercent, 0, 100, 0, 255));
  pixelsTop.begin();
  pixelsTop.show();
  // init right pixels
  pixelsRight.setBrightness(map(pixelsBrightnessPercent, 0, 100, 0, 255));
  pixelsRight.begin();
  pixelsRight.show();
  // init left pixels
  pixelsLeft.setBrightness(map(pixelsBrightnessPercent, 0, 100, 0, 255));
  pixelsLeft.begin();
  pixelsLeft.show();

  // initialize screens
  displayLeft.begin();
  displayRight.begin();
  displayLeft.setRotation(3);
  displayRight.setRotation(1);
  // clear screen
  displayLeft.fillScreen(ILI9341_BLACK);
  displayRight.fillScreen(ILI9341_BLACK);

// Set the state racing bitmap
#include "images/StateRacingBitmap.hpp"
  // draw state racing bitmap
  int stateRacingPosY = (DISPLAY_HEIGHT - stateRacingBitmapHeight) / 2;
  int stateRacingPosX = (DISPLAY_WIDTH - stateRacingBitmapWidth) / 2;
  displayLeft.drawBitmap(stateRacingPosX, stateRacingPosY, stateRacingBitmap,
                         stateRacingBitmapWidth, stateRacingBitmapHeight,
                         ILI9341_WHITE);
  displayRight.drawBitmap(stateRacingPosX, stateRacingPosY, stateRacingBitmap,
                          stateRacingBitmapWidth, stateRacingBitmapHeight,
                          ILI9341_WHITE);

  // quick led startup animation
  LedStartup(pixelsTop, pixelsLeft, pixelsRight, 1);

  // initialize buttons
  pinMode(button1Pin, INPUT_PULLUP);
  pinMode(button2Pin, INPUT_PULLUP);

  screensController.Initialize();
  lightsController.Initialize();

  previousUpdateTime = millis();

  debug.set_delay_millis(10000);

  can1.mailboxStatus();
}

void loop() {
  unsigned long elapsed = millis() - previousUpdateTime;
  previousUpdateTime = millis();

  // checks page up button. If not in a notification state, advance.
  // However, if in a notification state, only advance that to get
  // rid of the notification
  if (checkButton(button1Pin, button1State, button1StatePrev, button1Time,
                  buttonDebounceDelay)) {
    // only the screen
    if (screensController.IsNotificationActive() &&
        !lightsController.IsNotificationActive()) {
      screensController.OnButtonPressUp();

      // only the lights
    } else if (!screensController.IsNotificationActive() &&
               lightsController.IsNotificationActive()) {
      lightsController.OnButtonPress();

      // both
    } else {
      screensController.OnButtonPressUp();
      lightsController.OnButtonPress();
    }
  }

  // checks page down button. If not in a notification state, advance.
  // However, if in a notification state, only advance that to get
  // rid of the notification
  if (checkButton(button2Pin, button2State, button2StatePrev, button2Time,
                  buttonDebounceDelay)) {
    // only the screen
    if (screensController.IsNotificationActive() &&
        !lightsController.IsNotificationActive()) {
      screensController.OnButtonPressDown();

      // only the lights
    } else if (!screensController.IsNotificationActive() &&
               lightsController.IsNotificationActive()) {
      lightsController.OnButtonPress();

      // both
    } else {
      screensController.OnButtonPressDown();
      lightsController.OnButtonPress();
    }
  }


  // read any incoming CAN messages
  // Serial.println("Reading CAN:");
  readCan();
  // can1.events();

  // sample the light sensor and update the brightness if percent returned is >
  // -1
  int lightPercentage = LightSensor(lightSensorPin, READ_RESOLUTION_BITS);
  if (lightPercentage > -1) {
    int pixelBrightnessPercent = map(
        lightPercentage, 0, 100, pixelsBrightnessNight, pixelsBrightnessDay);
    int displayBrightnessPercent =
        map(lightPercentage, 0, 100, displayBrightnessPercentNight,
            displayBrightnessPercentDay);

    // update brightness
    analogWrite(TFTL_BL, map(displayBrightnessPercent, 0, 100, 0, 255));
    analogWrite(TFTR_BL, map(displayBrightnessPercent, 0, 100, 0, 255));
    pixelsTop.setBrightness(map(pixelBrightnessPercent, 0, 100, 0, 255));
    pixelsLeft.setBrightness(map(pixelBrightnessPercent, 0, 100, 0, 255));
    pixelsRight.setBrightness(map(pixelBrightnessPercent, 0, 100, 0, 255));
  }

  // if there is a new message to display to the driver, assemble and display it
  if (CMD_driverMessageChar0.is_updated()) {
    char displayStringChars[] = "\0\0\0\0\0\0\0\0\0";
    displayStringChars[0] = CMD_driverMessageChar0.value();
    displayStringChars[1] = CMD_driverMessageChar1.value();
    displayStringChars[2] = CMD_driverMessageChar2.value();
    displayStringChars[3] = CMD_driverMessageChar3.value();
    displayStringChars[4] = CMD_driverMessageChar4.value();
    displayStringChars[5] = CMD_driverMessageChar5.value();
    displayStringChars[6] = CMD_driverMessageChar6.value();
    displayStringChars[7] = CMD_driverMessageChar7.value();
    String displayString(displayStringChars);
    screensController.OnMessage(displayString);
  }

  // notification light message recieved
  if (CMD_driverNotificationLightR.is_updated()) {
    int R = CMD_driverNotificationLightR.value();
    int G = CMD_driverNotificationLightG.value();
    int B = CMD_driverNotificationLightB.value();
    lightsController.OnNotificationRecieved(R, G, B);
  }

  // the laptrigger was set
  if (VCU_laptrigger.is_updated() &&
      static_cast<int>(VCU_laptrigger.value()) == 100) {
    screensController.OnNewLap();
  }

  screensController.Update(elapsed);
  lightsController.Update(elapsed);

  if (debug.isup()) {
    // screensController.OnButtonPress();
    // lightsController.OnButtonPress();
    // can1.mailboxStatus();
  }
}

void test_callback1(const CAN_message_t &imsg) {
  // Serial.println("Recieved 1");
  decode_CAN1(imsg);
}

void test_callback2(const CAN_message_t &imsg) {
  // Serial.println("Recieved 2");
  decode_CAN1(imsg);
}

void set_mailboxes() {
  // to view mailbox status, you can use the member function mailboxStatus().
  // Don't put it in a fast loop, though, because you may actually affect how
  // the chips moves things around

  can1.setMaxMB(64);  // use all mailboxes of course
  can2.setMaxMB(64);

  for (int i = 0; i < NUM_RX_STD_MAILBOXES; i++) {
    can1.setMB((FLEXCAN_MAILBOX)i, RX, STD);
    can2.setMB((FLEXCAN_MAILBOX)i, RX, STD);
  }
  for (int i = NUM_RX_STD_MAILBOXES;
       i < (NUM_RX_STD_MAILBOXES + NUM_RX_EXT_MAILBOXES); i++) {
    can1.setMB((FLEXCAN_MAILBOX)i, RX, EXT);
    can2.setMB((FLEXCAN_MAILBOX)i, RX, EXT);
  }
  for (int i = (NUM_RX_STD_MAILBOXES + NUM_RX_EXT_MAILBOXES);
       i < (NUM_RX_STD_MAILBOXES + NUM_RX_EXT_MAILBOXES + NUM_TX_MAILBOXES);
       i++) {
    can1.setMB((FLEXCAN_MAILBOX)i, TX, STD);
    can2.setMB((FLEXCAN_MAILBOX)i, TX, STD);
  }

  // be sure to assign at least one mailbox to each message that you want to
  // read. filtering allows us to avoid using clock cycles to read messages that
  // we have no interest in. it also reserves a slot for messages as they are
  // recieved.
  can1.setMBFilter(REJECT_ALL);
  can1.setMBFilter(MB0, VCU_laptrigger.get_msg_id());
  can1.setMBFilter(MB1, C50_tcSet.get_msg_id());
  can1.setMBFilter(MB2, M400_groundSpeed.get_msg_id());
  can1.setMBFilter(MB3, M400_rpm.get_msg_id());
  can1.setMBFilter(MB4, M400_oilPressure.get_msg_id());
  can1.setMBFilter(MB5, M400_oilTemp.get_msg_id());
  can1.setMBFilter(MB6, CMD_driverMessageChar0.get_msg_id());
  can1.setMBFilter(MB7, CMD_driverNotificationLightR.get_msg_id());
  can1.setMBFilter(MB8, 0);
  can1.setMBFilter(MB9, 0);
  can1.setMBFilter(MB10, 0);
  can1.setMBFilter(MB11, 0);
  can1.setMBFilter(MB12, 0);
  can1.setMBFilter(MB13, 0);
  can1.setMBFilter(MB14, 0);

  can2.setMBFilter(REJECT_ALL);
  can2.setMBFilter(MB0, PDM_pdmVoltAvg.get_msg_id());
  can2.setMBFilter(MB1, ATCCF_brakeBias.get_msg_id());
  can2.setMBFilter(MB2, ATCCF_rotorTempFL.get_msg_id());  // includes FR
  can2.setMBFilter(MB3, ATCCR_rotorTempRL.get_msg_id());  // includes RR
  can2.setMBFilter(MB4, PDM_coolingOverrideActive.get_msg_id());
  can2.setMBFilter(MB5, PDM_fanLeftDutyCycle.get_msg_id());
  can2.setMBFilter(MB6, 0);
  can2.setMBFilter(MB7, 0);
  can2.setMBFilter(MB8, 0);
  can2.setMBFilter(MB9, 0);
  can2.setMBFilter(MB10, 0);
  can2.setMBFilter(MB11, 0);
  can2.setMBFilter(MB12, 0);
  can2.setMBFilter(MB13, 0);
  can2.setMBFilter(MB14, 0);
}

/**
 *  Reads a CAN message if available and then sends it to thr
 *  proper decoding funciton
 **/
void readCan() {
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

// debounce code taken from
// https://www.arduino.cc/en/Tutorial/BuiltInExamples/Debounce
bool checkButton(int buttonPin, int &buttonState, int &buttonStatePrev,
                 unsigned long &buttonPressTime, unsigned int debounceDelay) {
  bool returnVal = false;

  int reading = digitalRead(buttonPin);

  // check to see if you just pressed the button
  // (i.e. the input went from LOW to HIGH), and you've waited long enough
  // since the last press to ignore any noise:

  // If the switch changed, due to noise or pressing:
  if (reading != buttonStatePrev) {
    // reset the debouncing timer
    buttonPressTime = millis();
  }

  if ((millis() - buttonPressTime) > debounceDelay) {
    // whatever the reading is at, it's been there for longer than the debounce
    // delay, so take it as the actual current state:

    // if the button state has changed:
    if (reading != buttonState) {
      buttonState = reading;

      // only return true if the new button state is LOW
      if (buttonState == LOW) {
        returnVal = true;
      }
    }
  }

  buttonStatePrev = reading;
  return returnVal;
}
