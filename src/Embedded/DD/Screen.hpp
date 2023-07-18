#ifndef SCREEN_H
#define SCREEN_H

#include <EasyTimer.h>

#include "ILI9341_t3n.h"
#include "arduino.h"

#define DISPLAY_HEIGHT 240
#define DISPLAY_WIDTH 320

/*
 * base class for all screen displays
 */
class Screen {
 private:
 protected:
  ILI9341_t3n &display_;  ///< The low-level object that actually interfaces
                          ///< with the hardware
  EasyTimer frame_rate_timer_ =
      EasyTimer(10);  ///< Timer for screen updates, default at 10 Hz

  int display_width_ = 320;   ///< Width of the display
  int display_height_ = 240;  ///< Height of the display

  /*
   * Primary and secondary colors to use for all screens
   */
  uint16_t color_primary_ = ILI9341_WHITE;
  uint16_t color_secondary_ = ILI9341_GREEN;
  uint16_t color_ackground_ = ILI9341_BLACK;
  uint16_t color_warning_ = ILI9341_YELLOW;
  uint16_t color_success_ = ILI9341_GREEN;
  uint16_t color_danger_ = ILI9341_RED;

 public:
  /** Constructor */
  Screen(ILI9341_t3n &disp) : display_(disp){};

  /** Destructor */
  virtual ~Screen(){};

  /** Copy constructor disabled */
  Screen(const Screen &) = delete;
  /** Assignment operator disabled */
  void operator=(const Screen &) = delete;

  virtual void Initialize();
  virtual void Update(unsigned long &elapased);
  void SetMaxFrameRate(uint8_t freq);
};

/**
 * Initialize the screen.
 * This ensures that the frame buffer is turned on. This means that no updates
 * are sent to the screen until UpdateScreen() is explicitly called.
 */
void Screen::Initialize() {
  display_.useFrameBuffer(true);
  display_.fillScreen(color_ackground_);
}

/**
 * If the frame rate timer is all good, update the screen
 *
 * \param elapsed The time in milliseconds elapsed since last called
 */
void Screen::Update(unsigned long &elapased) {
  if (frame_rate_timer_.isup()) {
    display_.updateScreen();
  }
}

/**
 * Change the maximum frequency that the screen can update
 * \param freq - the maximum frequency for screen updates
 */
void Screen::SetMaxFrameRate(uint8_t freq) {
  if (freq == 0) {
    frame_rate_timer_.disable();
  } else {
    frame_rate_timer_.enable();
    frame_rate_timer_.set_frequency(freq);
  }
}

#endif