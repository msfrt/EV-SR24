#include <Adafruit_NeoPixel.h>
#include <EasyTimer.h>



// RGB LEDs are siiiccckkkkkkk bro
void rainbow_pixels(Adafruit_NeoPixel &pixels1){

  // static variable definitions. The only thing to change here is the frequency in the rgb_update_timer
  static EasyTimer rgb_update_timer(15);
  static int red = 255;
  static int green = 0;
  static int blue = 0;
  static int current_step = 0;

  if (rgb_update_timer.isup()){

    // set the pixels1
    for (int i = 0; i <= pixels1.numPixels(); i++){
      pixels1.setPixelColor(i, red, green, blue);
    }

    // output the pixel colors
    pixels1.show();



    // change the RGB colors
    // division is done by 17, because after 17 increments of (+) or (-) 15, you will be at 255 or 0.
    if (current_step / 17 == 0){
      blue += 15;

    } else if (current_step / 17 == 1){
      red -= 15;

    } else if (current_step / 17 == 2){
      green += 15;

    } else if (current_step / 17 == 3){
      blue -= 15;

    } else if (current_step / 17 == 4){
      red += 15;

    } else if (current_step / 17 == 5){
      green -= 15;

    // reset
    } else {
      red = 255;
      green = 0;
      blue = 0;
      current_step = -1;
    }

    // increment the step counter
    current_step++;

  } // end update timer
}


// RGB LEDs are siiiccckkkkkkk bro
void msu_pixels(Adafruit_NeoPixel &pixels1){
  // static variable definitions. The only thing to change here is the step value
  static int red = 255;
  static int green = 255;
  static int blue = 255;
  static EasyTimer update_timer(24);  // Hz
  static float current_step = 1.57;  // 0 - 3.1415 is an entire loop, start white
  static const float step_size = 0.05;  

  if (update_timer.isup()){

    // set the pixels1
    for (int i = 0; i <= pixels1.numPixels(); i++){
      pixels1.setPixelColor(i, red, green, blue);
    }

    // output the pixel colors
    pixels1.show();


    float write_val = abs(sin(current_step) * 1000);  // returns a value between 0 & 1000
    current_step += step_size;
    red  = map(write_val, 0, 1000, 0, 255);
    blue = map(write_val, 0, 1000, 0, 255);


  } // end update timer
}
