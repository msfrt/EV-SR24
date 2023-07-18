#ifndef LIGHT_BAR_RPM_H
#define LIGHT_BAR_RPM_H

#include <Adafruit_NeoPixel.h>
#include <EasyTimer.h>

#include "CAN/CAN1.hpp"
#include "CAN/CAN2.hpp"
#include "LightBar.hpp"
#include "arduino.h"

/*
 * light bar for an RPM display */
class LightBarRPM : public LightBar {
 public:
  enum BarStates {
    Downshift,
    Off,
    Normal,
    Upshift
  };  // The possible states of the RPM bar

 private:
  StateSignal &rpm_signal_;  ///< The RPM signal
  int min_;  ///< The minimum bound for the RPM bar to start lighting up
  int max_;  ///< The maximum bound for the rpm bar light up before signalling
             ///< an upshift
  int downshift_limit_;  ///< Signal a downshift if below this RPM. Set to a
                         ///< negative number to disable.

  BarStates state_ = Normal;  ///< The current state of LED light output

  EasyTimer upshift_blink_timer_ = EasyTimer(
      20);  ///< The rate at which the lights during upshift should blink
  bool upshift_on_ = false;  ///< Whether the lights are currently on or off in
                             ///< the upshift flash

  int bar_pwm_positions_;  ///< The number total pwms that the bar has
                           ///< (calculated upon construction. 255 posns per
                           ///< LED)
  int num_yellow_;         ///< number of yellow pixels
  int num_red_;            ///< number of red pixels

  int CalculatePWM(int &total_bar_pwms);

 protected:
 public:
  /** Constructor */
  LightBarRPM(Adafruit_NeoPixel &lights, int first_index, int num_leds,
              StateSignal &rpsignal_, int min_rpm, int max_rpm,
              int downshift_rpm = -1);

  /** Destructor */
  virtual ~LightBarRPM(){};

  /** Copy constructor disabled */
  LightBarRPM(const LightBarRPM &) = delete;
  /** Assignment operator disabled */
  void operator=(const LightBarRPM &) = delete;

  virtual void Initialize() override;
  virtual void Update(unsigned long &elapased) override;
};

/*
 * Constructor
 * \param lights The neopixel light object
 * \param first index The first index of the neopixels to use
 * \param num_leds The number of LEDs to use
 * \param rpm The RPM signal
 * \param min_rpm The minimum bound for the RPM bar to start lighting up
 * \param max_rpm The maximum bound for the rpm bar light up before signalling
 * an upshift \param downshift_rpm The RPM to signal a downshift below
 */
LightBarRPM::LightBarRPM(Adafruit_NeoPixel &lights, int first_index,
                         int num_leds, StateSignal &rpsignal_, int min_rpm,
                         int max_rpm, int downshift_rpm)
    : LightBar(lights, first_index, num_leds),
      rpm_signal_(rpsignal_),
      min_(min_rpm),
      max_(max_rpm),
      downshift_limit_(downshift_rpm) {
  bar_pwm_positions_ = num_leds * 255;
  num_yellow_ = num_leds * 0.25;
  num_red_ = num_leds * 0.25;
}

/**
 * Initialize the lights by clearing them.
 */
void LightBarRPM::Initialize() { LightBar::Initialize(); }

/**
 *  Take the total PWM remaining for the bar, then returns a value 0-255 for an
 * incremental LED in the bar of LEDs. \returns an integer 0-255 representing a
 * PWM value;
 */
int LightBarRPM::CalculatePWM(int &total_bar_pwms) {
  // led should be completely on
  if (total_bar_pwms >= 255) {
    total_bar_pwms -= 255;
    return 255;

    // led should be completely off
  } else if (total_bar_pwms <= 0) {
    return 0;

    // led is somewhere in the middle
  } else {
    int temp = total_bar_pwms;
    total_bar_pwms = 0;
    return temp;
  }
}

/**
 * If the frame rate timer is all good, update the screen
 *
 * \param elapsed The time in milliseconds elapsed since last called
 */
void LightBarRPM::Update(unsigned long &elapsed) {
  // first, determine the state
  if ((int)rpm_signal_.value() > max_) {
    state_ = Upshift;

  } else if ((int)rpm_signal_.value() > min_) {
    state_ = Normal;

  } else if ((int)rpm_signal_.value() > downshift_limit_) {
    state_ = Off;

  } else {
    state_ = Downshift;
  }

  // Serial.println(state_);

  switch (state_) {
    case Downshift: {
      int red = 0;
      for (int i = GetFirstLEDIndex(); i <= GetLastLEDIndex(); i++) {
        lights_.setPixelColor(i, red, 0, 255);  // burple
        if (i < GetNumLEDs() / 2 - 1) {
          red += 30;
        } else if (i == GetNumLEDs() / 2) {
          // do nothing
        } else {
          red -= 30;
        }
      }
    } break;

    case Off:
      Clear();
      LightBar::Update(elapsed);
      break;

    case Normal: {  // brackets needed since we initilize a value here
      int bar_pwms =
          map(rpm_signal_.value(), min_, max_, 0, bar_pwm_positions_);

      for (int led = GetFirstLEDIndex(); led <= GetLastLEDIndex(); led++) {
        // green
        if (led < GetNumLEDs() - num_yellow_ - num_red_) {
          lights_.setPixelColor(led, 0, CalculatePWM(bar_pwms), 0);

          // yellow
        } else if (led < GetNumLEDs() - num_red_) {
          int pwms = CalculatePWM(bar_pwms);
          lights_.setPixelColor(led, pwms, pwms, 0);

          // red
        } else {
          lights_.setPixelColor(led, CalculatePWM(bar_pwms), 0, 0);
        }
      }
    } break;

    case Upshift:

      if (upshift_blink_timer_.isup()) {
        if (upshift_on_) {
          upshift_on_ = false;
          Clear();
        } else {
          upshift_on_ = true;
          for (int i = GetFirstLEDIndex(); i <= GetLastLEDIndex(); i++) {
            lights_.setPixelColor(i, 255, 0, 0);  // red
          }
        }
      }

      break;
  }

  // sends the update
  LightBar::Update(elapsed);
}

#endif