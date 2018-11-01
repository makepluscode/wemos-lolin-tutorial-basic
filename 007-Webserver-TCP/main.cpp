#include <ESP8266WiFi.h>

// Make sure to add your own information
const char* SSID = "****";
const char* PASS = "****";

WiFiServer server(1004);
WiFiClient serverClient;

void setup(void)
{
  Serial.begin(74880);
  WiFi.begin(SSID, PASS);

  WiFi.mode(WIFI_STA);

  while (WiFi.status() != WL_CONNECTED) 
  {
    delay(100);
    Serial.print(".");
  }
  
  Serial.println("");
  Serial.println("Connected!");
  Serial.print("Wemos IP : ");
  Serial.println(WiFi.localIP());

  server.begin();
  server.setNoDelay(true);
}

void loop()
{
  if (server.hasClient())
  {
    serverClient = server.available();
    String str = serverClient.readString();

    if(str) 
    {
      Serial.println(str);
    }
    int size = serverClient.write("Hello!", 7);

    //test
    Serial.println("size : ");
    Serial.println(size);
  }
}
