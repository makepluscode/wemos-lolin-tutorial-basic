#include "DHT.h"

// create dht with pin of D4 and the module of dht22.
DHT dht(D4, DHT22);

void setup()
{
  Serial.begin(74880);
  dht.begin();
}

void loop()
{
  delay(2000);

  float humid = dht.readHumidity();
  float tempC = dht.readTemperature(); // Celsius
  float tempF = dht.readTemperature(true); // Fahrenheit

  // check fail
  if (isnan(humid) || isnan(tempC) || isnan(tempF))
  {
    Serial.println("fail to read DHT.");
    return;
  }

  Serial.printf("Humidity is %3f, Temperature is %3f or %3f.\n", humid, tempC, tempF);
}
