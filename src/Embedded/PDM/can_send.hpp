#ifndef CAN_MESSAGES_HPP
#define CAN_MESSAGES_HPP

#include <FlexCAN_T4.h>
#include <EasyTimer.h>
#include <BoardTemp.h>
#include "CAN/CAN1.hpp"
#include "CAN/CAN2.hpp"


// external definitions
extern int OBDFLAG_oil_pressure;
extern int OBDFLAG_oil_temp;
extern int OBDFLAG_fuel_pressure;


static CAN_message_t msg;

// send message definitions

// look at PDM 10 for structure
void send_PDM_09(){
  static StateCounter ctr;

  msg.id = 259;
  msg.len = 8;

  msg.buf[0] = OBDFLAG_oil_pressure;
  msg.buf[1] = OBDFLAG_oil_temp;
  msg.buf[2] = OBDFLAG_fuel_pressure;
  msg.buf[3] = 0;
  msg.buf[4] = 0;
  msg.buf[5] = 0;
  msg.buf[6] = 0;
  msg.buf[7] = GLO_engine_state & 0b11111111;

  can2.write(msg);
}



void send_PDM_10(){
  // the following line initializes a counter that is specific to PDM_10, but is static, so it's only created once.
  static StateCounter ctr;

  // update message ID and length
  msg.id = 260;
  msg.len = 8;

  // since the last calculation event, this records the sensor data into the actual signals. The calculations are
  // done automatically. why don't we simply just throw the sensors into the can message buffer, you ask? Well, the
  // signals are global and are used elsewhere for other important PDM functions.
  PDM_pdmCurrentAvg = pdm_current_sens.avg();
  PDM_pdmCurrentMax = pdm_current_sens.max();
  PDM_pdmCurrentMin = pdm_current_sens.min();

  // load up the message buffer
  msg.buf[0] = ctr.value() | GLO_data_log_bool << 7;
  msg.buf[1] = 0;
  msg.buf[2] = PDM_pdmCurrentAvg.can_value();
  msg.buf[3] = PDM_pdmCurrentAvg.can_value() >> 8;
  msg.buf[4] = PDM_pdmCurrentMax.can_value();
  msg.buf[5] = PDM_pdmCurrentMax.can_value() >> 8;
  msg.buf[6] = PDM_pdmCurrentMin.can_value();
  msg.buf[7] = PDM_pdmCurrentMin.can_value() >> 8;

  // send the message
  can2.write(msg);
}



void send_PDM_11(){
  static StateCounter ctr;
  msg.id = 261;
  msg.len = 8;

  PDM_pdmVoltAvg = pdm_volt_sens.avg();
  PDM_pdmVoltMax = pdm_volt_sens.max();
  PDM_pdmVoltMin = pdm_volt_sens.min();

  msg.buf[0] = ctr.value();
  msg.buf[1] = 0;
  msg.buf[2] = PDM_pdmVoltAvg.can_value();
  msg.buf[3] = PDM_pdmVoltAvg.can_value() >> 8;
  msg.buf[4] = PDM_pdmVoltMax.can_value();
  msg.buf[5] = PDM_pdmVoltMax.can_value() >> 8;
  msg.buf[6] = PDM_pdmVoltMin.can_value();
  msg.buf[7] = PDM_pdmVoltMin.can_value() >> 8;

  can2.write(msg);
}


void send_PDM_12(){
  static StateCounter ctr;
  msg.id = 262;
  msg.len = 8;

  PDM_fanRightCurrentAvg = fanr_current_sens.avg();
  PDM_fanRightCurrentMax = fanr_current_sens.max();
  PDM_fanRightCurrentMin = fanr_current_sens.min();

  msg.buf[0] = ctr.value();
  msg.buf[1] = 0;
  msg.buf[2] = PDM_fanRightCurrentAvg.can_value();
  msg.buf[3] = PDM_fanRightCurrentAvg.can_value() >> 8;
  msg.buf[4] = PDM_fanRightCurrentMax.can_value();
  msg.buf[5] = PDM_fanRightCurrentMax.can_value() >> 8;
  msg.buf[6] = PDM_fanRightCurrentMin.can_value();
  msg.buf[7] = PDM_fanRightCurrentMin.can_value() >> 8;

  can2.write(msg);
}


