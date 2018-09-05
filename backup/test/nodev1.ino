#include <SoftwareSerial.h>
#include <ArduinoJson.h>
#include "UbidotsMicroESP8266.h"
#define TOKEN  "A1E-sa3GBevj4R8uoCLtRIowWj5bgfBNtO"  /* Put here your Ubidots TOKEN */
#define WIFISSID "" /* Put here your Wi-Fi SSID */
#define PASSWORD "" /* Put here your Wi-Fi password */
SoftwareSerial ESPserial(D5, D6); // tx Rx
Ubidots client(TOKEN);
boolean start = false;
void setup() {
  Serial.begin(19200);
  ESPserial.begin(19200);
  delay(10);
  client.wifiConnection(WIFISSID, PASSWORD);
}

void loop() {
  if(ESPserial.available()) {
    StaticJsonBuffer<1024> jsonBuffer;
    JsonObject& root = jsonBuffer.parseObject(ESPserial);
    if (!root.success())
    {
      Serial.println("parseObject() failed");
      return;
    }
    String ID = root[F("id")].asString();
    char idBuff[30];
    ID.toCharArray(idBuff, 30);
    float val = root["value"];
    client.add(idBuff, val);
    client.sendAll(false);
  }
}
