# Sprint: A RC car powered by the ESP32-S3 featuring autonomous driving capabilities and an ESP-NOW remote designed to be controlled with one hand!

Sprint is a smart, ESP32-powered, RC car that features self-driving capabilities through a simple push of a button on the side of the remote! Both the remote and the mainboard have a powerful ESP32-S3 chip powering them with 8MB of flash and 2MB of PSRAM! The mainboard features dual motors with each being powered by a L9110S motor driver. It also features three obstacle avoidance sensors for self-driving! The remote features a SSD1306 OLED display, a joystick, and a mode switch! The remote is designed to effortlessly navigate the robot manually with one hand. And to activate self-driving mode, simply press the button located on the side, near the power switch, to switch between modes!

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

Prices shown are the BOM unit prices from the LCSC/JLCPCB export in the repo. Blank values mean the source BOM did not populate a price or distributor part record.

| Qty | Part | Value / Comment | Designators | Manufacturer | Manufacturer Part | Distributor | Distributor Part | Unit Price | Total Price |
| --- | --- | --- | --- | --- | --- | --- | --- | ---:| ---:|
| 4 | Test-point | Test-Point | Main: BAT+, GND; Remote: BAT+, GND | — | — | — | — | — | N/A |
| 12 | Capacitor | 10uF | Main: C1,C2,C3,C5,C6,C8,C9; Remote: C1,C2,C3,C5,C6 | CCTC(三环) | TCC0603X7R106M6R3CT | LCSC | C53032292 | $0.0052 | $0.0624 |
| 2 | Capacitor | 100nF | Main: C4; Remote: C4 | HRE(芯声) | CGA0402X7R104K6R3GT | LCSC | C22435938 | $0.0005 | $0.0010 |
| 2 | Capacitor | 10uF | Main: C7; Remote: C10 | YAGEO(国巨) | CC0603MRX5R7BB106 | LCSC | C109457 | $0.0422 | $0.0844 |
| 4 | Capacitor | 1uF | Main: C11,C13; Remote: C7,C9 | CCTC(三环) | TCC0603X5R105K160CT | LCSC | C696901 | $0.0011 | $0.0044 |
| 2 | Capacitor | 100nF | Main: C12; Remote: C8 | SAMSUNG(三星) | CL05B104KO5NNNC | LCSC | C1525 | $0.0008 | $0.0016 |
| 2 | Capacitor | 100nF | Main: C14; Remote: C11 | YAGEO(国巨) | CC0603KRX7R9BB104 | LCSC | C14663 | $0.0017 | $0.0034 |
| 4 | Diode | SS14 | Main: D1,D2; Remote: D1,D2 | YONGYUTAI(永裕泰) | SS14 | LCSC | C47147601 | $0.0017 | $0.0068 |
| 3 | Connector | 2.54-1*3P | Main: H1,H2,H3 | BOOMELE(博穆精密) | 2.54-1*3P针 | LCSC | C49257 | $0.0043 | $0.0129 |
| 2 | Connector | PH2.54-1X2P-H25 | Main: H6,H7 | JXTCONN(聚兴泰) | PH2.54-1X2P-H25 | LCSC | C42431798 | $0.0025 | $0.0050 |
| 1 | Connector | 2.54-1*4P母 | Remote: H1 | BOOMELE(博穆精密) | 2.54-1*4P母 | LCSC | C2718488 | $0.0124 | $0.0124 |
| 2 | LED | YLED0603R | Main: LED1; Remote: LED1 | YONGYUTAI(永裕泰) | YLED0603R | LCSC | C19171390 | $0.0010 | $0.0020 |
| 4 | Resistor | 5.1kΩ | Main: R1,R2; Remote: R1,R2 | FOJAN(富捷) | FRC0402J512 TS | LCSC | C2906948 | $0.0003 | $0.0012 |
| 4 | Resistor | 4.7kΩ | Remote: R3,R4,R10,R11 | UNI-ROYAL(厚声) | 0603WAF4701T5E | LCSC | C23162 | $0.0005 | $0.0020 |
| 4 | Resistor | 1kΩ | Main: R3,R4; Remote: R5,R7 | FOJAN(富捷) | FRC0402J102 TS | LCSC | C2906899 | $0.0002 | $0.0008 |
| 2 | Resistor | 1.2kΩ | Main: R6; Remote: R6 | UNI-ROYAL(厚声) | 0603WAF1201T5E | LCSC | C22765 | $0.0006 | $0.0012 |
| 4 | Resistor | 10kΩ | Main: R5,R8; Remote: R8,R9 | YAGEO(国巨) | RC0603FR-0710KL | LCSC | C98220 | $0.0006 | $0.0024 |
| 2 | Resistor | 1MΩ | Main: R7; Remote: R12 | YAGEO(国巨) | AC0603FR-071ML | LCSC | C116678 | $0.0009 | $0.0018 |
| 2 | Resistor | 470kΩ | Main: R11; Remote: R13 | UNI-ROYAL(厚声) | 0603WAF4703T5E | LCSC | C23178 | $0.0005 | $0.0010 |
| 1 | Switch | RKJXV1220001 | Remote: SW1 | ALPSALPINE(阿尔卑斯阿尔派) | RKJXV1220001 | LCSC | C219778 | $0.1142 | $0.1142 |
| 4 | Tactile switch | HX 3x4x2-2P-1.6N | Main: SW1,SW2; Remote: SW2,SW3 | hanxia(韩下) | HX 3x4x2-2P-1.6N TACTILE SWITCH | LCSC | C49234124 | $0.0038 | $0.0152 |
| 2 | Slide switch | MST-12D18G4 SPDT | Main: SW3; Remote: SW4 | SHOU HAN(首韩) | MST-12D18G4 SPDT Slide Switch | LCSC | C49023767 | $0.0126 | $0.0252 |
| 2 | Module | ESP32-S3-WROOM-1 | Main: U1; Remote: U1 | ESPRESSIF(乐鑫) | ESP32-S3-WROOM-1-N8R2 | LCSC | C2913204 | $0.6995 | $1.3990 |
| 1 | Connector | 2.54-1*8 | Remote: U2 | ZHOURI(洲日) | 2.54-1*8 | LCSC | C5156616 | $0.0067 | $0.0067 |
| 2 | Motor driver | L9110S | Main: U2,U6 | Mixic(中科芯亿达) | L9110S | LCSC | C513306 | $0.0248 | $0.0496 |
| 2 | Charger | TP4056 | Main: U3; Remote: U3 | UMW(友台半导体) | TP4056 | LCSC | C725790 | $0.0140 | $0.0280 |
| 2 | Buck-boost | TPS63031DSKR | Main: U4; Remote: U4 | TI(德州仪器) | TPS63031DSKR | LCSC | C15516 | $0.1555 | $0.3110 |
| 2 | Inductor | 1.5uH | Main: U5; Remote: U5 | Coilcraft(线艺) | LPS3015-152MRC | LCSC | C17382749 | $0.1731 | $0.3462 |
| 1 | Switch | YZA-059-8.0 | Remote: U6 | YIZHI(逸致) | YZA-059-8.0 | LCSC | C49108696 | — | N/A |
| 2 | LED | YLED0603G | Main: U8; Remote: U8 | YONGYUTAI(永裕泰) | YLED0603G | LCSC | C19273151 | $0.0010 | $0.0020 |
| 2 | USB-C connector | MC-403L68-Z10 | Main: USB1; Remote: USB1 | HANBO(汉博) | MC-403L68-Z10 | LCSC | C47326496 | $0.0089 | $0.0178 |

Total BOM cost (combined Mainboard + Remote, LCSC prices where available): $2.52 USD

### We used AI tools for researching to: cross-check our schematics, understand technical details and research in general!
