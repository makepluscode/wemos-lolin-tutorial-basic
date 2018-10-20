#include <Arduino.h>

void setup() {
  Serial.begin(74880);
}

void loop() {
  Serial.println("Hello World.");
  delay(2000);
}
