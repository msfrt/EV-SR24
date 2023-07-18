#ifndef SCREENINFO_H
#define SCREENINFO_H

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
class ScreenInfo : public Screen {
 public:
  /** Constructor */
  ScreenInfo(ILI9341_t3n &disp) : Screen(disp){};

  /** Destructor */
  virtual ~ScreenInfo(){};

  /** Copy constructor disabled */
  ScreenInfo(const ScreenInfo &) = delete;
  /** Assignment operator disabled */
  void operator=(const ScreenInfo &) = delete;

  virtual void Initialize() override;
  virtual void Update(unsigned long &elapsed) override;
  virtual void Update(unsigned long &elapsed, bool override);

  void SetSignal(int pos, StateSignal *sig, String label, String formatting,
                 int divisor = 1);

 private:
  /*
   * Constants that affect the spacing of objects on the displau
   */
  const int margin_x_ = 1;   ///< horizontal padding pixels
  const int margin_y_ = 12;  ///< veritcal padding pixels
  const ILI9341_t3_font_t &font_ = LiberationMono_40_Bold;  ///< The font to use
  const int font_width_ =
      35;  ///< the font width in pixels (I think that you need to guess this)

  /*
   * Signals to display
   */
  StateSignal *signal_1_ = nullptr;
  StateSignal *signal_2_ = nullptr;
  StateSignal *signal_3_ = nullptr;
  StateSignal *signal_4_ = nullptr;

  /*
   * Labels placed to the left side of every number
   */
  String label_1_ = "";
  String label_2_ = "";
  String label_3_ = "";
  String label_4_ = "";

  /*
   * additional scaling that you may want to do. For example, instead of
   * display 5 digits of RPM, we can set one of these scalers to 1000 to get
   * rpm / 1000
   */
  int divisor_sig_1_ = 1;
  int divisor_sig_2_ = 1;
  int divisor_sig_3_ = 1;
  int divisor_sig_4_ = 1;

  /*
   * sprintf formatting for each signal
   */
  String format_sig_1_ = "%-4.2f";
  String format_sig_2_ = "%-4.2f";
  String format_sig_3_ = "%-4.2f";
  String format_sig_4_ = "%-4.2f";

  /**
   * Character buffer used for string formatting
   */
  char format_buf_[10] = "\0\0\0\0\0\0\0\0\0";

  /*
   * These hold the signals' previous values.
   * They can be any value now, since they will be overwritten.
   * If you set to 0, it's likely that the screen will be blank upon startup
   * because the signals also have a value of 0.
   */
  float prev_sig_1_ = 1337;
  float prev_sig_2_ = 1337;
  float prev_sig_3_ = 1337;
  float prev_sig_4_ = 1337;

  bool UpdateSignal(int position, bool override = false);
  void DrawLines();
  void DrawLabels();
};

/**
 * Initialize the screen.
 * This draws the labels and updates the screen for the first time.
 */
void ScreenInfo::Initialize() {
  Screen::Initialize();
  DrawLabels();
  unsigned long elapsed = 0;
  ScreenInfo::Update(elapsed, true);
}

void ScreenInfo::DrawLabels() {
  int row_height = display_height_ / 4;
  display_.setTextColor(color_primary_, color_ackground_);
  display_.setTextWrap(false);
  display_.setFont(font_);

  for (int i = 0; i < 4; i++) {
    display_.setCursor(margin_x_, margin_y_ + row_height * i);
    switch (i) {
      case 0:
        display_.print(label_1_);
        break;
      case 1:
        display_.print(label_2_);
        break;
      case 2:
        display_.print(label_3_);
        break;
      case 3:
        display_.print(label_4_);
        break;
    }
  }
}

/**
 * Draws evenly spaced horizontal lines that divide the signals
 */
void ScreenInfo::DrawLines() {
  int row_height = display_height_ / 4;
  display_.drawFastHLine(0, 0, display_width_, color_secondary_);
  display_.drawFastHLine(0, row_height, display_width_, color_secondary_);
  display_.drawFastHLine(0, row_height * 2, display_width_, color_secondary_);
  display_.drawFastHLine(0, row_height * 3, display_width_, color_secondary_);
  display_.drawFastHLine(0, row_height * 4 - 1, display_width_,
                         color_secondary_);
}

