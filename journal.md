# 10/6/2026 Started this project + started with first schematic!! (Arya: 1hr 20mins)

Arya:
Today, we started with researching the parts that will be in our PCB for the RC car and also discussed what we should pick for our microcontroller. We decided to choose the ESP32-S3 since it supports USB-OTG and is way more powerful than the normal ESP32-Wroom. We are currently thinking about making the RC car as small as possible to make it special. And the ESP32-S3's USB-OTG compatibility will help that be smaller since there will be no need for a USB-to-Serial converter to program the chip. I also added a TP4056 for charging the battery and I also added a L9110S to the schematic since we will need a motor driver and that directly driving the motors from the ESP32 chip might not be good and might fry the chip which we do not want to happen. I also went and found a USB-C data port that had the least pins since we want to keep wiring simple.

Lapse: https://lapse.hackclub.com/timelapse/_cHRpcqyOjym

<img width="1157" height="517" alt="image" src="https://github.com/user-attachments/assets/223b3acc-eea9-44bb-8ead-8dd93705f6e3" />
