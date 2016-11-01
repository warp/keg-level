#include <ESP8266WiFi.h>

#include <WiFiClient.h>

#include <DNSServer.h>
#include <ESP8266WebServer.h>
#include <WiFiManager.h>

#define DEBUGPRINT

#ifdef DEBUGPRINT
#define DEBUG_PRINT(x)  Serial.println (x)
#else
#define DEBUG_PRINT(x)
#endif

void setup() {
  Serial.begin(115200);

  DEBUG_PRINT("Connecting to wifi...");
  WiFiManager wifi;
  wifi.autoConnect("Keg");
}

void loop() {
  DEBUG_PRINT("Requesting weight...");
}
