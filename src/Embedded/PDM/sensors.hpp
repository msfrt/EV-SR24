#include <ReadADC.h>
#include <EasyTimer.h>

// Sensor definitions

// ADCSensor my_sensor(int chip_select, int adc_channel, int sensor_zero_mV, int mV_per_sensor_unit);

// ADC CS teensy pins
#define ADC1_CS 3
#define ADC2_CS 10

// ADCs
ADCChip adc1(ADC1_CS);
ADCChip adc2(ADC2_CS);

// ADC1
ADCSensor keepalive_volt_sens(0, 0, 313);
ADCSensor       pdm_volt_sens(1, 0, 313);
ADCSensor      data_volt_sens(2, 0, 313);
ADCSensor      main_volt_sens(3, 0, 313);
ADCSensor      fanl_volt_sens(4, 0, 313);
ADCSensor      fanr_volt_sens(5, 0, 313);
ADCSensor        wp_volt_sens(6, 0, 313);
ADCSensor      fuel_volt_sens(7, 0, 313);
// ADC2
ADCSensor    fuel_current_sens(1, 2500, 40);
ADCSensor      wp_current_sens(2, 2500, 40);
ADCSensor    fanr_current_sens(3, 2500, 40);
ADCSensor    fanl_current_sens(4, 2500, 20);
ADCSensor     pdm_current_sens(5, 2500, 20);
ADCSensor brakelight_volt_sens(6,    0, 313);
ADCSensor    starter_volt_sens(7,    0, 313);


// this function uses the local timers to determine when to call the ADCSensor sample function
void sample_ADCs(){

  // static timer definitions (keeps them in the local scope & never deleted)
  static EasyTimer sample_timer_1(2000); // 2,000Hz
  static EasyTimer sample_timer_2(1000); // 1,000Hz

  if (sample_timer_1.isup()){
    adc1.sample(keepalive_volt_sens, pdm_volt_sens, data_volt_sens, main_volt_sens, fanl_volt_sens, fanr_volt_sens, wp_volt_sens, fuel_volt_sens);
    adc2.sample(fuel_current_sens, wp_current_sens, fanr_current_sens, fanl_current_sens, pdm_current_sens);
  }

  if (sample_timer_2.isup()){
    adc2.sample(brakelight_volt_sens, starter_volt_sens);
  }
}


// this function must be called in the setup() portion of the main file.
// It initializes the pins for comunication
void initialize_ADCs()
{
  adc1.begin();
  adc2.begin();
}