void send_PDM_13(){
  static StateCounter ctr;
  msg.id = 263;
  msg.len = 8;

  PDM_fanRightVoltAvg = fanr_volt_sens.avg();
  PDM_fanRightVoltMax = fanr_volt_sens.max();
  PDM_fanRightVoltMin = fanr_volt_sens.min();

  msg.buf[0] = ctr.value();
  msg.buf[1] = 0;
  msg.buf[2] = PDM_fanRightVoltAvg.can_value();
  msg.buf[3] = PDM_fanRightVoltAvg.can_value() >> 8;
  msg.buf[4] = PDM_fanRightVoltMax.can_value();
  msg.buf[5] = PDM_fanRightVoltMax.can_value() >> 8;
  msg.buf[6] = PDM_fanRightVoltMin.can_value();
  msg.buf[7] = PDM_fanRightVoltMin.can_value() >> 8;

  can2.write(msg);
}


void send_PDM_14(){
  static StateCounter ctr;
  msg.id = 264;
  msg.len = 8;

  PDM_fanLeftCurrentAvg = fanl_current_sens.avg();
  PDM_fanLeftCurrentMax = fanl_current_sens.max();
  PDM_fanLeftCurrentMin = fanl_current_sens.min();

  msg.buf[0] = ctr.value();
  msg.buf[1] = 0;
  msg.buf[2] = PDM_fanLeftCurrentAvg.can_value();
  msg.buf[3] = PDM_fanLeftCurrentAvg.can_value() >> 8;
  msg.buf[4] = PDM_fanLeftCurrentMax.can_value();
  msg.buf[5] = PDM_fanLeftCurrentMax.can_value() >> 8;
  msg.buf[6] = PDM_fanLeftCurrentMin.can_value();
  msg.buf[7] = PDM_fanLeftCurrentMin.can_value() >> 8;

  can2.write(msg);
}


void send_PDM_15(){
  static StateCounter ctr;
  msg.id = 265;
  msg.len = 8;

  PDM_fanLeftVoltAvg = fanl_volt_sens.avg();
  PDM_fanLeftVoltMax = fanl_volt_sens.max();
  PDM_fanLeftVoltMin = fanl_volt_sens.min();

  msg.buf[0] = ctr.value();
  msg.buf[1] = 0;
  msg.buf[2] = PDM_fanLeftVoltAvg.can_value();
  msg.buf[3] = PDM_fanLeftVoltAvg.can_value() >> 8;
  msg.buf[4] = PDM_fanLeftVoltMax.can_value();
  msg.buf[5] = PDM_fanLeftVoltMax.can_value() >> 8;
  msg.buf[6] = PDM_fanLeftVoltMin.can_value();
  msg.buf[7] = PDM_fanLeftVoltMin.can_value() >> 8;

  can2.write(msg);
}


void send_PDM_16(){
  static StateCounter ctr;
  msg.id = 266;
  msg.len = 8;

  PDM_wpCurrentAvg = wp_current_sens.avg();
  PDM_wpCurrentMax = wp_current_sens.max();
  PDM_wpCurrentMin = wp_current_sens.min();

  msg.buf[0] = ctr.value();
  msg.buf[1] = 0;
  msg.buf[2] = PDM_wpCurrentAvg.can_value();
  msg.buf[3] = PDM_wpCurrentAvg.can_value() >> 8;
  msg.buf[4] = PDM_wpCurrentMax.can_value();
  msg.buf[5] = PDM_wpCurrentMax.can_value() >> 8;
  msg.buf[6] = PDM_wpCurrentMin.can_value();
  msg.buf[7] = PDM_wpCurrentMin.can_value() >> 8;

  can2.write(msg);
}


void send_PDM_17(){
  static StateCounter ctr;
  msg.id = 267;
  msg.len = 8;

  PDM_wpVoltAvg = wp_volt_sens.avg();
  PDM_wpVoltMax = wp_volt_sens.max();
  PDM_wpVoltMin = wp_volt_sens.min();

  msg.buf[0] = ctr.value();
  msg.buf[1] = 0;
  msg.buf[2] = PDM_wpVoltAvg.can_value();
  msg.buf[3] = PDM_wpVoltAvg.can_value() >> 8;
  msg.buf[4] = PDM_wpVoltMax.can_value();
  msg.buf[5] = PDM_wpVoltMax.can_value() >> 8;
  msg.buf[6] = PDM_wpVoltMin.can_value();
  msg.buf[7] = PDM_wpVoltMin.can_value() >> 8;

  can2.write(msg);
}


void send_PDM_18(){
  static StateCounter ctr;
  msg.id = 268;
  msg.len = 8;

  PDM_fuelCurrentAvg = fuel_current_sens.avg();
  PDM_fuelCurrentMax = fuel_current_sens.max();
  PDM_fuelCurrentMin = fuel_current_sens.min();

  msg.buf[0] = ctr.value();
  msg.buf[1] = 0;
  msg.buf[2] = PDM_fuelCurrentAvg.can_value();
  msg.buf[3] = PDM_fuelCurrentAvg.can_value() >> 8;
  msg.buf[4] = PDM_fuelCurrentMax.can_value();
  msg.buf[5] = PDM_fuelCurrentMax.can_value() >> 8;
  msg.buf[6] = PDM_fuelCurrentMin.can_value();
  msg.buf[7] = PDM_fuelCurrentMin.can_value() >> 8;

  can2.write(msg);
}


