#ifndef BRAKES_MAKE_YOU_FAST
#define BRAKES_MAKE_YOU_FAST

#include <StateCAN.h>


void calculate_brake_bias(StateSignal &front, StateSignal &rear, StateSignal &bias){
    static float max_total_pressure = -999999;

    // clamping force = 4pi(piston_radius_mm)^2(Pressure)
    int front_piston_mm = 17;
    int  rear_piston_mm = 12;

    float current_total_pressure = front.value() + rear.value();

    if (current_total_pressure >= max_total_pressure){
        max_total_pressure = current_total_pressure;

        bias = ((front.value() * front_piston_mm * front_piston_mm) / 
               ((front.value() * front_piston_mm * front_piston_mm) + (rear.value() * rear_piston_mm * rear_piston_mm))) *
               100;
    }

    //bias=max_total_pressure;
    

}


#endif