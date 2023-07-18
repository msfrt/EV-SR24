#ifndef SCREEN_NUMBER_H
#define SCREEN_NUMBER_H

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
#include "fonts/Liberation_BIG.hpp"

/*
 * base class for all screen displays
 */
class ScreenNumber : public Screen {
 public:
  /** Constructor */
  ScreenNumber(ILI9341_t3n &disp, StateSignal &signal, String label)
      : Screen(disp), signal_(signal), label_(label){};

  /** Destructor */
  virtual ~ScreenNumber(){};

  /** Copy constructor disabled */
  ScreenNumber(const ScreenNumber &) = delete;
  /** Assignment operator disabled */
  void operator=(const ScreenNumber &) = delete;

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
  const int font_label_height_ = 32;
  const ILI9341_t3_font_t &font_ = Liberation_BIG;  ///< The font to use
  const int font_height_ =
      144;  ///< Estimate of the height of the font in pixels
  const int font_width_ = 100;  ///< estimation of the font width in pixels
  // const int font_width_ = 35;  ///< the font width in pixels (I think that
  // you need to guess this) const int max_chars_ = 8;   ///< The maximum number
  // of characters that the screen can display
  int previous_val_ =
      0;  ///< write to the screen if previos val is different than current val

  StateSignal &signal_;  ///< The number to display on the screen
  String label_ = "";    ///< The label to display on the top of the screen

  String format_ = "%d";  ///< THe format for the number printed

  bool override_ = false;  ///< Override writing to the display
};

/**
 * Initialize the screen.
 * This draws the labels and updates the screen for the first time.
 */
void ScreenNumber::Initialize() {
  Screen::Initialize();

  // top and bottom borders
  display_.drawFastHLine(0, 0, display_width_, color_secondary_);
  display_.drawFastHLine(0, display_height_ - 1, display_width_,
                         color_secondary_);

  // print the screen label
  display_.setCursor(2, 5);
  display_.setFont(font_label_);
  display_.setTextColor(color_primary_);
  display_.print(label_);

  // set the previous value to something outragous
  previous_val_ = -1337;

  // push updates to the screen
  unsigned long elapsed = 0;
  override_ = true;
  ScreenNumber::Update(elapsed);
}

/**
 * If the frame rate timer is all good, update the screen
 *
 * \param elapsed The time elapsed in milliseconds since the update was last
 * called
 */
void ScreenNumber::Update(unsigned long &elapsed) {
  // do nothing here, since everything is controlled in the initialization
  // function

  if (static_cast<int>(signal_.value()) != previous_val_ || override_) {
    // reset the override
    override_ = false;

    // update the value
    previous_val_ = static_cast<int>(signal_.value());

    // overwrite old stuff
    display_.fillRect(0, margin_y_ + font_label_height_, display_width_,
                      display_height_ - (margin_y_ + font_label_height_) - 1,
                      color_ackground_);

    display_.setFont(font_);
    display_.setTextColor(color_primary_, color_ackground_);
    char format_buffer[10];
    sprintf(format_buffer, "%.0f", signal_.value());
    int numLen = strlen(format_buffer);
    display_.setCursor((display_width_ - numLen * font_width_) / 2,
                       display_height_ / 2 - font_height_ / 2);
    display_.print(format_buffer);
    // display_.print(round(signal_.value()));

    Screen::Update(elapsed);
  }
}

#endif