/*
 * Sets the information specific to each signal, as well as this signal itself
 *
 * \param pos - The position of the signal on screen. Values can be one through
 * four. \param sig - A pointer to the StateSignal object that updates with the
 * actual value. \param label - The string label to display on the screen.
 * Example "ENG:" for engine \param formatting - the string for formatting the
 * numerical signal. Refer to this for help:
 * https://www.cplusplus.com/reference/cstdio/printf/ \param divisor - Optional
 * integer. Divide the raw signal by the divisor before displaying on screen.
 *                  For example, divide RPM by 1000 to get 12,345 to display
 * as 12.3 in screen. Default value is 1 (no effect)
 */
void ScreenInfo::SetSignal(int pos, StateSignal *sig, String label,
                           String formatting, int divisor) {
  // create references to the objects that we want to change depending on the
  // position
  switch (pos) {
    case 1:
      signal_1_ = sig;
      label_1_ = label;
      format_sig_1_ = formatting;
      divisor_sig_1_ = divisor;
      break;
    case 2:
      signal_2_ = sig;
      label_2_ = label;
      format_sig_2_ = formatting;
      divisor_sig_2_ = divisor;
      break;
    case 3:
      signal_3_ = sig;
      label_3_ = label;
      format_sig_3_ = formatting;
      divisor_sig_3_ = divisor;
      break;
    case 4:
      signal_4_ = sig;
      label_4_ = label;
      format_sig_4_ = formatting;
      divisor_sig_4_ = divisor;
      break;
  }
}

/**
 * Update an individual signal based upon its position
 \param position The signal position on screen (1-4)
 \param override Update the screen info even if the value has not changed
 (default is false)
 */
bool ScreenInfo::UpdateSignal(int position, bool override) {
  // these pointers will point to whatever position's variables that we select
  StateSignal *signal = nullptr;
  int *divisor = nullptr;
  String *format = nullptr;
  float *previous_val = nullptr;
  String *label = nullptr;

  switch (position) {
    case 1:
      signal = signal_1_;
      divisor = &divisor_sig_1_;
      format = &format_sig_1_;
      previous_val = &prev_sig_1_;
      label = &label_1_;
      break;
    case 2:
      signal = signal_2_;
      divisor = &divisor_sig_2_;
      format = &format_sig_2_;
      previous_val = &prev_sig_2_;
      label = &label_2_;
      break;
    case 3:
      signal = signal_3_;
      divisor = &divisor_sig_3_;
      format = &format_sig_3_;
      previous_val = &prev_sig_3_;
      label = &label_3_;
      break;
    case 4:
      signal = signal_4_;
      divisor = &divisor_sig_4_;
      format = &format_sig_4_;
      previous_val = &prev_sig_4_;
      label = &label_4_;
      break;
  }

  // if the signal was never assigned, that means that it is invalid, so return
  if (!signal) {
    return false;
  }

  // if the value is new or there is an override, continue. Otherwise stop the
  // update.
  if (*previous_val != signal->value() || override) {
    *previous_val = signal->value();
  } else {
    return false;
  }

  display_.setFont(font_);
  display_.setTextColor(color_primary_);

  // calculate the formatted string
  sprintf(format_buf_, format->c_str(), signal->value() / *divisor);

  // calculate and set the cursor position based off of the signal and formatted
  // string
  int row_height = display_height_ / 4;
  int x_pos = display_width_ - (strlen(format_buf_) * font_width_);
  int y_pos = row_height * (position - 1) + margin_y_;
  display_.setCursor(x_pos, y_pos);

  // fill the background (can't use text background because it's really large
  // and overlaps other text. We'll draw our own to avoid this.
  int startPos = (*label).length() * font_width_;
  display_.fillRect(startPos, y_pos - margin_y_, display_width_ - startPos,
                    row_height, color_ackground_);

  // send it!
  display_.print(format_buf_);

  // return true because we update it
  return true;
}

/**
 * If the frame rate timer is all good, update the screen
 *
 * \param elapsed The time elapsed in milliseconds since the update was last
 * called
 */
void ScreenInfo::Update(unsigned long &elapsed) { Update(elapsed, false); }

/**
 * If the frame rate timer is all good, update the screen
 *
 * \param elapsed The time elapsed in milliseconds since the update was last
 * called \param override Update the screen info even if the value has not
 * changed (default is false)
 */
void ScreenInfo::Update(unsigned long &elapsed, bool override) {
  if (frame_rate_timer_.isup() || override) {
    bool updated = false;
    for (int i = 1; i <= 4; i++) {
      updated |= UpdateSignal(i, override);
    }

    // finalize the screen and send over SPI
    if (updated || override) {
      DrawLines();
      display_.updateScreen();
    }
  }
}

#endif