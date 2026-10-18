#include <Wifi.h>
#include <esp_now.h>
#include "config.h"
#include "components.h"
#include "../data.h"

uint8_t carMacAddress[] = {/*fklmklkv*/}
RemoteData remote_data;

void setup(){
    Serial.begin(11520);
    pinMode(MODE_BTN, INPUT_PULLUP);
    
    Wifi.mode(WIFI_STA);
    if(esp_now_init() != ESP_OK){
        Serial.println("ESP-NOW INITIALISATION FAILED!");
        return;
    }
    
    es_now_peer_info_t carInfo = {}
    memcpy(carInfo.peer_addr, carMacAddress, 6);
    carInfo.channel = 0;
    carInfo.encrypt = false;

    if (esp_now_add_peer(&carInfo) != ESP_OK){
        Serial.println("Error in adding car");
        return;
    }

    Serial.println("Connected!");
}
void loop(){
    remote_data.throttle = readThrottle();
    remote_data.steering = readSteering();
    remote_data.modeButton = readMode();

    esp_now_send(carMacAddress, (uint8_t*)&remote_data, sizeof(remote_data));

    delay(20);
}