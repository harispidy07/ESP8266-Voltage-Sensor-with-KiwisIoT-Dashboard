#include <KiwisIoT.h>

const char* ssid  = "YOUR_WIFI_NAME";
const char* pass  = "YOUR_WIFI_PASSWORD";
const char* topic = "YOUR_TOPIC_ID";

KiwisIoT kiwisiot(ssid, pass, topic);

#define VOLTAGE_PIN A0

// Example values only.
// Calibrate these for your board and voltage divider.
const float ADC_REFERENCE = 3.3;
const float ADC_MAX = 1023.0;
const float DIVIDER_RATIO = 5.0;

void setup() {
  Serial.begin(9600);
  kiwisiot.begin();
}

void loop() {
  kiwisiot.run();


  int sensorValue = analogRead(VOLTAGE_PIN);

  float measuredVoltage =
      (sensorValue / ADC_MAX) *
      ADC_REFERENCE *
      DIVIDER_RATIO;

  kiwisiot.send("1", measuredVoltage);

  Serial.print("Voltage = ");
  Serial.print(measuredVoltage, 2);
  Serial.println(" V");

  delay(1000);
}  