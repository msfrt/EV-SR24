#include <EasyTimer.h>
#include <PWMControl.h>
#include <ReadADC.h>
#include <StateCAN.h>
#include <FlexCAN_T4.h>
#include <SPI.h>
#include <Adafruit_NeoPixel.h>

// bus and message_t definition
FlexCAN_T4<CAN1, RX_SIZE_256, TX_SIZE_16> cbus2;
static CAN_message_t msg;
#define CAN1_BAUDRATE 1000000

// signal definitions
#include "CAN/CAN1.hpp"
#include "CAN/CAN2.hpp"

// ATCC Module Select - 0 front, 1 back
const int ATCCMS = 1;

// sensor definitions
#include "sensors.hpp"

// outgoing can message definitions
#include "can_send.hpp"

// brake bias calculation for front ATCC
#include "bias_calc.hpp"

// rotor temp calculation for ATCC
#include "rotor_temp_calc.hpp"

// rainbow RGB
#include "rainbow_pixels.hpp"

void setup() {
  
}

void loop() {

  //msu_pixels(GLO_neopixel);

  // STMM Module Select
  const int STMM = 0;
  switch (STMM)
  {
    case 1:
      sample_ADCs_1();
      send_can_1();
      break;

    case 2:
      sample_ADCs_2();
      send_can_2();
      break;

    case 3:
      sample_ADCs_3();
      send_can_3();
      break;

    case 4:
      sample_ADCs_4();
      send_can_4();
      break;

    case 5:
      sample_ADCs_5();
      send_can_5();
      break;

    case 6:
      sample_ADCs_6();
      send_can_6();
      break;

    case 7:
      sample_ADCs_7();
      send_can_7();
      break;

    case 8:
      sample_ADCs_8();
      send_can_8();
      break;
      
  }
}