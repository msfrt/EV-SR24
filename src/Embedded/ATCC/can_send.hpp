#ifndef CAN_SEND_ATCC_HPP
#define CAN_SEND_ATCC_HPP

#include <FlexCAN_T4.h>
#include "CAN/CAN1.hpp"
#include "CAN/CAN2.hpp"

#include "sensors.hpp"


// message definitions below

//Front ATCC
void send_ATCCF_10(){
  // static definition - only defined once (like a global variable, but is local to this function only)
  static StateCounter ctr;

  // update per message
  msg.id = 410;
  msg.len = 8;

  // automatically does calcs
  ATCCF_suspensionTravelFL = sus_travel_fl_sens.avg();
  ATCCF_suspensionTravelFR = sus_travel_fr_sens.avg();

  // load up the message buffer
  msg.buf[0] = ctr.value();
  msg.buf[1] = 0;
  msg.buf[2] = ATCCF_brakeBias.can_value();
  msg.buf[3] = ATCCF_brakeBias.can_value() >> 8;
  msg.buf[4] = ATCCF_suspensionTravelFL.can_value();
  msg.buf[5] = ATCCF_suspensionTravelFL.can_value() >> 8;
  msg.buf[6] = ATCCF_suspensionTravelFR.can_value();
  msg.buf[7] = ATCCF_suspensionTravelFR.can_value() >> 8;

  // send it!
  cbus2.write(msg);
}

void send_ATCCF_11(){
  static StateCounter ctr;

  msg.id = 411;
  msg.len = 8;

  ATCCF_boardTemp = 0; //Add in later
  ATCCF_brakePressureF = brake_pressure_front_sens.avg();
  ATCCF_brakePressureR = brake_pressure_rear_sens.avg();

  msg.buf[0] = ctr.value();
  msg.buf[1] = 0;
  msg.buf[2] = ATCCF_brakePressureF.can_value();
  msg.buf[3] = ATCCF_brakePressureF.can_value() >> 8;
  msg.buf[4] = ATCCF_brakePressureR.can_value();
  msg.buf[5] = ATCCF_brakePressureR.can_value() >> 8;
  msg.buf[6] = ATCCF_boardTemp.can_value();
  msg.buf[7] = ATCCF_boardTemp.can_value() >> 8;

  cbus2.write(msg);
}

void send_ATCCF_12(){
  static StateCounter ctr;

  msg.id = 412;
  msg.len = 8;

  ATCCF_teensyTemp = tempmonGetTemp();
  ATCCF_rotorTempFL = brake_temp_fl_sens.avg();
  ATCCF_rotorTempFR = brake_temp_fr_sens.avg();

  msg.buf[0] = ctr.value();
  msg.buf[1] = 0;
  msg.buf[2] = ATCCF_teensyTemp.can_value();
  msg.buf[3] = ATCCF_teensyTemp.can_value() >> 8;
  msg.buf[4] = ATCCF_rotorTempFL.can_value();
  msg.buf[5] = ATCCF_rotorTempFL.can_value() >> 8;
  msg.buf[6] = ATCCF_rotorTempFR.can_value();
  msg.buf[7] = ATCCF_rotorTempFR.can_value() >> 8;

  cbus2.write(msg);
}

void send_ATCCF_13(){
  static StateCounter ctr;

  msg.id = 413;
  msg.len = 8;

  ATCCF_tireTempFLI = tire_temp_fl_inner_sens.avg();
  ATCCF_tireTempFLM = tire_temp_fl_middle_sens.avg();
  ATCCF_tireTempFLO = tire_temp_fl_outer_sens.avg();

  msg.buf[0] = ctr.value();
  msg.buf[1] = 0;
  msg.buf[2] = ATCCF_tireTempFLI.can_value();
  msg.buf[3] = ATCCF_tireTempFLI.can_value() >> 8;
  msg.buf[4] = ATCCF_tireTempFLM.can_value();
  msg.buf[5] = ATCCF_tireTempFLM.can_value() >> 8;
  msg.buf[6] = ATCCF_tireTempFLO.can_value();
  msg.buf[7] = ATCCF_tireTempFLO.can_value() >> 8;

  cbus2.write(msg);
}

void send_ATCCF_14(){
  static StateCounter ctr;

  msg.id = 414;
  msg.len = 8;

  ATCCF_tireTempFRI = tire_temp_fr_inner_sens.avg();
  ATCCF_tireTempFRM = tire_temp_fr_middle_sens.avg();
  ATCCF_tireTempFRO = tire_temp_fr_outer_sens.avg();

  msg.buf[0] = ctr.value();
  msg.buf[1] = 0;
  msg.buf[2] = ATCCF_tireTempFRI.can_value();
  msg.buf[3] = ATCCF_tireTempFRI.can_value() >> 8;
  msg.buf[4] = ATCCF_tireTempFRM.can_value();
  msg.buf[5] = ATCCF_tireTempFRM.can_value() >> 8;
  msg.buf[6] = ATCCF_tireTempFRO.can_value();
  msg.buf[7] = ATCCF_tireTempFRO.can_value() >> 8;

  cbus2.write(msg);
}

