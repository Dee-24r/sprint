#include <WiFi.h>
#include <esp_now.h>
#include "config.h"
#include "components.h"
#include "../data.h"

#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

uint8_t carMacAddress[] = {/*MAC Address*/}
RemoteData remote_data;

bool localAutoMode = false;
bool lastButtonState = false;

void setup(){

    Serial.begin(115200);
    pinMode(MODE_BTN, INPUT_PULLUP);
    
    initialiseOLED();

    WiFi.mode(WIFI_STA);
    if(esp_now_init() != ESP_OK){
        Serial.println("ESP-NOW INITIALISATION FAILED!");
        return;
    }
    
    esp_now_peer_info_t carInfo = {};
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
    bool buttonClicked = readMode();

    if(remote_data.modeButton && !lastButtonState){
        localAutoMode = !localAutoMode;
    }
    lastButtonState = remote_data.modeButton;
    
    remote_data.modeButton = localAutoMode;
    esp_now_send(carMacAddress, (uint8_t*)&remote_data, sizeof(remote_data));
    print_OLED(remote_data.modeButton, remote_data.throttle, remote_data.steering);

    delay(20);
}