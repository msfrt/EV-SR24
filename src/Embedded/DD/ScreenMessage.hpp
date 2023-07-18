#ifndef SCREEN_MESSAGE_H
#define SCREEN_MESSAGE_H

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
class ScreenMessage : public Screen {
 public:
  /** Constructor */
  ScreenMessage(ILI9341_t3n &disp) : Screen(disp){};

  /** Destructor */
  virtual ~ScreenMessage(){};

  /** Copy constructor disabled */
  ScreenMessage(const ScreenMessage &) = delete;
  /** Assignment operator disabled */
  void operator=(const ScreenMessage &) = delete;

  virtual void Initialize() override;
  virtual void Update(unsigned long &elapsed) override;

  /**
   * Sets the message that is to be displayed upon a call to Update
   * \param message The message (max 8 characters) to display on the screen
   */
  void SetMessage(String message) { message_ = message; }

 private:
  /*
   * Constants that affect the spacing of objects on the displau
   */
  const int margin_x_ = 1;   ///< horizontal padding pixels
  const int margin_y_ = 12;  ///< veritcal padding pixels
  const ILI9341_t3_font_t &font_label_ =
      LiberationMono_32_Bold_Italic;  ///< The font for the screen label
  const ILI9341_t3_font_t &font_ = LiberationMono_48_Bold;  ///< The font to use
  const int font_height_ = 48;  ///< The height of the font in pixels
  const int font_width_ =
      35;  ///< the font width in pixels (I think that you need to guess this)
  const int max_chars_ =
      8;  ///< The maximum number of characters that the screen can display

  String message_ = "yessir!!";  ///< The message to be displayed on the screen
                                 ///< upon a call to Initialize()
  String label_ =
      "Message:";  ///< The label to display on the top of the screen
};

/**
 * Initialize the screen.
 * This draws the labels and updates the screen for the first time.
 */
void ScreenMessage::Initialize() {
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

  // String.length() seems to be counting \0 as a character... how dum
  int real_length = 0;
  for (unsigned int i = 0; i < message_.length(); i++) {
    if (message_.c_str()[i] != '\0') {
      real_length += 1;
    }
  }

  Serial.println(real_length);

  display_.setCursor(
      (max_chars_ - real_length) * ((display_width_ / 2) / max_chars_),
      display_height_ / 2 - font_height_ / 2);
  display_.setFont(font_);
  display_.print(message_);

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
void ScreenMessage::Update(unsigned long &elapsed) {
  // do nothing here, since everything is controlled in the initialization
  // function
}

#endif