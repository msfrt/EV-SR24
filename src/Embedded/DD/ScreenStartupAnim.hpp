#ifndef SCREENSTARTUPANIM_H
#define SCREENSTARTUPANIM_H

#include <EasyTimer.h>
#include <StateCAN.h>

#include "ILI9341_t3n.h"
#include "Screen.hpp"
#include "arduino.h"
#include "images/SpartanBitmap.hpp"
#include "images/StateRacingBitmap.hpp"

/*
 * base class for all screen displays
 */
class ScreenStartupAnim : public Screen {
 public:
  ScreenStartupAnim(ILI9341_t3n &disp);

  /** Destructor */
  virtual ~ScreenStartupAnim(){};

  /** Copy constructor disabled */
  ScreenStartupAnim(const ScreenStartupAnim &) = delete;
  /** Assignment operator disabled */
  void operator=(const ScreenStartupAnim &) = delete;

  // virtual void Initialize() override;
  virtual void Update(unsigned long &elapsed) override;

  /* Animation completion
   * \returns true when the animation has been completed
   */
  bool IsCompleted() { return completed_; }

 private:
  bool completed_ =
      false;  ///< If the animation is complete, this is set to true

  float sparty_pos_x_ = 0;    ///< current X position of sparty in pixels
  float sparty_pos_y_ = 0;    ///< current Y position of sparty in pixels
  float sparty_speed_ = 400;  ///< Speed in pixels per second

  int state_racing_pos_x_ =
      0;  ///< current X position of state racing in pixels
  int state_racing_pos_y_ =
      0;  ///< current Y position of state racing in pixels
};

/**
 * Constructor
 * \param disp The low-level dispay class
 */
ScreenStartupAnim::ScreenStartupAnim(ILI9341_t3n &disp) : Screen(disp) {
  // set max framerate to 30 fps (this will never be achieved lol)
  frame_rate_timer_.set_frequency(30);

  sparty_pos_y_ = (display_height_ - spartanBitmapHeight) /
                  2;  // center the sparty vertically
  sparty_pos_x_ = -spartanBitmapWidth;

  state_racing_pos_y_ = (display_height_ - stateRacingBitmapHeight) / 2;
  state_racing_pos_x_ = (display_width_ - stateRacingBitmapWidth) / 2;
};

/**
 * If the frame rate timer is all good, update the screen
 */
void ScreenStartupAnim::Update(unsigned long &elapsed) {
  float seconds_elapsed = float(elapsed) / 1000.0;

  sparty_pos_x_ += seconds_elapsed * sparty_speed_;

  if (frame_rate_timer_.isup()) {
    display_.fillScreen(color_ackground_);

    // draw state racing bitmap
    display_.drawBitmap(state_racing_pos_x_, state_racing_pos_y_,
                        stateRacingBitmap, stateRacingBitmapWidth,
                        stateRacingBitmapHeight, color_primary_);

    // cover part of the SR bitmap with black so sparty reveals it
    display_.fillRect(sparty_pos_x_ + 20, sparty_pos_y_,
                      display_width_ - sparty_pos_x_, spartanBitmapHeight,
                      color_ackground_);

    // draw sparty at the current position
    display_.drawBitmap(sparty_pos_x_, sparty_pos_y_, spartanBitmap,
                        spartanBitmapWidth, spartanBitmapHeight,
                        color_secondary_);

    // send the updates to the screen
    display_.updateScreen();
  }

  // determine if sparty if off of the screen yet ("we are complete")
  if (sparty_pos_x_ >= display_width_) {
    completed_ = true;
  }
}

#endif