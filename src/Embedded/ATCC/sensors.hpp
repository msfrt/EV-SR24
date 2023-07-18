#ifndef SENSORS_ATCC_HPP
#define SENSORS_ATCC_HPP

#include <ReadADC.h>

// ADC CS teensy pins
#define ADC1_CS 10
#define ADC2_CS 9
#define ADC3_CS 8

// ADCs
ADCChip adc1(ADC1_CS);
ADCChip adc2(ADC2_CS);
ADCChip adc3(ADC3_CS);

// front sensors
ADCSensor sus_travel_fl_sens(0, 0, 1000); // will need corrected values
ADCSensor sus_travel_fr_sens(2, 0, 1000); // (sensor is not chosen yet  ??? nice.)

ADCSensor brake_temp_fr_sens(7, 500, 5);
ADCSensor brake_temp_fl_sens(4, 500, 5);

ADCSensor brake_pressure_front_sens(1, 500, 2);
ADCSensor brake_pressure_rear_sens(3, 500, 2);

ADCSensor tire_temp_fl_inner_sens(0, 400, 30);
ADCSensor tire_temp_fl_middle_sens(4, 400, 30);
ADCSensor tire_temp_fl_outer_sens(6, 400, 30);
ADCSensor tire_temp_fr_inner_sens(5, 400, 30);
ADCSensor tire_temp_fr_middle_sens(6, 400, 30);
ADCSensor tire_temp_fr_outer_sens(2, 400, 30);

// rear sensors
ADCSensor sus_travel_rr_sens(0, 0, 1000);
ADCSensor sus_travel_rl_sens(3, 0, 1000);

ADCSensor coolant_temp_middle_sens(5, 0, 1000); // leave as is. returns voltage in V
ADCSensor coolant_temp_outlet_sens(4, 0, 1000);
ADCSensor coolant_temp_inlet_sens(6, 0, 1000);

ADCSensor tire_temp_rl_inner_sens(0, 400, 30);
ADCSensor tire_temp_rl_middle_sens(4, 400, 30);
ADCSensor tire_temp_rl_outer_sens(6, 400, 30);
ADCSensor tire_temp_rr_inner_sens(5, 400, 30);
ADCSensor tire_temp_rr_middle_sens(6, 400, 30);
ADCSensor tire_temp_rr_outer_sens(2, 400, 30);

ADCSensor brake_temp_rr_sens(7, 500, 5);
ADCSensor brake_temp_rl_sens(4, 500, 5);

// https://www.digikey.com/en/products/detail/raztec-sensors/RAZFL-204CMCG/14567043
ADCSensor battery_current_sens(3, 2500, 10);
ADCSensor rectifier_current_sens(7, 2500, 10);

// https://www.amazon.com/AUTEX-Stainless-Transducer-Transmitter-compatible/dp/B00NIK900K?ref_=ast_sto_dp
ADCSensor shifting_pressure_sens(1, 500, 20);

ADCSensor egt1_sens(2, 0, 100);
ADCSensor egt2_sens(0, 0, 100);
ADCSensor egt3_sens(1, 0, 100);
ADCSensor egt4_sens(3, 0, 100);


float voltage_to_NTC_M12_H_temp(float v){

  // calculated from the excel document.
  // fifth order because we don't really care about extrapolation here.
  return -0.8982 * pow(v, 5) +
          11.970 * pow(v, 4) -
          61.647 * pow(v, 3) +
          153.57 * pow(v, 2) -
          209.75 * pow(v, 1) +
          187.96;
}

float voltage_to_EGT_temp(float v){

  // calculated from the excel document.
  return 137.64 * pow(v, 3) -
         280.17 * pow(v, 2) +
         652.15 * pow(v, 1) -
         374.03;
}


void initialize_ADCs()
{
  adc1.begin();
  adc2.begin();
  adc3.begin();
}




void sample_ADCs_F()
{

  // 1,000 Hz
  static EasyTimer sample_timer_1(1000); // static variable prevents object from deletion when out of scope
  if (sample_timer_1.isup())
  {
    //adc3
    adc3.sample(sus_travel_fr_sens, sus_travel_fl_sens);
  }

  // 200 Hz
  static EasyTimer sample_timer_2(200);
  if (sample_timer_2.isup())
  {
    //adc2
    adc2.sample(brake_pressure_front_sens, brake_pressure_rear_sens);
  }

  // 100 Hz
  static EasyTimer sample_timer_3(100);
  if (sample_timer_3.isup())
  {
    //adc1
    adc1.sample(brake_temp_fr_sens, tire_temp_fr_inner_sens, tire_temp_fr_middle_sens, brake_temp_fl_sens);

    //adc2
    adc2.sample(tire_temp_fr_outer_sens, tire_temp_fl_inner_sens, tire_temp_fl_middle_sens, tire_temp_fl_outer_sens);
  }
} // end sample_ADCs_F()



void sample_ADCs_R()
{
  // 1,000 Hz
  static EasyTimer sample_timer_1(1000);
  if (sample_timer_1.isup())
  {
    // adc1
    adc1.sample(sus_travel_rr_sens, sus_travel_rl_sens);
  }

  static EasyTimer sample_timer_2(200);
  if (sample_timer_2.isup()){
    // adc2
    adc2.sample(shifting_pressure_sens);
  }

  // 100 Hz
  static EasyTimer sample_timer_3(100);
  if (sample_timer_3.isup())
  {
    //adc1
    adc1.sample(brake_temp_rr_sens, tire_temp_rr_inner_sens, tire_temp_rr_middle_sens, brake_temp_rl_sens);

    //adc2
    adc2.sample(tire_temp_rr_outer_sens, tire_temp_rl_inner_sens, battery_current_sens, tire_temp_rl_middle_sens, tire_temp_rl_outer_sens, rectifier_current_sens);

    //adc3
    adc3.sample(egt1_sens, egt2_sens, egt3_sens, egt4_sens, coolant_temp_outlet_sens, coolant_temp_inlet_sens, coolant_temp_middle_sens);

  }
}




#endif
