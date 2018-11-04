#include <Arduino.h>

#include <ESP8266WiFi.h>
#include <WiFiUdp.h>

WiFiUDP udp;

const char *SSID = "CherryBongBong-Home";
const char *PASS = "hahaha123!";

unsigned int localUdpPort = 4210;  // local port to listen on
char incomingPacket[255];  // buffer for incoming packets
char  replyPacket[] = "Hi there! Got the message :-)";  // a reply string to send back

void setup()
{ 
  Serial.begin(74880);

  WiFi.begin(SSID, PASS);

  while(WiFi.status() != WL_CONNECTED)
  {
    delay(100);
    Serial.print(".");
  }
  Serial.println("Connected!");

  Serial.println("[NETWORK]");
  Serial.println(WiFi.localIP());
  Serial.println(WiFi.macAddress());
  Serial.println("");

  udp.begin(1004);
}

void loop()
{
  int packetSize = udp.parsePacket();
  if (packetSize)
  {
    // receive incoming UDP packets
    Serial.printf("Received %d bytes from %s, port %d\n", packetSize, udp.remoteIP().toString().c_str(), udp.remotePort());
    int len = udp.read(incomingPacket, 255);
    if (len > 0)
    {
      incomingPacket[len] = 0;
    }
    Serial.printf("UDP packet contents: %s\n", incomingPacket);

    // send back a reply, to the IP address and port we got the packet from
    udp.beginPacket(udp.remoteIP(), udp.remotePort());
    udp.write(replyPacket);
    udp.endPacket();
  }
}
