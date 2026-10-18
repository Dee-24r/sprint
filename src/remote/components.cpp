#include <Arduino.h>
#include "components.h"
#include "config.h"
#include <Wire.h>

#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>


Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

int readThrottle(){
    int value = analogRead(JOY_Y);
    return map(value, 0, 4095, 255, -255);
}

int readSteering(){
    int value = analogRead(JOY_X);
    return map(value, 0, 4095, -255, 255);

}

bool readMode(){
    return digitalRead(MODE_BTN);
}

//for reference, searched up ssd1306 code from different sources, and wrote mu version for it.
//also the values like textsize, just asked google

void initialiseOLED(){
    if(!display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS)){
        Serial.println(F("OLED failed"));
        while(true){};
    }

    display.clearDisplay();
    display.setTextSize(1);
    display.setTextColor(SSD1306_WHITE);
    display.setCursor(0,0);
    display.println(F("Remote Initializing..."));
    display.display();
    delay(1000);
}

void print_OLED(bool isAutoMode, int throttle, int steering){
    display.clearDisplay();

    display.setTextSize(1);
    display.setCursor(20, 5);


    display.print(F("SPRINT!"))
    display.drawLine(0, 16, 128, 16, SSD1306_WHITE);

    display.setTextSize(2);
    display.SetCursor(10,28);

    if (isAutoMode)
        display.print(F("AUTO MODE"))
    else
        display.print(F("MANUAL MODE!"))

    display.drawLine(0, 52, 128, 52, SSD1306_WHITE);

    display.setCursor(10, 65);
    display.print(F("Throttle: "))
    display.println(throttle);

    display.setCursor(10,85);
    display.print(F("Steering: "))
    display.println(steering);

    display.display();
}