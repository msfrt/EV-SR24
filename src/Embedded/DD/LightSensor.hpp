#ifndef LIGHT_SENSOR_DIMMER
#define LIGHT_SENSOR_DIMMER

// #define PRINT_LIGHT_VOLTAGE

// returns a brightness percent 0-100 that can be used for external scaling.
// returns -1 if there is no update.
int LightSensor(const int &pin, const int analog_read_bits) {
  static unsigned int max_read_val =
      pow(2, analog_read_bits) - 1;  // maximum analogRead possible
  static unsigned long running_total = 0;
  static unsigned long running_sample_count = 0;
  static unsigned long sample_count_max =
      500;  // number of samples before calculating a value
  static unsigned long uC_millivoltage = 3300;
  static float mvoltage = 0.0;
  static int last_calcd_value = 100;

  // light parameters
  static float daytime_mVoltage = 3200.0;
  static float nighttime_mVoltage = 2575.0;

  running_total += analogRead(pin);
  running_sample_count++;

  if (running_sample_count >= sample_count_max) {
    running_total /= sample_count_max;  // calculate the average read value
    mvoltage =
        (static_cast<float>(running_total) / static_cast<float>(max_read_val)) *
        uC_millivoltage;

    // map the brightness to a percentage 0-100
    last_calcd_value =
        map(mvoltage, nighttime_mVoltage, daytime_mVoltage, 0, 100);

    if (last_calcd_value > 100) last_calcd_value = 100;

    if (last_calcd_value < 0) last_calcd_value = 0;

    // reset tracker variables
    running_total = 0;
    running_sample_count = 0;

#ifdef PRINT_LIGHT_VOLTAGE
    Serial.print("Light sensor mVoltage: ");
    Serial.println(mvoltage);
    Serial.print("Mapped percent: ");
    Serial.println(last_calcd_value);
#endif

    // returns the calculated map
    return last_calcd_value;
  }

  // no update
  return -1;
}

#endif
