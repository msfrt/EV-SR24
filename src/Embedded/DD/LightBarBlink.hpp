#ifndef LIGHT_BAR_BLINK_H
#define LIGHT_BAR_BLINK_H

#include <Adafruit_NeoPixel.h>
#include <EasyTimer.h>

#include "CAN/CAN1.hpp"
#include "CAN/CAN2.hpp"
#include "LightBar.hpp"
#include "arduino.h"

/*
 * light bar for a blinking display */
class LightBarBlink : public LightBar {
 public:
  enum BarStates { Off, Blinking };  // The possible states of the bar

 private:
  EasyTimer blink_timer_ = EasyTimer(
      40);  ///< The rate at which the lights during upshift should blink
  bool lights_on_ = false;  ///< used during the blinking

 protected:
  BarStates state_ = Off;  ///< The current state of LED light output

  StateSignal *signal_ = nullptr;  ///< The signal (if applicable)
  int min_ = 0;  ///< The minimum bound for the bar to start flashing

  ///< colors!
  int r_ = 255;
  int g_ = 255;
  int b_ = 255;

 public:
  /** Constructor */
  LightBarBlink(Adafruit_NeoPixel &lights, int first_index, int num_leds);

  /** Destructor */
  virtual ~LightBarBlink(){};

  /** Copy constructor disabled */
  LightBarBlink(const LightBarBlink &) = delete;
  /** Assignment operator disabled */
  void operator=(const LightBarBlink &) = delete;

  virtual void Initialize() override;
  virtual void Update(unsigned long &elapased) override;

  /* SetColor
   * Sets the color of the blinking lights
   */
  void SetColor(int r, int g, int b) {
    r_ = r;
    g_ = g;
    b_ = b;
  }

  /**
   * Updates the frequency of the blinking
   */
  void SetFrequency(int frequency) { blink_timer_.set_frequency(frequency); }

  /**
   * Attach (set) a signal so that the lights blink whenever the signal's value
   * exceeds the minimum value \param sig a pointer to the state signal to look
   * at \param min_Value The minimum value to look at
   */
  void AttachSignal(StateSignal *sig, int min) {
    signal_ = sig;
    min_ = min;
  };
};

/*
 * Constructor
 * \param lights The neopixel light object
 * \param first index The first index of the neopixels to use
 * \param num_leds The number of LEDs to use
 */
LightBarBlink::LightBarBlink(Adafruit_NeoPixel &lights, int first_index,
                             int num_leds)
    : LightBar(lights, first_index, num_leds){};

/**
 * Initialize the lights by clearing them.
 */
void LightBarBlink::Initialize() { LightBar::Initialize(); }

/**
 * If the frame rate timer is all good, update the screen
 *
 * \param elapsed The time in milliseconds elapsed since last called
 */
void LightBarBlink::Update(unsigned long &elapsed) {
  // if there is no signal set OR the signal's threshold has been reached, blink
  if (!signal_ || signal_->value() >= min_) {
    state_ = Blinking;
  } else {
    state_ = Off;
  }

  switch (state_) {
    case Off:
      Clear();
      break;
    case Blinking:
      if (blink_timer_.isup()) {
        if (lights_on_) {
          lights_on_ = false;
          Clear();
        } else {
          lights_on_ = true;
          for (int led = GetFirstLEDIndex(); led <= GetLastLEDIndex(); led++) {
            lights_.setPixelColor(led, r_, g_, b_);
          }
        }
      }
      break;
  }

  // sends the update
  LightBar::Update(elapsed);
}

#endif