void send_ATCCF_15(){
  static StateCounter ctr;

  msg.id = 415;
  msg.len = 8;

  unsigned long uptime = millis();

  msg.buf[0] = uptime;
  msg.buf[1] = uptime >>  8;
  msg.buf[2] = uptime >> 16;
  msg.buf[3] = uptime >> 24;
  msg.buf[4] = 0;
  msg.buf[5] = 0;
  msg.buf[6] = 0;
  msg.buf[7] = 0;
  
  cbus2.write(msg);
}



// Rear ATCC
void send_ATCCR_10(){
  static StateCounter ctr;

  msg.id = 460;
  msg.len = 8;

  ATCCR_batteryCurrent = battery_current_sens.avg();
  ATCCR_suspensionTravelRL = sus_travel_rl_sens.avg();
  ATCCR_suspensionTravelRR = sus_travel_rr_sens.avg();

  msg.buf[0] = ctr.value();
  msg.buf[1] = 0;
  msg.buf[2] = ATCCR_batteryCurrent.can_value();
  msg.buf[3] = ATCCR_batteryCurrent.can_value() >> 8;
  msg.buf[4] = ATCCR_suspensionTravelRL.can_value();
  msg.buf[5] = ATCCR_suspensionTravelRL.can_value() >> 8;
  msg.buf[6] = ATCCR_suspensionTravelRR.can_value();
  msg.buf[7] = ATCCR_suspensionTravelRR.can_value() >> 8;

  cbus2.write(msg);
}

void send_ATCCR_11(){
  static StateCounter ctr;

  msg.id = 461;
  msg.len = 8;

  ATCCR_boardTemp = 0; //Fill in later
  ATCCR_rotorTempRL = brake_temp_rl_sens.avg();
  ATCCR_rotorTempRR = brake_temp_rr_sens.avg();

  msg.buf[0] = ctr.value();
  msg.buf[1] = 0;
  msg.buf[2] = ATCCR_boardTemp.can_value();
  msg.buf[3] = ATCCR_boardTemp.can_value() >> 8;
  msg.buf[4] = ATCCR_rotorTempRL.can_value();
  msg.buf[5] = ATCCR_rotorTempRL.can_value() >> 8;
  msg.buf[6] = ATCCR_rotorTempRR.can_value();
  msg.buf[7] = ATCCR_rotorTempRR.can_value() >> 8;

  cbus2.write(msg);
}

void send_ATCCR_12(){
  static StateCounter ctr;

  msg.id = 462;
  msg.len = 8;

  ATCCR_teensyTemp = tempmonGetTemp();
  ATCCR_coolantTempRadInlet = voltage_to_NTC_M12_H_temp(coolant_temp_inlet_sens.avg());
  ATCCR_coolantTempRadOutlet = voltage_to_NTC_M12_H_temp(coolant_temp_outlet_sens.avg());

  msg.buf[0] = ctr.value();
  msg.buf[1] = 0;
  msg.buf[2] = ATCCR_teensyTemp.can_value();
  msg.buf[3] = ATCCR_teensyTemp.can_value() >> 8;
  msg.buf[4] = ATCCR_coolantTempRadInlet.can_value();
  msg.buf[5] = ATCCR_coolantTempRadInlet.can_value() >> 8;
  msg.buf[6] = ATCCR_coolantTempRadOutlet.can_value();
  msg.buf[7] = ATCCR_coolantTempRadOutlet.can_value() >> 8;

  cbus2.write(msg);
}


void send_ATCCR_13(){
  static StateCounter ctr;

  msg.id = 463;
  msg.len = 8;

  ATCCR_tireTempRLI = tire_temp_rl_inner_sens.avg();
  ATCCR_tireTempRLM = tire_temp_rl_middle_sens.avg();
  ATCCR_tireTempRLO = tire_temp_rl_outer_sens.avg();

  msg.buf[0] = ctr.value();
  msg.buf[1] = 0;
  msg.buf[2] = ATCCR_tireTempRLI.can_value();
  msg.buf[3] = ATCCR_tireTempRLI.can_value() >> 8;
  msg.buf[4] = ATCCR_tireTempRLM.can_value();
  msg.buf[5] = ATCCR_tireTempRLM.can_value() >> 8;
  msg.buf[6] = ATCCR_tireTempRLO.can_value();
  msg.buf[7] = ATCCR_tireTempRLO.can_value() >> 8;

  cbus2.write(msg);
}

void send_ATCCR_14(){
  static StateCounter ctr;

  msg.id = 464;
  msg.len = 8;

  ATCCR_tireTempRRI = tire_temp_rr_inner_sens.avg();
  ATCCR_tireTempRRM = tire_temp_rr_middle_sens.avg();
  ATCCR_tireTempRRO = tire_temp_rr_outer_sens.avg();

  msg.buf[0] = ctr.value();
  msg.buf[1] = 0;
  msg.buf[2] = ATCCR_tireTempRRI.can_value();
  msg.buf[3] = ATCCR_tireTempRRI.can_value() >> 8;
  msg.buf[4] = ATCCR_tireTempRRM.can_value();
  msg.buf[5] = ATCCR_tireTempRRM.can_value() >> 8;
  msg.buf[6] = ATCCR_tireTempRRO.can_value();
  msg.buf[7] = ATCCR_tireTempRRO.can_value() >> 8;

  cbus2.write(msg);
}

