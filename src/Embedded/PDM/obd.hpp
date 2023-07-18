#ifndef ONBOARD_DIAGNOSTICS_HPP
#define ONBOARD_DIAGNOSTICS_HPP

#include <EasyTimer.h>
#include <Adafruit_NeoPixel.h>
#include "rainbow_pixels.hpp"
#include "CAN/CAN1.hpp"
#include "CAN/CAN2.hpp"


// add low fuel pressure warning

int OBDFLAG_oil_pressure = 0;
int OBDFLAG_oil_temp = 0;
int OBDFLAG_fuel_pressure = 0;

// M400 message timeout timer
EasyTimer OBDTIMER_M400_timout_check_timer(2); // 2Hz

// user-override timeout check timer
EasyTimer OBDTIMER_user_override_timout_check_timer(2); // 2Hz


// Oil pressure parameters
const int OBDPARAM_oil_pressure_min_rpm = 2500;   // only check for oil issues above this rpm
const int OBDPARAM_oil_pressure_dip_time_ms = 3000;   // time allowed below minimum pressure before raising a flag
const int OBDPARAM_oil_pressure_min_percent_allowed = 70;  // percent of predicted oil pressure before it is determined bad
EasyTimer OBDTIMER_oil_pressure_check_timer(10);


// Oil temp parameters
const int OBDPARAM_oil_temp_max_temp = 100;
const int OBDPARAM_oil_temp_time_allowed_ms = 5000;
EasyTimer OBDTIMER_oil_temp_check(1); // 1Hz

// fuel pressure parameters
const int OBDPARAM_fuel_pressure_min_pressure = 53; // psi
const int OBDPARAM_fuel_pressure_time_allowed_ms = 3000;
EasyTimer OBDTIMER_fuel_pressure_check(10);


// notify the driver of OBD issues
const bool OBDPARAM_notify_driver_warning = false;
const bool OBDPARAM_notify_driver_critical = false;


// forward references
bool obd_oil_pressure_acceptence(StateSignal&, StateSignal&);
bool obd_oil_temp_checker(StateSignal &);
bool obd_fuel_pressure_checker(StateSignal &);
void obd_leds();

// this is where you should put your diagnostic checks. Each check should be enclosed in their own timer.
void obd_main(){


  // user override time-outs
  if (OBDTIMER_user_override_timout_check_timer.isup()){
    CMD_waterPumpOverride.timeout_check();
    CMD_fanLeftOverride.timeout_check();
    CMD_fanRightOverride.timeout_check();
    CMD_brakeLightOverride.timeout_check();
  }

  // M400 timeouts
  if (OBDTIMER_M400_timout_check_timer.isup()){
    M400_rpm.timeout_check();
    M400_engineTemp.timeout_check();
    M400_batteryVoltage.timeout_check();
    M400_oilPressure.timeout_check();
    M400_oilTemp.timeout_check();
  }


  // oil pressure acceptance check
  if (OBDTIMER_oil_pressure_check_timer.isup()){
    obd_oil_pressure_acceptence(M400_oilPressure, M400_rpm);
  }

  // oil-temp acceptance check
  if (OBDTIMER_oil_temp_check.isup()){
    obd_oil_temp_checker(M400_oilTemp);
  }


  // fuel pressure check
  if (OBDTIMER_fuel_pressure_check.isup()){
    obd_fuel_pressure_checker(M400_fuelPressure);
  }


  obd_leds();

}


