#include <ESP8266WiFi.h>

const char* SSID = "********";
const char* PASS = "********";

void setup(void)
{
  Serial.begin(74880);
  WiFi.begin(SSID, PASS);

  while (WiFi.status() != WL_CONNECTED) 
  {
    delay(100);
    Serial.print(".");
  }
  Serial.println("");
  Serial.println("Connected!");
  Serial.println(SSID);
}

void loop(void){
  Serial.println("");
  Serial.print("Wemos IP : ");
  Serial.println(WiFi.localIP());
  Serial.print("Wemos IP : ");
  Serial.println(WiFi.macAddress());
  Serial.print("WIFI Mode : ");  
  Serial.println(WiFi.getMode());

  delay(5000);
}
