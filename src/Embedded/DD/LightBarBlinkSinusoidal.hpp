#ifndef LIGHT_BAR_BLINK_SINUSOIDAL_H
#define LIGHT_BAR_BLINK_SINUSOIDAL_H

#include <Adafruit_NeoPixel.h>
#include <EasyTimer.h>

#include "CAN/CAN1.hpp"
#include "CAN/CAN2.hpp"
#include "LightBar.hpp"
#include "LightBarBlink.hpp"
#include "arduino.h"

/*
 * light bar for a blinking display */
class LightBarBlinkSinusoidal : public LightBarBlink {
 private:
 protected:
  unsigned long period_ =
      5000;  ///< The period of a sinusoidal cycle in milliseconds
  unsigned long current_time_ = 0;  ///< Used to keep track of the current time
                                    ///< in milliseconds since starting

 public:
  /** Constructor */
  LightBarBlinkSinusoidal(Adafruit_NeoPixel &lights, int first_index,
                          int num_leds);

  /** Destructor */
  virtual ~LightBarBlinkSinusoidal(){};

  /** Copy constructor disabled */
  LightBarBlinkSinusoidal(const LightBarBlinkSinusoidal &) = delete;
  /** Assignment operator disabled */
  void operator=(const LightBarBlinkSinusoidal &) = delete;

  virtual void Initialize() override;
  virtual void Update(unsigned long &elapased) override;
};

/*
 * Constructor
 * \param lights The neopixel light object
 * \param first index The first index of the neopixels to use
 * \param num_leds The number of LEDs to use
 */
LightBarBlinkSinusoidal::LightBarBlinkSinusoidal(Adafruit_NeoPixel &lights,
                                                 int first_index, int num_leds)
    : LightBarBlink(lights, first_index, num_leds){};

/**
 * Initialize the lights by clearing them.
 */
void LightBarBlinkSinusoidal::Initialize() {
  LightBarBlink::Initialize();
  current_time_ = 0;
}

/**
 * If the frame rate timer is all good, update the screen
 *
 * \param elapsed The time in milliseconds elapsed since last called
 */
void LightBarBlinkSinusoidal::Update(unsigned long &elapsed) {
  // if there is no signal set OR the signal's threshold has been reached, blink
  if (!signal_ || signal_->value() >= min_) {
    // if we just entered into blinking mode, reset the time
    if (state_ != Blinking) {
      current_time_ = 0;
    }

    state_ = Blinking;

  } else {
    state_ = Off;
  }

  switch (state_) {
    case Off:
      Clear();
      break;

    case Blinking:
      // update elapsed time
      current_time_ += elapsed;

      float fullCycle = 2 * PI;
      float percentOn =
          (1 - cos(((float)(current_time_ % period_) / (float)period_) *
                   fullCycle)) /
          2;  // range [0, 1]

      for (int led = GetFirstLEDIndex(); led <= GetLastLEDIndex(); led++) {
        lights_.setPixelColor(led, percentOn * r_, percentOn * g_,
                              percentOn * b_);
      }

      break;
  }

  // sends the update
  LightBar::Update(elapsed);
}

#endif