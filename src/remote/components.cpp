#include <Arduino.h>
#include "components.h"
#include "config.h"

int readThrottle(){
    int value = analogRead(JOY_Y);
    return map(value, 0, 4095, 255, -255);
}

int readSteering(){
    int value = analogRead(JOY_X);
    return map(value, 0, 4095, -255, 255);

}

bool readMode(){
    return !digitalRead(MODE_BTN);
    
}