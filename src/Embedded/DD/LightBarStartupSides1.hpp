#ifndef LIGHT_BAR_STARTUP_SIDES_1_H
#define LIGHT_BAR_STARTUP_SIDES_1_H

#include <Adafruit_NeoPixel.h>
#include <EasyTimer.h>

#include "CAN/CAN1.hpp"
#include "CAN/CAN2.hpp"
#include "LightBar.hpp"
#include "arduino.h"

/*
 * light bar for a blinking display */
class LightBarStartupSides1 : public LightBar {
 public:
 private:
  bool completed_ = false;
  int current_step_ = 0;

  EasyTimer blink_timer_ = EasyTimer(
      40);  ///< The rate at which the lights during upshift should blink

 protected:
 public:
  /** Constructor */
  LightBarStartupSides1(Adafruit_NeoPixel &lights, int first_index,
                        int num_leds);

  /** Destructor */
  virtual ~LightBarStartupSides1(){};

  /** Copy constructor disabled */
  LightBarStartupSides1(const LightBarStartupSides1 &) = delete;
  /** Assignment operator disabled */
  void operator=(const LightBarStartupSides1 &) = delete;

  virtual void Initialize() override;
  virtual void Update(unsigned long &elapased) override;

  bool IsCompleted() const { return completed_; }
};

/*
 * Constructor
 * \param lights The neopixel light object
 * \param first index The first index of the neopixels to use
 * \param num_leds The number of LEDs to use
 */
LightBarStartupSides1::LightBarStartupSides1(Adafruit_NeoPixel &lights,
                                             int first_index, int num_leds)
    : LightBar(lights, first_index, num_leds){};

/**
 * Initialize the lights by clearing them.
 */
void LightBarStartupSides1::Initialize() { LightBar::Initialize(); }

/**
 * If the frame rate timer is all good, update the screen
 *
 * \param elapsed The time in milliseconds elapsed since last called
 */
void LightBarStartupSides1::Update(unsigned long &elapsed) {
  int led = GetLastLEDIndex() - (current_step_ / 255);
  int pwm = current_step_ % 255;

  // determine if we're done with all of the LEDs
  if (led < GetFirstLEDIndex()) {
    completed_ = true;
    return;
  }

  // write the led
  lights_.setPixelColor(led, pwm, pwm, pwm);

  current_step_ += 5;

  // sends the update
  LightBar::Update(elapsed);
}

#endif