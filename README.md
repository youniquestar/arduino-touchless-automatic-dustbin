# 🗑️ Contactless Automatic Smart Dustbin with Ultrasonic Proximity & Servo Actuation

[![Platform: Arduino](https://img.shields.io/badge/Platform-Arduino-00979D.svg?logo=arduino&logoColor=white)](https://www.arduino.cc/)
[![Application: Smart Home / Hygiene](https://img.shields.io/badge/Application-Contactless%20Sanitary%20Waste-teal.svg)]()
[![Actuator: SG90 Servo](https://img.shields.io/badge/Actuator-SG90%20Micro%20Servo-blue.svg)]()
[![Language: C++](https://img.shields.io/badge/Language-C%2B%2B-00599C.svg?logo=c%2B%2B&logoColor=white)](https://en.wikipedia.org/wiki/C%2B%2B)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](LICENSE)
[![Status: Tested](https://img.shields.io/badge/Hardware%20Status-Tested%20%26%20Verified-brightgreen.svg)]()

A hands-free, touchless automatic waste receptacle designed to eliminate cross-contamination and promote sanitary hygiene in kitchens, clinics, and offices. Uses an HC-SR04 ultrasonic proximity sensor to detect hovering hands or garbage, commanding an SG90 micro servo to lift the lid to 90°, hold open for a 3-second disposal window, and smoothly close.

---

## 🛠️ Hardware Requirements & Bill of Materials (BOM)

| Component | Specification | Quantity |
| :--- | :--- | :--- |
| **Microcontroller** | Arduino Uno, Nano, or Pro Mini | 1 |
| **Proximity Sensor** | HC-SR04 Ultrasonic Sensor Module | 1 |
| **Actuator** | TowerPro SG90 9g Micro Servo | 1 |
| **Dustbin Enclosure** | Small pedal dustbin or custom flapped acrylic bin | 1 |
| **Power Source** | 5V USB wall adapter or 4x AA battery pack (6V with diode) | 1 |

---

## 🔌 Circuit Pinout & Wiring

| Component Pin | Arduino Pin | Description |
| :--- | :--- | :--- |
| **HC-SR04 Trig** | Digital Pin 9 | 10µs ultrasonic pulse trigger |
| **HC-SR04 Echo** | Digital Pin 10 | Distance measurement return |
| **SG90 Servo PWM (Orange)** | Digital Pin 6 | Angular lid position control ($0^\circ - 90^\circ$) |
| **Sensor & Servo VCC** | 5V | Regulated 5V rail |
| **Sensor & Servo GND** | GND | Common ground |

---

## ⚙️ Timing Sequence

```
[Standby: Lid Closed at 0°]
          │
  Object detected within 15cm
          ▼
[Servo writes 90°: Lid Opens]
          │
    Wait 3000ms (Hold)
          ▼
[Servo writes 0°: Lid Closes]
          │
  Loop resumes after 300ms cooldown
```

---

## 🚀 Installation & Upload

1. Clone repository:
   ```bash
   git clone https://github.com/youniquestar/arduino-touchless-automatic-dustbin.git
   ```
2. Open [`touchless_automatic_dustbin/touchless_automatic_dustbin.ino`](touchless_automatic_dustbin/touchless_automatic_dustbin.ino) in Arduino IDE.
3. Upload and verify operation by placing hand within 15 cm of the sensor.

---

## 📜 License

Open-source under the [MIT License](LICENSE).