void send_PDM_19(){
  static StateCounter ctr;
  msg.id = 269;
  msg.len = 8;

  PDM_fuelVoltAvg = fuel_volt_sens.avg();
  PDM_fuelVoltMax = fuel_volt_sens.max();
  PDM_fuelVoltMin = fuel_volt_sens.min();

  msg.buf[0] = ctr.value();
  msg.buf[1] = 0;
  msg.buf[2] = PDM_fuelVoltAvg.can_value();
  msg.buf[3] = PDM_fuelVoltAvg.can_value() >> 8;
  msg.buf[4] = PDM_fuelVoltMax.can_value();
  msg.buf[5] = PDM_fuelVoltMax.can_value() >> 8;
  msg.buf[6] = PDM_fuelVoltMin.can_value();
  msg.buf[7] = PDM_fuelVoltMin.can_value() >> 8;

  can2.write(msg);
}


void send_PDM_20(){
  static StateCounter ctr;
  msg.id = 270;
  msg.len = 8;

  PDM_mainVoltAvg = main_volt_sens.avg();
  PDM_mainVoltMax = main_volt_sens.max();
  PDM_mainVoltMin = main_volt_sens.min();

  msg.buf[0] = ctr.value();
  msg.buf[1] = 0;
  msg.buf[2] = PDM_mainVoltAvg.can_value();
  msg.buf[3] = PDM_mainVoltAvg.can_value() >> 8;
  msg.buf[4] = PDM_mainVoltMax.can_value();
  msg.buf[5] = PDM_mainVoltMax.can_value() >> 8;
  msg.buf[6] = PDM_mainVoltMin.can_value();
  msg.buf[7] = PDM_mainVoltMin.can_value() >> 8;

  can2.write(msg);
}


void send_PDM_21(){
  static StateCounter ctr;
  msg.id = 271;
  msg.len = 8;

  PDM_dataVoltAvg = data_volt_sens.avg();
  PDM_dataVoltMax = data_volt_sens.max();
  PDM_dataVoltMin = data_volt_sens.min();

  msg.buf[0] = ctr.value();
  msg.buf[1] = 0;
  msg.buf[2] = PDM_dataVoltAvg.can_value();
  msg.buf[3] = PDM_dataVoltAvg.can_value() >> 8;
  msg.buf[4] = PDM_dataVoltMax.can_value();
  msg.buf[5] = PDM_dataVoltMax.can_value() >> 8;
  msg.buf[6] = PDM_dataVoltMin.can_value();
  msg.buf[7] = PDM_dataVoltMin.can_value() >> 8;

  can2.write(msg);
}



void send_PDM_22(){
  static StateCounter ctr;
  msg.id = 272;
  msg.len = 8;

  PDM_keepAliveVoltAvg = keepalive_volt_sens.avg();
  PDM_keepAliveVoltMax = keepalive_volt_sens.max();
  PDM_keepAliveVoltMin = keepalive_volt_sens.min();

  msg.buf[0] = ctr.value();
  msg.buf[1] = 0;
  msg.buf[2] = PDM_keepAliveVoltAvg.can_value();
  msg.buf[3] = PDM_keepAliveVoltAvg.can_value() >> 8;
  msg.buf[4] = PDM_keepAliveVoltMax.can_value();
  msg.buf[5] = PDM_keepAliveVoltMax.can_value() >> 8;
  msg.buf[6] = PDM_keepAliveVoltMin.can_value();
  msg.buf[7] = PDM_keepAliveVoltMin.can_value() >> 8;

  can2.write(msg);
}


void send_PDM_23(){
  static StateCounter ctr;
  msg.id = 273;
  msg.len = 8;

  PDM_boardTemp = board_temp.value();
  PDM_brakelightVoltAvg = brakelight_volt_sens.avg();
  PDM_starterRelayVoltAvg = starter_volt_sens.avg();

  msg.buf[0] = ctr.value();
  msg.buf[1] = 0;
  msg.buf[2] = PDM_boardTemp.can_value();
  msg.buf[3] = PDM_boardTemp.can_value() >> 8;
  msg.buf[4] = PDM_brakelightVoltAvg.can_value();
  msg.buf[5] = PDM_brakelightVoltAvg.can_value() >> 8;
  msg.buf[6] = PDM_starterRelayVoltAvg.can_value();
  msg.buf[7] = PDM_starterRelayVoltAvg.can_value() >> 8;

  can2.write(msg);
}


