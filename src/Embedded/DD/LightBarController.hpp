#ifndef LightBarCONTROLLER_HPP
#define LightBarCONTROLLER_HPP

#include "CAN/CAN1.hpp"
#include "CAN/CAN2.hpp"
#include "LightBarBlink.hpp"
#include "LightBarBlinkSinusoidal.hpp"
#include "LightBarRPM.hpp"

class LightBarController {
 public:
  LightBarController(Adafruit_NeoPixel &left, Adafruit_NeoPixel &top,
                     Adafruit_NeoPixel &right);

  /** Destructor */
  ~LightBarController();

  /** Copy constructor disabled */
  LightBarController(const LightBarController &) = delete;
  /** Assignment operator disabled */
  void operator=(const LightBarController &) = delete;

  /// the different states that the LEDs can be in. Please note that states
  /// should include transitionary states
  enum LEDStates { Normal, Notification };

  /**
   * Gets the current state of the leds
   * @returns the led state
   */
  int GetState() { return state_; }

  void Update(unsigned long &elapsed);
  void Initialize();
  void OnButtonPress();
  void OnNotificationRecieved(int R, int G, int B);

  /**
   *  Returns true if the a notification state is active
   */
  bool IsNotificationActive() const { return state_ == Notification; }

 private:
  Adafruit_NeoPixel &left_leds_;
  Adafruit_NeoPixel &top_leds_;
  Adafruit_NeoPixel &right_leds_;

  void SetState(LEDStates state);

  LEDStates state_;  ///< screen states
  unsigned long state_start_time_ =
      0;  ///< The time in milliseconds that the current state started

  unsigned int notification_duration_ =
      5000;  ///< How long to show the notification lights in milliseconds when
             ///< a notification is recieved
  int notification_blink_frequency_ =
      10;  ///< The frequency of blinking for notifications

  LightBarRPM *rpm_signal_bar_gear_N_ = nullptr;
  LightBarRPM *rpm_signal_bar_gear_1_ = nullptr;
  LightBarRPM *rpm_signal_bar_gear_2_ = nullptr;
  LightBarRPM *rpm_signal_bar_gear_3_ = nullptr;
  LightBarRPM *rpm_signal_bar_gear_4_ = nullptr;
  LightBarRPM *rpm_signal_bar_gear_5_ = nullptr;
  LightBarBlink *tc_bar_left_ = nullptr;
  LightBarBlink *tc_bar_right_ = nullptr;

  LightBarBlinkSinusoidal *cooling_light_left_ = nullptr; 
  LightBarBlinkSinusoidal *cooling_light_right_ = nullptr;

  LightBarBlink *notification_bar_left_ = nullptr;
  LightBarBlink *notification_bar_right_ = nullptr;
};

/**
 * Constructor
 *
 * Constructs screens for all of the states and then sets the initial state
 */
LightBarController::LightBarController(Adafruit_NeoPixel &left,
                                       Adafruit_NeoPixel &top,
                                       Adafruit_NeoPixel &right)
    : left_leds_(left), top_leds_(top), right_leds_(right) {
  /* Normal Operation */
  int max_rpm = 13000;
  int min_rpm = 3000;
  int downshift_rpm = -1;
  rpm_signal_bar_gear_N_ =
      new LightBarRPM(top_leds_, 0, top_leds_.numPixels(), M400_rpm, min_rpm,
                      max_rpm, downshift_rpm);

  max_rpm = 13224;
  min_rpm = max_rpm - 4000;
  downshift_rpm = -1;
  rpm_signal_bar_gear_1_ =
      new LightBarRPM(top_leds_, 0, top_leds_.numPixels(), M400_rpm, min_rpm,
                      max_rpm, downshift_rpm);

  max_rpm = 11900;
  min_rpm = max_rpm - 4000;
  downshift_rpm = 9362;
  rpm_signal_bar_gear_2_ =
      new LightBarRPM(top_leds_, 0, top_leds_.numPixels(), M400_rpm, min_rpm,
                      max_rpm, downshift_rpm);

  max_rpm = 12000;
  min_rpm = 3000;
  downshift_rpm = 9703;
  rpm_signal_bar_gear_3_ =
      new LightBarRPM(top_leds_, 0, top_leds_.numPixels(), M400_rpm, min_rpm,
                      max_rpm, downshift_rpm);

  max_rpm = 12000;
  min_rpm = max_rpm - 4000;
  downshift_rpm = 9783;
  rpm_signal_bar_gear_4_ =
      new LightBarRPM(top_leds_, 0, top_leds_.numPixels(), M400_rpm, min_rpm,
                      max_rpm, downshift_rpm);

  max_rpm = 14000;
  min_rpm = max_rpm - 4000;
  downshift_rpm = 9855;
  rpm_signal_bar_gear_5_ =
      new LightBarRPM(top_leds_, 0, top_leds_.numPixels(), M400_rpm, min_rpm,
                      max_rpm, downshift_rpm);

  cooling_light_left_ = new LightBarBlinkSinusoidal(left_leds_, 0, 1);
  cooling_light_left_->AttachSignal(&PDM_coolingOverrideActive, 1);
  cooling_light_left_->SetColor(0, 255, 255);  // aqua!

  cooling_light_right_ = new LightBarBlinkSinusoidal(right_leds_, 0, 1);
  cooling_light_right_->AttachSignal(&PDM_coolingOverrideActive, 1);
  cooling_light_right_->SetColor(0, 255, 255);  // aqua!

  tc_bar_left_ = new LightBarBlink(left_leds_, 1, 3);
  tc_bar_left_->AttachSignal(&M400_tcPowerReduction, 1);
  tc_bar_left_->SetColor(150, 0, 255);

  tc_bar_right_ = new LightBarBlink(right_leds_, 1, 3);
  tc_bar_right_->AttachSignal(&M400_tcPowerReduction, 1);
  tc_bar_right_->SetColor(150, 0, 255);

  /* Notification bars */
  notification_bar_left_ =
      new LightBarBlink(left_leds_, 0, left_leds_.numPixels());
  notification_bar_left_->SetFrequency(notification_blink_frequency_);
  notification_bar_right_ =
      new LightBarBlink(right_leds_, 0, right_leds_.numPixels());
  notification_bar_right_->SetFrequency(notification_blink_frequency_);
}

