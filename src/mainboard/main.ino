#include <Wifi.h>
#include <esp_now.h>
#include "../data.h"
#include "config.h"
#include "components.h"

RemoteData remote_data;
MainboardData mainboard_data;

void onDataReceive(const esp_now_recv_info_t *info, const unit8_t *data, int len){
    memcpy(&remote_data, data, sizeof(remote_data));
}

void setup(){
    Serial.begin(115200);

    initialise()

    initialiseSystem();

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

    if (remote_data.)
}