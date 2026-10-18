#include <Wifi.h>
#include <esp_now.h>
#include "../data.h"
#include "config.h"
#include "components.h"

RemoteData remote_data;
MainboardData mainboard_data;

enum carMode{MODE_MANUAL = 0, MODE_AUTO = 1};

DrivingMode currentMode = MODE_MANUAL;
bool lastButtonState = false;


void onDataReceive(const esp_now_recv_info_t *info, const uint8_t *data, int len){
    memcpy(&remote_data, data, sizeof(remote_data));
}

void setup(){
    Serial.begin(115200);

    initialise();

    WiFi.mode(WIFI_STA);
    if (esp_now_init() != ESP_OK){
        Serial.println("ESP-NOW initialisation Error!!");
        return;
    }

    esp_now_register_recv_cb(onDataReceive);
    Serial.println("Car initialised!");

}

void loop(){
    mainboard_data.batteryVoltage = readBatteryVoltage();
    mainboard_data.obstacleFront = retObstacle(FRONT_OBST);
    mainboard_data.obstacleLeft = retObstacle(LEFT_OBST);
    mainboard_data.obstacleRight = retObstacle(RIGHT_OBST);

    if (remote_data.modeButton && !lastButtonState){
        if(currentMode == MODE_MANUAL) {
            currentMode = MODE_AUTO;
            Serial.println("Auto Mode!")
        }
        else{
            currentMode = MODE_MANUAL;
            Serial.println("Remote Mode")
        }
    }

    lastButtonState = remote_data.modeButton;

    if (currentMode == MODE_MANUAL){
        if(mainboard_data.obstacleFront && remote_data.throttle > 0){
            stopMotors();
        }
        else{
            move(remote_data.throttle, remote_data.steering);
        }
    }
    else{
        if(!mainboard_data.obstacleFront)
            move(150, 0);//just move forward..
        else
            move(-150, 0);//reverse!
            move(20, 70);//idk, will fix this later
    }

    delay(20);
}