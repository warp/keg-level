#include <ESP8266WiFi.h>

#include <WiFiClient.h>

#include <DNSServer.h>
#include <ESP8266WebServer.h>
#include <WiFiManager.h>

#include "hx711.h"

#define DEBUGPRINT

#ifdef DEBUGPRINT
#define DEBUG_PRINT(x)  Serial.println (x)
#else
#define DEBUG_PRINT(x)
#endif

Hx711 scale(A1, A0);

void setup() {
  Serial.begin(115200);
  Serial.println();

  WiFiManager wifi;

  if(!wifi.autoConnect("Keg")) {
    DEBUG_PRINT("Failed to connect...");
    ESP.reset();
    delay(1000);
  }

  DEBUG_PRINT(WiFi.localIP())

  // scale.setOffset(offset);
  // scale.setScale((w - offset) / 1000);
}

void loop() {
  DEBUG_PRINT(scale.averageValue());
  // DEBUG_PRINT(scale.getGram())
  delay(200);
}
