#pragma once

#include "config.h"
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

int readThrottle();
int readSteering();
bool readMode();

void initialiseOLED();
void print_OLED(bool isAutoMode, int throttle, int steering)