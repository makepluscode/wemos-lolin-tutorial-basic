#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
#include "WiFiClient.h"

const char *SSID = "WemosAP";

ESP8266WebServer server(80);

bool onoff = false;

void renderRootPage()
{
  String s = "<br>";

  if(onoff)
  {
    s += "<br><h1>current status is ON.</h1><br>";
  }
  else
  {
    s += "<br><h1>current status is OFF.</h1><br>";
  }

  s += "<input type=\"button\" value=\"ON\" onclick=\"location.href='/led?onoff=1'\">";
  s += "<br><br><br><br>";
  s += "<input type=\"button\" value=\"OFF\" onclick=\"location.href='/led?onoff=0'\">";

  server.send(200, "text/html", s);
}

void controlLed()
{
  String param = server.arg("onoff");

  if(param=="1")
  {
    onoff = true;
  }
  else if(param=="0")
  {
    onoff = false;
  }

  if(onoff)
  {
    digitalWrite(BUILTIN_LED, LOW);
  }
  else
  {
    digitalWrite(BUILTIN_LED, HIGH);
  }

  //redirect to /
  server.sendHeader("Location", String("/"), true);
  server.send ( 302, "text/plain", "");
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
  server.on("/led", controlLed);

  server.begin();

  pinMode(BUILTIN_LED, OUTPUT);
}

void loop()
{
  server.handleClient();
}
