#ifndef ONBOARD_DIAGNOSTICS_HPP
#define ONBOARD_DIAGNOSTICS_HPP

#include <EasyTimer.h>
#include <Adafruit_NeoPixel.h>
#include "rainbow_pixels.hpp"
#include "CAN/CAN1.hpp"
#include "CAN/CAN2.hpp"

// user-override timeout check timer
EasyTimer OBDTIMER_user_override_timout_check_timer(2); // 2Hz


// notify the driver of OBD issues
const bool OBDPARAM_notify_driver_warning = false;
const bool OBDPARAM_notify_driver_critical = false;


// forward references
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
  
  obd_leds();

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