/**
 * Destructor
 *
 * Destructs all dynamically allocated things
 */
LightBarController::~LightBarController() {
  delete rpm_signal_bar_gear_N_;
  delete rpm_signal_bar_gear_1_;
  delete rpm_signal_bar_gear_2_;
  delete rpm_signal_bar_gear_3_;
  delete rpm_signal_bar_gear_4_;
  delete rpm_signal_bar_gear_5_;
  delete tc_bar_left_;
  delete tc_bar_right_;
  delete cooling_light_left_;
  delete cooling_light_right_;

  delete notification_bar_left_;
  delete notification_bar_right_;
}

/**
 * Initialize
 *
 * Sets the first state for the controller
 */
void LightBarController::Initialize() { SetState(Normal); }

/**
 * Update
 *
 * This is called as frequently as possible. If the time is allowable for an
 * update the updates are processed and the screens are written. \param elapsed
 * The time in milliseconds since the update method was last called
 */
void LightBarController::Update(unsigned long &elapsed) {
  switch (state_) {
    case Normal:
      tc_bar_left_->Update(elapsed);
      tc_bar_right_->Update(elapsed);
      cooling_light_left_->Update(elapsed);
      cooling_light_right_->Update(elapsed);
      rpm_signal_bar_gear_N_->Update(elapsed);
      break;
    case Notification:
      rpm_signal_bar_gear_N_->Update(elapsed);  // keep updating RPM bar
      notification_bar_left_->Update(elapsed);
      notification_bar_right_->Update(elapsed);

      // if the notification duration has expired, go back to normal operation
      if (millis() - state_start_time_ > notification_duration_) {
        SetState(Normal);
      }
      break;
  }
}

/**
 * Used internally to set the state of the screens. Handles exit and enter
 * funcitonality for the screens.
 *
 * \param state The state to set
 */
void LightBarController::SetState(LEDStates state) {
  /*
   * State exiting actions
   */
  switch (state_) {
    case Normal:
      break;
    case Notification:
      // get rid of the lights for any light that was previously unused by other
      // modes
      notification_bar_left_->Clear();
      notification_bar_right_->Clear();
      break;
  }

  /*
   * Set the state
   */
  state_ = state;                // move new input state to current state
  state_start_time_ = millis();  // update state start time

  /*
   * State entering actions
   */
  switch (state_) {
    case Normal:
      tc_bar_left_->Initialize();
      tc_bar_right_->Initialize();
      cooling_light_left_->Initialize();
      cooling_light_right_->Initialize();
      rpm_signal_bar_gear_N_->Initialize();
      break;
    case Notification:
      notification_bar_left_->Initialize();
      notification_bar_right_->Initialize();
      break;
  }
}

/**
 * Called when the control button is pressed. This can either change the screen
 * state or disable the current notification screen.
 */
void LightBarController::OnButtonPress() {
  switch (state_) {
    case Normal:
      break;
    case Notification:
      SetState(Normal);
      break;
  }
}

/**
 * Set the colors when the notification light
 */
void LightBarController::OnNotificationRecieved(int R, int G, int B) {
  notification_bar_left_->SetColor(R, G, B);
  notification_bar_right_->SetColor(R, G, B);
  SetState(Notification);
}

#endif
