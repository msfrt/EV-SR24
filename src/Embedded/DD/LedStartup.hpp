#ifndef LED_STARTUP_HPP
#define LED_STARTUP_HPP

#include <Adafruit_NeoPixel.h>

void LedStartup(Adafruit_NeoPixel &top, Adafruit_NeoPixel &left,
                Adafruit_NeoPixel &right, const int delay_mult) {
  // light up side-bars white
  for (int i = left.numPixels() - 1; i >= 0; i--) {
    for (int pwm = 0; pwm <= 255; pwm += 8) {
      left.setPixelColor(i, pwm, pwm, pwm);
      left.show();
      right.setPixelColor(i, pwm, pwm, pwm);
      right.show();
      delay(delay_mult);
    }
  }

  // light top bar up white
  int current_left = 0;
  int current_right = top.numPixels() - 1;
  while (current_left < current_right) {
    for (int pwm = 0; pwm <= 255; pwm += 8) {
      top.setPixelColor(current_left, pwm, pwm, pwm);
      top.setPixelColor(current_right, pwm, pwm, pwm);
      top.show();
      delay(delay_mult);
    }
    current_left++;
    current_right--;
  }

  // pause for a bit
  delay(delay_mult * 200);

  // turn the whites into greens
  for (int pwm = 255; pwm >= 0; pwm -= 2) {
    for (int i = 0; i <= top.numPixels(); i++) {
      top.setPixelColor(i, pwm, 255, pwm);
      left.setPixelColor(i, pwm, 255, pwm);
      right.setPixelColor(i, pwm, 255, pwm);
    }
    top.show();
    left.show();
    right.show();
    delay(delay_mult);
  }

  // pause for a bit
  delay(delay_mult * 200);

  // turn the top greens into nothing and the sides to red
  for (int pwm = 255; pwm >= 0; pwm--) {
    for (int i = 0; i <= top.numPixels(); i++) {
      top.setPixelColor(i, 0, pwm, 0);
      left.setPixelColor(i, 255 - pwm, pwm, 0);
      right.setPixelColor(i, 255 - pwm, pwm, 0);
    }
    top.show();
    left.show();
    right.show();
    delay(delay_mult);
  }

  // pause for a bit
  delay(delay_mult * 200);

  // cascade the sides down
  for (int i = 0; i <= left.numPixels(); i++) {
    for (int pwm = 255; pwm >= 0; pwm--) {
      left.setPixelColor(i, pwm, 0, 0);
      left.show();
      right.setPixelColor(i, pwm, 0, 0);
      right.show();
      delayMicroseconds(delay_mult * 200);
    }
  }
}

#endif
