# ESP8266 Voltage Sensor with KiwisIoT Dashboard

## Project Overview

This project measures voltage levels using an ESP8266 NodeMCU and a voltage sensor module. It reads analog voltage values, processes the measurements, and sends the data to the KiwisIoT platform for real-time remote monitoring.

## Hardware Components

- ESP8266 NodeMCU
- Voltage Sensor Module
- Jumper Wires
- Breadboard
- USB Cable
- Power Supply

## Software Requirements

- Arduino IDE
- ESP8266 Board Package
- KiwisIoT Arduino Library

## Circuit Connections

| Voltage Sensor Module | ESP8266 NodeMCU       |
| --------------------- | --------------------- |
| VCC                   | Suitable Power Supply |
| GND                   | GND                   |
| Analog Output         | A0                    |

**Note:** Ensure the voltage sensor output does not exceed the ESP8266 ADC input limit. Use a suitable voltage divider when required.

## Working Principle

The voltage sensor measures the input voltage and provides a proportional analog signal to the ESP8266. The controller reads and processes the analog value, then transmits the voltage information to the KiwisIoT platform for remote monitoring.

## KiwisIoT Dashboard

| Channel    | Data                      |
| ---------- | ------------------------- |
| Channel 0  | Voltage Reading (V)       |
| Monitoring | Real-time voltage updates |

## Configuration

Update your Wi-Fi credentials and KiwisIoT Topic ID in the Arduino code:

```cpp
const char* ssid = "YOUR_WIFI_NAME";
const char* pass = "YOUR_WIFI_PASSWORD";
const char* topic = "YOUR_TOPIC_ID";
```

Upload the code to the NodeMCU ESP8266 and monitor voltage readings through the KiwisIoT dashboard.

## Applications

- Battery voltage monitoring
- Power supply monitoring
- Solar energy monitoring
- Electrical equipment monitoring
- IoT-based power management
- Voltage measurement systems

## Project Reference

**Hackster.io Project:**  
[https://www.hackster.io/harispidy07/esp8266-voltage-sensor-with-kiwisiot-dashboard-0ff5a1](https://www.hackster.io/harispidy07/esp8266-voltage-sensor-with-kiwisiot-dashboard-0ff5a1)

**KiwisIoT Platform:**  
[https://kiwisiot.in/](https://kiwisiot.in/)

**KiwisIoT GitHub Repository:**  
[https://github.com/Kiwistron/KiwisIoT-Projects](https://github.com/Kiwistron/KiwisIoT-Projects)

## Author

**Hariprasath S**

GitHub: [https://github.com/harispidy07](https://github.com/harispidy07)

---

_Built using ESP8266, Voltage Sensor, and KiwisIoT for real-time voltage monitoring._
