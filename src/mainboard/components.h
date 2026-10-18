#pragma once

// #include "remote/config.h"
#include "mainboard/config.h"
#include <Arduino.h>

void initialise();
void moveMotor(int motorA, int motorB, int speed);
void move(int throttle, int steering);
void switchMode();
void stopMotors();

bool retObstacle(int Sensor3);
float readBatteryVoltage();