void send_ATCCR_15(){
  static StateCounter ctr;

  msg.id = 465;
  msg.len = 8;

  unsigned long uptime = millis();
  ATCCR_shiftingPressure = shifting_pressure_sens.avg();

  msg.buf[0] = ctr.value();
  msg.buf[1] = 0;
  msg.buf[2] = uptime;
  msg.buf[3] = uptime >>  8;
  msg.buf[4] = uptime >> 16;
  msg.buf[5] = uptime >> 24;
  msg.buf[6] = ATCCR_shiftingPressure.can_value();
  msg.buf[7] = ATCCR_shiftingPressure.can_value() >> 8;

  cbus2.write(msg);
}

void send_ATCCR_16(){
  static StateCounter ctr;

  msg.id = 466;
  msg.len = 8;

  ATCCR_egt1 = egt1_sens.avg();
  ATCCR_egt2 = egt2_sens.avg();
  ATCCR_egt3 = egt3_sens.avg();

  msg.buf[0] = ctr.value();
  msg.buf[1] = 0;
  msg.buf[2] = ATCCR_egt1.can_value();
  msg.buf[3] = ATCCR_egt1.can_value() >> 8;
  msg.buf[4] = ATCCR_egt2.can_value();
  msg.buf[5] = ATCCR_egt2.can_value() >> 8;
  msg.buf[6] = ATCCR_egt3.can_value();
  msg.buf[7] = ATCCR_egt3.can_value() >> 8;

  cbus2.write(msg);
}

void send_ATCCR_17(){
  static StateCounter ctr;

  msg.id = 467;
  msg.len = 8;

  ATCCR_egt4 = egt1_sens.avg();
  ATCCR_rectifierCurrent = rectifier_current_sens.avg();
  ATCCR_coolantTempRadMiddle = voltage_to_NTC_M12_H_temp(coolant_temp_middle_sens.avg());

  msg.buf[0] = ctr.value();
  msg.buf[1] = 0;
  msg.buf[2] = ATCCR_egt4.can_value();
  msg.buf[3] = ATCCR_egt4.can_value() >> 8;
  msg.buf[4] = ATCCR_rectifierCurrent.can_value();
  msg.buf[5] = ATCCR_rectifierCurrent.can_value() >> 8;
  msg.buf[6] = ATCCR_coolantTempRadMiddle.can_value();
  msg.buf[7] = ATCCR_coolantTempRadMiddle.can_value() >> 8;

  cbus2.write(msg);
}


void send_can_F(){
  static EasyTimer ATCCF_10_timer(200); // 200Hz
  if (ATCCF_10_timer.isup()){
    send_ATCCF_10();
  }

  static EasyTimer ATCCF_11_timer(50); // 50Hz
  if (ATCCF_11_timer.isup()){
    send_ATCCF_11();
  }

  static EasyTimer ATCCF_12_timer(10); // 10Hz
  if (ATCCF_12_timer.isup()){
    send_ATCCF_12();
  }

  static EasyTimer ATCCF_13_timer(10); // 10Hz
  if (ATCCF_13_timer.isup()){
    send_ATCCF_13();
  }

  static EasyTimer ATCCF_14_timer(10); // 10Hz
  if (ATCCF_14_timer.isup()){
    send_ATCCF_14();
  }

  static EasyTimer ATCCF_15_timer(10); // 10Hz
  if (ATCCF_15_timer.isup()){
    send_ATCCF_15();
  }

}




void send_can_R(){
  static EasyTimer ATCCR_10_timer(200);
  if (ATCCR_10_timer.isup()){
    send_ATCCR_10();
  }

  static EasyTimer ATCCR_11_timer(10);
  if (ATCCR_11_timer.isup()){
    send_ATCCR_11();
  }

  static EasyTimer ATCCR_12_timer(10);
  if (ATCCR_12_timer.isup()){
    send_ATCCR_12();
  }

  static EasyTimer ATCCR_13_timer(10);
  if (ATCCR_13_timer.isup()){
    send_ATCCR_13();
  }

  static EasyTimer ATCCR_14_timer(10);
  if (ATCCR_14_timer.isup()){
    send_ATCCR_14();
  }

  static EasyTimer ATCCR_15_timer(50);
  if (ATCCR_15_timer.isup()){
    send_ATCCR_15();
  }

  static EasyTimer ATCCR_16_timer(10);
  if (ATCCR_16_timer.isup()){
    send_ATCCR_16();
  }

  static EasyTimer ATCCR_17_timer(10);
  if (ATCCR_17_timer.isup()){
    send_ATCCR_17();
  }
}

#endif
