#ifndef LIGHT_BAR_SOC_H
#define LIGHT_BAR_SOC_H

#include <Adafruit_NeoPixel.h>
#include <EasyTimer.h>

#include "CAN/CAN1.hpp"
#include "CAN/CAN2.hpp"
#include "LightBar.hpp"
#include "arduino.h"

class LightBarSOC : public LightBar {
    private:
    StateSignal &soc_signal_;  ///< The SOC signal
    int min_;  ///< The minimum bound for the RPM bar to start lighting up
    int max_;  ///< The maximum bound for the rpm bar light up before signalling
             ///< an upshift

    protected:
    public:
    /** Constructor */
    LightBarSOC(Adafruit_NeoPixel &lights, int first_index, int num_leds,
              StateSignal &soc_signal, int min_soc, int max_soc);

    /** Destructor */
    virtual ~LightBarSOC(){};

    /** Copy constructor disabled */
    LightBarSOC(const LightBarSOC &) = delete;
    /** Assignment operator disabled */
    void operator=(const LightBarSOC &) = delete;

    virtual void Initialize() override;
    virtual void Update(unsigned long &elapased) override;
};

LightBarSOC::LightBarSOC(Adafruit_NeoPixel &lights, int first_index, int num_leds,
              StateSignal &soc_signal, int min_soc, int max_soc) 
              
        : LightBar(lights, first_index, num_leds),
        soc_signal_(soc_signal),
        min_(min_soc),
        max_(max_soc) {
    
        }

/**
 * Initialize the lights by clearing them.
 */
void LightBarSOC::Initialize() { LightBar::Initialize();}

void LightBarSOC::Update(unsigned long & elapsed) {

    //Color implementation goes here
    float soc = 0.20;
    int no_of_leds = soc * GetLastLEDIndex();
    for (int led = GetFirstLEDIndex(); led <= GetLastLEDIndex(); led++) {
        if(soc >= 0.80) {
            //green
            if(led <= no_of_leds) {
                lights_.setPixelColor(led, 0, 255, 0);
            }
        } else if(soc < 0.80 && soc >= 0.21) {
            //orange
            if(led <= no_of_leds) {
                lights_.setPixelColor(led, 255, 165, 0);
            }
            
        } else {
            //red
            if(led <= no_of_leds) {
                lights_.setPixelColor(led, 255, 0, 0);
            }
        }
    }
    LightBar::Update(elapsed);
}

#endif