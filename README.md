# Sprint: A RC car powered by the ESP32-S3 featuring autonomous driving capabilities and an ESP-NOW remote designed to be controlled with one hand!

Sprint is a smart, ESP32-powered, RC car that features self-driving capabilities through a simple push of a button on the side of the remote! Both the remote and the mainboard have a powerful ESP32-S3-WROOM-1-N8R2 chip powering them with 4MB of flash and 2MB of PSRAM. The mainboard features dual motors with each being powered by a L9110S motor driver. It also features three obstacle avoidance sensors for self-driving! The remote features a SSD1306 OLED display, a joystick, and a mode switch! The remote is designed to effortlessly navigate the robot manually with one hand. And to activate self-driving mode, simply press the button located on the side, near the power switch, to switch between modes.

### ELON MUSK'S FLYING CAR GOT NOTHING ON US!

![alt text](images/assembled-car.png)

![alt text](images/hoverboard.png)

![alt text](images/mainboard_3d_pcb.png)

<img width="851" height="418" alt="image" src="https://github.com/user-attachments/assets/5eb0d82e-6e39-4c9d-bc56-2a67133aff00" />
<img width="2160" height="2321" alt="3D_PCB2_2026-10-18" src="https://github.com/user-attachments/assets/58c374a0-a546-4b8f-9618-25819cf62236" />

# Schematics:
<img width="2411" height="1672" alt="SCH_Sprint-Mainboard_1-Schematic-Sprint-Mainboard_2026-10-18" src="https://github.com/user-attachments/assets/ce024830-c842-4f26-b777-8b637402eb93" />
<img width="2362" height="1672" alt="SCH_Sprint-Remote_1-Schematic-Sprint-Remote_2026-10-18" src="https://github.com/user-attachments/assets/d3a7c9eb-5ee2-4550-9aec-29a85ff787d5" />

# PCBs:
<img width="2160" height="2740" alt="PCB_PCB-Sprint-Mainboard_2026-10-18" src="https://github.com/user-attachments/assets/98d8a3bc-07d9-46fe-8bec-4db1cc683fdf" />
<img width="1808" height="4096" alt="PCB_PCB-Sprint-Remote_2026-10-18" src="https://github.com/user-attachments/assets/3d2ae2e1-0570-4bf9-919f-54c49a45b78e" />

# Key Features:
|Features|Model|
|-|-|
|Processor|ESP32-S3-WROOM-1-N8R2|
|Power Supply|Lipo Battery, chargeable by USB-C through a battery charger|
|Communication/Data Transfer|LoRa|
|LDO|TPS63031DSKR buck boost|
|Battery Charger|TP4056|
|Motors|TT Motors|
|Motor Drivers|L9110S|
|USB-C Port|MC-403L68-Z10|
|Obstacle sensors||

## Combined BOM (Mainboard + Remote)

| Qty | Part | Value / Comment | Designators |
| --- | --- | --- | --- |
| 4 | Test-point | Test-Point | Main: BAT+, GND; Remote: BAT+, GND |
| 12 | Capacitor | 10uF | Main: C1,C2,C3,C5,C6,C8,C9; Remote: C1,C2,C3,C5,C6 |
| 2 | Capacitor | 100nF | Main: C4; Remote: C4 |
| 2 | Capacitor | 10uF | Main: C7; Remote: C10 |
| 4 | Capacitor | 1uF | Main: C11,C13; Remote: C7,C9 |
| 2 | Capacitor | 100nF | Main: C12; Remote: C8 |
| 2 | Capacitor | 100nF | Main: C14; Remote: C11 |
| 4 | Diode | SS14 | Main: D1,D2; Remote: D1,D2 |
| 3 | Connector | 2.54-1*3P | Main: H1,H2,H3 |
| 2 | Connector | PH2.54-1X2P-H25 | Main: H6,H7 |
| 2 | LED | YLED0603R | Main: LED1; Remote: LED1 |
| 4 | Resistor | 5.1kΩ | Main: R1,R2; Remote: R1,R2 |
| 4 | Resistor | 4.7kΩ | Remote: R3,R4,R10,R11 |
| 4 | Resistor | 1kΩ | Main: R3,R4; Remote: R5,R7 |
| 2 | Resistor | 1.2kΩ | Main: R6; Remote: R6 |
| 4 | Resistor | 10kΩ | Main: R5,R8; Remote: R8,R9 |
| 2 | Resistor | 1MΩ | Main: R7; Remote: R12 |
| 2 | Resistor | 470kΩ | Main: R11; Remote: R13 |
| 1 | Switch | RKJXV1220001 | Remote: SW1 |
| 4 | Tactile switch | HX 3x4x2-2P-1.6N | Main: SW1,SW2; Remote: SW2,SW3 |
| 2 | Slide switch | MST-12D18G4 SPDT | Main: SW3; Remote: SW4 |
| 2 | Module | ESP32-S3-WROOM-1 | Main: U1; Remote: U1 |
| 1 | Connector | 2.54-1*8 | Remote: U2 |
| 2 | Motor driver | L9110S | Main: U2,U6 |
| 2 | Charger | TP4056 | Main: U3; Remote: U3 |
| 2 | Buck-boost | TPS63031DSKR | Main: U4; Remote: U4 |
| 2 | Inductor | 1.5uH | Main: U5; Remote: U5 |
| 1 | Switch | YZA-059-8.0 | Remote: U6 |
| 2 | LED | YLED0603G | Main: U8; Remote: U8 |
| 2 | USB-C connector | MC-403L68-Z10 | Main: USB1; Remote: USB1 |
| 1 | Connector | 2.54-1*4P母 | Remote: H1 |

### We used AI tools for researching to: cross-check our schematics, understand technical details and research in general!
