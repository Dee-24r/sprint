#include <Arduino.h>
#include "config.h"
#include "components.h"

void initialise(){
    pinMode(L_MOTOR_A, OUTPUT);
    pinMode(L_MOTOR_B, OUTPUT);

    pinMode(R_MOTOR_A, OUTPUT);
    pinMode(R_MOTOR_B, OUTPUT);

    pinMode(FRONT_OBST, INPUT);
    pinMode(LEFT_OBST, INPUT);
    pinMode(RIGHT_OBST, INPUT);
}

void moveMotor(int motorA, int motorB, int speed){
    if (speed > 0){
        analogWrite(motorA, speed);
        digitalWrite(motorB, LOW);
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
    int leftSpeed = throttle + steering;
    int rightSpeed = throttle - steering;

    leftSpeed = constrain(leftSpeed, -255, 255);
    rightSpeed = constrain(rightSpeed, -255, 255);

    moveMotor(L_MOTOR_A, L_MOTOR_B, leftSpeed);
    moveMotor(R_MOTOR_A, R_MOTOR_B, rightSpeed);
}

bool retObstacle(int obstacleSensor){
    return digitalRead(obstacleSensor);
}

float readBatteryVoltage(){
    int adc = analogRead(BATT_ADC);
    float voltage = (adc/4095.0f) * 3.3f *1.47f;

    return voltage;
}

void stopMotors(){
    digitalWrite(L_MOTOR_A, LOW);
    digitalWrite(L_MOTOR_B, LOW);
    digitalWrite(R_MOTOR_A, LOW);
    digitalWrite(R_MOTOR_B, LOW);
}


// void initialise();
// void move(int throttle, int steering);
// void switchMode();

// bool retObstacle();
// float readBatteryVoltage();