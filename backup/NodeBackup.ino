#include <SoftwareSerial.h>

#include <ArduinoJson.h>
#include "UbidotsMicroESP8266.h"
#define TOKEN  "A1E-sa3GBevj4R8uoCLtRIowWj5bgfBNtO"  /* Put here your Ubidots TOKEN */
/* #define ID_2 "Your_variable_ID_here" */ /* Put your variable ID here */
#define WIFISSID "KProject" /* Put here your Wi-Fi SSID */
#define PASSWORD "Chicago2050" /* Put here your Wi-Fi password */
SoftwareSerial ESPserial(D5, D6); // tx Rx
Ubidots client(TOKEN);

void setup(){
    Serial.begin(19200);
    ESPserial.begin(19200);
    delay(10);
    client.wifiConnection(WIFISSID, PASSWORD);
}
void loop(){
    if(ESPserial.available()) {
      StaticJsonBuffer<2048> jsonBuffer;
      JsonObject& root = jsonBuffer.parseObject(ESPserial);
      if (!root.success())
      {
        Serial.println("parseObject() failed");
        return;
      }
      String ID_1 = root[F("id1")].asString();
      char id_1Buff[30];
      Serial.println(ID_1);
      ID_1.toCharArray(id_1Buff, 30);
      float val = root["val1"];
      client.add(id_1Buff, val);

      String ID_2 = root[F("id2")].asString();
      char id_2Buff[30];
      Serial.println(ID_2);
      ID_2.toCharArray(id_2Buff, 30);
      float val2 = root["val2"];
      client.add(id_2Buff, val2);

      String ID_3 = root[F("id3")].asString();
      char id_3Buff[30];
      Serial.println(ID_3);
      ID_3.toCharArray(id_3Buff, 30);
      float val3 = root["val3"];
      client.add(id_3Buff, val3);

      String ID_4 = root[F("id4")].asString();
      char id_4Buff[30];
      Serial.println(ID_4);
      ID_4.toCharArray(id_4Buff, 30);
      float val4 = root["val4"];
      client.add(id_4Buff, val4);

      String ID_5 = root[F("id5")].asString();
      char id_5Buff[30];
      Serial.println(ID_5);
      ID_5.toCharArray(id_5Buff, 30);
      float val5 = root["val5"];
      client.add(id_5Buff, val5);
client.sendAll(false);
      String ID_6 = root[F("id6")].asString();
      char id_6Buff[30];
      Serial.println(ID_6);
      ID_6.toCharArray(id_6Buff, 30);
      float val6 = root["val6"];
      client.add(id_6Buff, val6);

      String ID_7 = root[F("id7")].asString();
      char id_7Buff[30];
      Serial.println(ID_7);
      ID_7.toCharArray(id_7Buff, 30);
      float val7 = root["val7"];
      client.add(id_7Buff, val7);

      String ID_8 = root[F("id8")].asString();
      char id_8Buff[30];
      Serial.println(ID_8);
      ID_8.toCharArray(id_8Buff, 30);
      float val8 = root["val8"];
      client.add(id_8Buff, val8);

      String ID_9 = root[F("id9")].asString();
      char id_9Buff[30];
      Serial.println(ID_9);
      ID_9.toCharArray(id_9Buff, 30);
      float val9 = root["val9"];
      client.add(id_9Buff, val9);

      String ID_10 = root[F("id10")].asString();
      char id_10Buff[30];
      Serial.println(ID_10);
      ID_10.toCharArray(id_10Buff, 30);
      float val10 = root["val10"];
      client.add(id_10Buff, val10);
client.sendAll(false);
      String ID_11 = root[F("id11")].asString();
      char id_11Buff[30];
      Serial.println(ID_11);
      ID_11.toCharArray(id_11Buff, 30);
      float val11 = root["val11"];
      client.add(id_11Buff, val11);

      String ID_12 = root[F("id12")].asString();
      char id_12Buff[30];
      Serial.println(ID_12);
      ID_12.toCharArray(id_12Buff, 30);
      float val12 = root["val12"];
      client.add(id_12Buff, val12);

      String ID_13 = root[F("id13")].asString();
      char id_13Buff[30];
      Serial.println(ID_13);
      ID_13.toCharArray(id_13Buff, 30);
      float val13 = root["val13"];
      client.add(id_13Buff, val13);

      String ID_14 = root[F("id14")].asString();
      char id_14Buff[30];
      Serial.println(ID_14);
      ID_14.toCharArray(id_14Buff, 30);
      float val14 = root["val14"];
      client.add(id_14Buff, val14);

    Serial.println("-------Sending-------");
    client.sendAll(false);
   }
}