bool obd_oil_pressure_acceptence(StateSignal &oil_pressure, StateSignal &rpm){
  static unsigned long good_until_time = 5000;
  static bool oil_pressure_good = true;
  static float predicted_pressure = 0.0;

  // check if the sensors are valid in the first place.
  if (!oil_pressure.is_valid() || !rpm.is_valid()){
    OBDFLAG_oil_pressure = 0;
    good_until_time = millis() + OBDPARAM_oil_pressure_dip_time_ms;
    return true;

  // the engine's not even on
  } else if (GLO_engine_state != 2){
    OBDFLAG_oil_pressure = 0;
    good_until_time = millis() + OBDPARAM_oil_pressure_dip_time_ms;
    return true;

  // if the rpm is not above the minimum, we assume the oil pressure is good
  } else if (M400_rpm.value() < OBDPARAM_oil_pressure_min_rpm){
    OBDFLAG_oil_pressure = 0;
    good_until_time = millis() + OBDPARAM_oil_pressure_dip_time_ms;
    return true;
  }


  // calculuate the predicted pressure
  // Function generated: 02/15/2020 10:28:53
  predicted_pressure = 20.068 * log(rpm.value() - 1776.948) - 116.958;

  // current oil pressure is acceptable
  if ((oil_pressure.value() * 100) / predicted_pressure >= OBDPARAM_oil_pressure_min_percent_allowed){
    oil_pressure_good = true;
    OBDFLAG_oil_pressure = 0;
    good_until_time = millis() + OBDPARAM_oil_pressure_dip_time_ms;


  // current oil pressure is unacceptable
  } else {
    oil_pressure_good = false;


    // raise a flag
    if (millis() > good_until_time && OBDFLAG_oil_pressure == 0){
      OBDFLAG_oil_pressure = 1;

      // send messages to the driver (send 10 times because this is important and can NOT be missed buy DD)
      if (OBDPARAM_notify_driver_warning){
        for (int i = 0; i < 10; i++){
          // PDM 31 - driver display LED
          msg.buf[0] = 3; // LED color code RED
          msg.buf[1] = 0;
          msg.buf[2] = 0;
          msg.buf[3] = 0;
          msg.buf[4] = 0;
          msg.buf[5] = 0;
          msg.buf[6] = 0;
          msg.buf[7] = 0;
          msg.id = 281;
          msg.len = 8;
          can2.write(msg);

          // PDM 30 - driver message
          msg.buf[0] = 'O';
          msg.buf[1] = 'I';
          msg.buf[2] = 'L';
          msg.buf[3] = 'P';
          msg.buf[4] = ' ';
          msg.buf[5] = 'L';
          msg.buf[6] = 'O';
          msg.buf[7] = 'W';
          msg.id = 280;
          msg.len = 8;
          can2.write(msg);
        }
      }
    }
  }

  return oil_pressure_good;
}





bool obd_oil_temp_checker(StateSignal &oiltemp){
  static unsigned long good_until_time = 5000;
  static bool oil_temp_good = true;

  // check if the sensors are valid in the first place.
  if (!oiltemp.is_valid()){
    OBDFLAG_oil_temp = 0;
    return true;
  }


  // current oil temp is acceptable
  if (oiltemp.value() < OBDPARAM_oil_temp_max_temp){
    oil_temp_good = true;
    OBDFLAG_oil_temp = 0;
    good_until_time = millis() + OBDPARAM_oil_temp_time_allowed_ms;


  // current oil temp is unacceptable
  } else {
    oil_temp_good = false;


    // raise a flag
    if (millis() > good_until_time && OBDFLAG_oil_temp == 0){
      OBDFLAG_oil_temp = 1;

      // send messages to the driver (send 10 times because this is important and can NOT be missed buy DD)
      if (OBDPARAM_notify_driver_warning){
        for (int i = 0; i < 10; i++){
          // PDM 31 - driver display LED
          msg.buf[0] = 3; // LED color code RED
          msg.buf[1] = 0;
          msg.buf[2] = 0;
          msg.buf[3] = 0;
          msg.buf[4] = 0;
          msg.buf[5] = 0;
          msg.buf[6] = 0;
          msg.buf[7] = 0;
          msg.id = 281;
          msg.len = 8;
          can2.write(msg);

          // PDM 30 - driver message
          msg.buf[0] = 'O';
          msg.buf[1] = 'I';
          msg.buf[2] = 'L';
          msg.buf[3] = ' ';
          msg.buf[4] = 'H';
          msg.buf[5] = 'O';
          msg.buf[6] = 'T';
          msg.buf[7] = '\0';
          msg.id = 280;
          msg.len = 8;
          can2.write(msg);
        }
      }
    }
  }

  return oil_temp_good;
}





