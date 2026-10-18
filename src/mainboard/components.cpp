#include <Arduino.h>
#include "config.h"
#include "components.h"

void initialise(){
    pinMode(L_MOTOR_A, OUTPUT);
    pinMode(L_MOTOR_B, OUTPUT);

    pinMode(R_MOTOR_A, OUTPUT);
    pinMode(R_MOTOR_B, OUTPUT);

    pinMode(FRONT_OBST, INPUT);
    PinMode(LEFT_OBST, INPUT);
    pinMode(RIGHT_OBST, INPUT);
}

#define L_MOTOR_IN_A 6
#define L_MOTOR_IN_B 5

#define R_MOTOR_IN_A 15
#define R_MOTOR_IN_B 7

void motor(int motorA, int motorB, speed){
    if (speed > 0){
        analogWrite(motorA, speed);
        digitalWrite(motorB, LOW)
    }

    else if (speed < 0){
        digitalWrite(motorA, LOW);
        analogWrite(motorB, abs(speed));

    }

    else{
        digitalWrite(motorA, LOW);
        digitalWrite(motorB, LOW);
    }
}

void move(int throttle, int steering){
    int leftSpeed = throttle + steering
    int rightSpeed = throttle - steering;

    leftSpeed = constrain(leftSpeed, -255, 255);
    rightSpeed = constrain(rightSpeed, -255, 255);

    moveMotor(L_MOTOR_A, L_MOTOR_B, leftSpeed);
    moveMotor(R_MOTOR_A, R_MOTOR_B, rightSpeed);
}


// int x = analogRead(JOY_X);
// int y = analogRead(JOY_Y);


// void initialise();
// void move(int throttle, int steering);
// void switchMode();

// bool retObstacle();
// float readBatteryVoltage();