#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>

const char *SSID = "WemosAP";

ESP8266WebServer server(80);

void renderRootPage()
{
  server.send(200, "text/html", "<h1>Hello, Make+Code</h1>");
}

void setup()
{
  Serial.begin(74880);
  WiFi.softAP(SSID);
  IPAddress ip = WiFi.softAPIP();

  Serial.println("");
  Serial.print("WemosAP's IP : ");
  Serial.println(ip);

  server.on("/", renderRootPage);

  server.begin();
}

void loop()
{
  server.handleClient();
}