bool obd_fuel_pressure_checker(StateSignal &fuelp){
  static unsigned long good_until_time = 5000;
  static bool fuelp_good = true;

  // check if the sensors are valid in the first place.
  if (!fuelp.is_valid()){
    OBDFLAG_fuel_pressure = 0;
    return true;
  }


  // if the car is not running, do not worry about fuel pressure
  if (GLO_engine_state != 2){
    OBDFLAG_fuel_pressure = 0;
    return true;
  }


  // current fuel pressure is acceptable
  if (fuelp.value() > OBDPARAM_fuel_pressure_min_pressure){
    fuelp_good = true;
    OBDFLAG_fuel_pressure = 0;
    good_until_time = millis() + OBDPARAM_fuel_pressure_time_allowed_ms;


  // current fuel pressure is unacceptable
  } else {
    fuelp_good = false;


    // raise a flag
    if (millis() > good_until_time && OBDFLAG_fuel_pressure == 0){
      OBDFLAG_fuel_pressure = 1;

      // send messages to the driver (send 10 times because this is important and can NOT be missed buy DD)
      if (OBDPARAM_notify_driver_warning){
        for (int i = 0; i < 10; i++){
          // PDM 31 - driver display LED
          msg.buf[0] = 2; // LED color code YELLOW
          msg.buf[1] = 0;
          msg.buf[2] = 0;
          msg.buf[3] = 0;
          msg.buf[4] = 0;
          msg.buf[5] = 0;
          msg.buf[6] = 0;
          msg.buf[7] = 0;
          msg.id = 281;
          msg.len = 8;
          can2.write(msg);

          // PDM 30 - driver message
          msg.buf[0] = 'L';
          msg.buf[1] = 'O';
          msg.buf[2] = 'W';
          msg.buf[3] = ' ';
          msg.buf[4] = 'F';
          msg.buf[5] = 'U';
          msg.buf[6] = 'E';
          msg.buf[7] = 'L';
          msg.id = 280;
          msg.len = 8;
          can2.write(msg);
        }
      }
    }
  }

  return fuelp_good;
}



void obd_leds(){
  static bool leds_on = true;

  // if there is a critical flag present, blink red
  if (OBDFLAG_oil_pressure || OBDFLAG_oil_temp){
    static EasyTimer bad_blink(10);
    if (bad_blink.isup()){
      if (leds_on){
        leds_on = false;
        GLO_obd_neopixel.setPixelColor(0, 0, 0, 0);
        GLO_obd_neopixel.show();
      } else {
        leds_on = true;
        GLO_obd_neopixel.setPixelColor(0, 255, 0, 0);
        GLO_obd_neopixel.show();
      }
    }

  // if there is just a warning flag that's not safety critical, blink yellow
  } if (OBDFLAG_fuel_pressure){
    static EasyTimer meh_blink(10);
    if (meh_blink.isup()){
      if (leds_on){
        leds_on = false;
        GLO_obd_neopixel.setPixelColor(0, 0, 0, 0);
        GLO_obd_neopixel.show();
      } else {
        leds_on = true;
        GLO_obd_neopixel.setPixelColor(0, 255, 255, 0);
        GLO_obd_neopixel.show();
      }
    }

  // if pdm determines that the engine is cranking, flash orange really fast like rititititititit (engine noise)
  } else if (GLO_engine_state == 1){
    static EasyTimer cranking_blink(20);
    if (cranking_blink.isup()){
      if (leds_on){
        leds_on = false;
        GLO_obd_neopixel.setPixelColor(0, 0, 0, 0);
        GLO_obd_neopixel.show();
      } else {
        leds_on = true;
        GLO_obd_neopixel.setPixelColor(0, 255, 175, 0);
        GLO_obd_neopixel.show();
      }
    }


  // if the user is overriding a pwm control, blink purple
  } else if (CMD_waterPumpOverride.value() >= 1 || CMD_fanLeftOverride.value() >= 1 ||
             CMD_fanRightOverride.value() >= 1 || CMD_brakeLightOverride.value() >= 1){
    static EasyTimer user_override_blink(4);
    if (user_override_blink.isup()){
      if (leds_on){
        leds_on = false;
        GLO_obd_neopixel.setPixelColor(0, 0, 0, 0);
        GLO_obd_neopixel.show();
      } else {
        leds_on = true;
        GLO_obd_neopixel.setPixelColor(0, 255, 0, 255);
        GLO_obd_neopixel.show();
      }
    }

  // no flags set. No reason to flash LEDs. Make them RGB
  } else {
    rainbow_pixels(GLO_obd_neopixel);
  }
}


#endif
