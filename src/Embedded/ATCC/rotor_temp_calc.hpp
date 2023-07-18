#define HOT_N_QUICK

#include <StateCAN.h>

// accounts for 50% of rotor being slots
void calculate_rotor_temp(StateSignal &fl, StateSignal &fr, StateSignal &rl, StateSignal &rr){
    fl = pow((0.5*pow((25+273),4)+0.5*pow((fl.value()+273),4)), (1/4));
    fr = pow((0.5*pow((25+273),4)+0.5*pow((fr.value()+273),4)), (1/4));
    rl = pow((0.5*pow((25+273),4)+0.5*pow((rl.value()+273),4)), (1/4));
    rr = pow((0.5*pow((25+273),4)+0.5*pow((rr.value()+273),4)), (1/4));

}
