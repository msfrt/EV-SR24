#ifndef SCREEN_LAPTIME_H
#define SCREEN_LAPTIME_H

#include <EasyTimer.h>
#include <StateCAN.h>

#include "ILI9341_t3n.h"
#include "Screen.hpp"
#include "arduino.h"

// arduino compiler fails to find the c files unless you include them for
// whatever reason
#include "fonts/LiberationMonoBold.c"
#include "fonts/LiberationMonoBold.h"
#include "fonts/LiberationMonoBoldItalic.c"
#include "fonts/LiberationMonoBoldItalic.h"

/*
 * base class for all screen displays
 */
class ScreenLapTime : public Screen {
 public:
  /** Constructor */
  ScreenLapTime(ILI9341_t3n &disp) : Screen(disp){};

  /** Destructor */
  virtual ~ScreenLapTime(){};

  /** Copy constructor disabled */
  ScreenLapTime(const ScreenLapTime &) = delete;
  /** Assignment operator disabled */
  void operator=(const ScreenLapTime &) = delete;

  virtual void Initialize() override;
  virtual void Update(unsigned long &elapsed) override;

 private:
  /*
   * Constants that affect the spacing of objects on the displau
   */
  const int margin_x_ = 1;   ///< horizontal padding pixels
  const int margin_y_ = 12;  ///< veritcal padding pixels
  const ILI9341_t3_font_t &font_label_ =
      LiberationMono_32_Bold_Italic;  ///< The font for the screen label
  const int font_label_height_ = 32;  ///< The label's pixel height
  const int font_label_width_ = 26;   ///< The label's pixel width
  const ILI9341_t3_font_t &font_primary_ =
      LiberationMono_48_Bold;           ///< The font for lap time
  const int font_primary_height_ = 48;  ///< The font pixel height
  const int font_primary_width_ = 40;   ///< The font pixel height
  String label_ = "LAP TIME:";          ///< The screen's label

  float best_lap_time_ = 9999999999;  ///< Will hold the best laptime in seconds
  float last_lap_time_ = 9999999999;  ///< Will hold the last laptime in seconds
  unsigned long last_lap_millis_ =
      0;  ///< Will hold the milliseconds clock time that the last lap happened
};

/**
 * This is called ONLY when there is a new laptime recieved
 * This draws the labels, calculates values, and updates the screen for the
 * first time.
 */
void ScreenLapTime::Initialize() {
  // before doing any screen mumbo jumbo, calculate the times
  float current_lap_time =
      static_cast<float>(millis() - last_lap_millis_) / 1000.0;
  last_lap_millis_ = millis();

  Screen::Initialize();

  // borders
  display_.drawFastHLine(0, 0, display_width_, color_secondary_);
  display_.drawFastHLine(0, display_height_ - 1, display_width_,
                         color_secondary_);
  // display_.drawFastHLine(0, display_height_ / 2, display_width_,
  // color_secondary_); display_.drawFastVLine(display_width_ / 2,
  // display_height_ / 2, display_height_ / 2, color_secondary_);

  // print the screen label
  display_.setCursor(2, 5);
  display_.setFont(font_label_);
  display_.setTextColor(color_primary_);
  display_.print(label_);

  // display the lap time
  char format_buffer[10];
  sprintf(format_buffer, "%.2f", current_lap_time);
  display_.setCursor(
      (display_width_ - strlen(format_buffer) * font_primary_width_) / 2,
      margin_y_ + font_label_height_ + 30);
  display_.setFont(font_primary_);
  display_.print(format_buffer);

  // display best/last rectangles
  int rect_x = 0;
  int rect_y = (display_height_ * 2) / 3;
  int rect_w = display_width_ / 2;
  int rect_h = (display_height_ * 1) / 3;
  uint16_t color =
      current_lap_time < best_lap_time_ ? color_success_ : color_danger_;
  display_.fillRect(rect_x, rect_y, rect_w, rect_h, color);
  display_.setCursor(rect_x + (rect_w - 4 * font_label_width_) / 2,
                     rect_y + (rect_h - font_label_height_) / 2);
  display_.setFont(font_label_);
  display_.setTextColor(color_ackground_);
  display_.print("BEST");

  rect_x = display_width_ / 2;
  rect_y = (display_height_ * 2) / 3;
  rect_w = display_width_ / 2;
  rect_h = (display_height_ * 1) / 3;
  color = current_lap_time < last_lap_time_ ? color_success_ : color_danger_;
  display_.fillRect(rect_x, rect_y, rect_w, rect_h, color);
  display_.setCursor(rect_x + (rect_w - 4 * font_label_width_) / 2,
                     rect_y + (rect_h - font_label_height_) / 2);
  display_.setFont(font_label_);
  display_.setTextColor(color_ackground_);
  display_.print("LAST");

  // draw a line dividing the two
  display_.drawFastVLine(rect_x, rect_y, rect_h, color_ackground_);

  // update best time if necessary
  if (current_lap_time < best_lap_time_) {
    best_lap_time_ = current_lap_time;
  }
  // update the last time
  last_lap_time_ = current_lap_time;

  // push updates to the screen
  unsigned long elapsed = 0;
  Screen::Update(elapsed);
}

/**
 * If the frame rate timer is all good, update the screen
 *
 * \param elapsed The time elapsed in milliseconds since the update was last
 * called
 */
void ScreenLapTime::Update(unsigned long &elapsed) {
  // do nothing here, since everything is controlled in the initialization
  // function
}

#endif