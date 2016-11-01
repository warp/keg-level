#define DEBUGPRINT

#ifdef DEBUGPRINT
#define DEBUG_PRINT(x)  Serial.println (x)
#else
#define DEBUG_PRINT(x)
#endif

void setup() {
  Serial.begin(115200);

  DEBUG_PRINT("setup");
}

void loop() {
  DEBUG_PRINT("loop");
}
