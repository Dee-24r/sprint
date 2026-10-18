#pragma once

// #include "remote/config.h"
#include "mainboard/config.h"
#include <Arduino.h>

struct Control{
    int throttle; //this will be for moving increase in speed and reverse
    int steering; //this will be for turning

    bool modeButton;
};


struct mainboardData{
    float batteryVoltage;

    bool obstacleLeft;
    bool obstacleRight;
    bool obstacleFront;
};

int x = analogRead(JOY_X);
int y = analogRead(JOY_Y);


void initialise();
void move(int throttle, int steering);
void switchMode();

bool retObstacle();
float readBatteryVoltage();