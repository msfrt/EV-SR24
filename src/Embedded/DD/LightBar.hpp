#ifndef LIGHT_BAR_H
#define LIGHT_BAR_H

#include <Adafruit_NeoPixel.h>
#include <EasyTimer.h>

#include "arduino.h"

/*
 * base class for all screen displays
 */
class LightBar {
 protected:
  Adafruit_NeoPixel &lights_;  ///< The low-level object that actually
                               ///< interfaces with the hardware

  /*
   * Gets the index of the first LED to update
   */
  int GetFirstLEDIndex() const { return first_led_; }

  /*
   * Gets the index of the last LED to update
   */
  int GetLastLEDIndex() const { return first_led_ + num_leds_ - 1; }

  /*
   * Get the number of LEDs in this light bar
   */
  int GetNumLEDs() const { return num_leds_; }

 private:
  int first_led_;
  int num_leds_;

 public:
  /**
   * Constructor
   * \param lights The neopixel lights object
   * \param first_index The index of the first LED to use (LED indecies start at
   * 0 in neopixels) \param num_leds The number of LEDs to update
   */
  LightBar(Adafruit_NeoPixel &lights, int first_index, int num_leds)
      : lights_(lights), first_led_(first_index), num_leds_(num_leds){};

  /** Destructor */
  virtual ~LightBar(){};

  /** Copy constructor disabled */
  LightBar(const LightBar &) = delete;
  /** Assignment operator disabled */
  void operator=(const LightBar &) = delete;

  virtual void Initialize();
  virtual void Update(unsigned long &elapased);
  void Clear();
};

/**
 * Initialize the lights by clearing them.
 */
void LightBar::Initialize() {
  lights_.begin();
  Clear();
  lights_.show();
}

/**
 * Initialize the lights by clearing them.
 */
void LightBar::Clear() {
  for (int i = GetFirstLEDIndex(); i <= GetLastLEDIndex(); i++) {
    lights_.setPixelColor(i, 0, 0, 0);
  }
}

/**
 * If the frame rate timer is all good, update the screen
 *
 * \param elapsed The time in milliseconds elapsed since last called
 */
void LightBar::Update(unsigned long &elapsed) { lights_.show(); }

#endif