void send_PDM_24(){
  static StateCounter ctr;
  msg.id = 274;
  msg.len = 8;

  PDM_fanLeftDutyCycle = fan_left.actual();
  PDM_fanRightDutyCycle = fan_right.actual();
  PDM_wpDutyCycle = water_pump.actual();
  PDM_teensyTemp = tempmonGetTemp(); // built-in teensy function

  msg.buf[0] = ctr.value();
  msg.buf[1] = 0;
  msg.buf[2] = PDM_fanLeftDutyCycle.can_value();
  msg.buf[3] = PDM_fanRightDutyCycle.can_value();
  msg.buf[4] = PDM_wpDutyCycle.can_value();
  msg.buf[5] = 0;
  msg.buf[6] = PDM_teensyTemp.can_value();
  msg.buf[7] = PDM_teensyTemp.can_value() >> 8;

  can2.write(msg);
}



void send_PDM_25(){
  static StateCounter ctr;
  msg.id = 275;
  msg.len = 8;

  // eeprom.read(eeprom_engine_hours);
  // eeprom.read(eeprom_engine_minutes);
  // eeprom.read(eeprom_mileage);

  msg.buf[0] = ctr.value();
  msg.buf[1] = 0;
  msg.buf[2] = eeprom_mileage.value();
  msg.buf[3] = eeprom_mileage.value() >> 8;
  msg.buf[4] = eeprom_engine_hours.value();
  msg.buf[5] = eeprom_engine_hours.value() >> 8;
  msg.buf[6] = eeprom_engine_minutes.value();
  msg.buf[7] = eeprom_engine_minutes.value() >> 8;

  can2.write(msg);
}


void send_PDM_26(){
  msg.id = 0x114;
  msg.len = 8;

  auto time = millis();

  msg.buf[1] = time;
  msg.buf[2] = time >> 8;
  msg.buf[3] = time >> 16;
  msg.buf[4] = time >> 24;
  msg.buf[5] = 0;
  msg.buf[6] = 0;
  msg.buf[7] = 0;

  can2.write(msg);
}


void send_can1(){
  // hey, there's nothing in here! (for now, at least)
}

void send_can2(){

  static EasyTimer PDM_09_timer(10); // 10Hz
  if (PDM_09_timer.isup()){
    send_PDM_09();
  }

  static EasyTimer PDM_10_timer(100); // 100Hz
  if (PDM_10_timer.isup()){
    send_PDM_10();
  }

  static EasyTimer PDM_11_timer(100); // 100Hz
  if (PDM_11_timer.isup()){
    send_PDM_11();
  }

  static EasyTimer PDM_12_timer(100); // 100Hz
  if (PDM_12_timer.isup()){
    send_PDM_12();
  }

  static EasyTimer PDM_13_timer(100); // 100Hz
  if (PDM_13_timer.isup()){
    send_PDM_13();
  }

  static EasyTimer PDM_14_timer(100); // 100Hz
  if (PDM_14_timer.isup()){
    send_PDM_14();
  }

  static EasyTimer PDM_15_timer(100); // 100Hz
  if (PDM_15_timer.isup()){
    send_PDM_15();
  }

  static EasyTimer PDM_16_timer(100); // 100Hz
  if (PDM_16_timer.isup()){
    send_PDM_16();
  }

  static EasyTimer PDM_17_timer(100); // 100Hz
  if (PDM_17_timer.isup()){
    send_PDM_17();
  }

  static EasyTimer PDM_18_timer(100); // 100Hz
  if (PDM_18_timer.isup()){
    send_PDM_18();
  }

  static EasyTimer PDM_19_timer(100); // 100Hz
  if (PDM_19_timer.isup()){
    send_PDM_19();
  }

  static EasyTimer PDM_20_timer(100); // 100Hz
  if (PDM_20_timer.isup()){
    send_PDM_20();
  }

  static EasyTimer PDM_21_timer(100); // 100Hz
  if (PDM_21_timer.isup()){
    send_PDM_21();
  }

  static EasyTimer PDM_22_timer(100); // 100Hz
  if (PDM_22_timer.isup()){
    send_PDM_22();
  }

  static EasyTimer PDM_23_timer(50); // 50Hz
  if (PDM_23_timer.isup()){
    send_PDM_23();
  }

  static EasyTimer PDM_24_timer(50); // 50Hz
  if (PDM_24_timer.isup()){
    send_PDM_24();
  }

  static EasyTimer PDM_25_timer(10); // 10Hz
  if (PDM_25_timer.isup()){
    send_PDM_25();
  }

  static EasyTimer PDM_26_timer(50); // 50 Hz
  if (PDM_26_timer.isup()){
    send_PDM_26();
  }

}

#endif
