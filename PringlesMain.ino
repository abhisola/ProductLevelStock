#include <Wire.h>
#include <VL53L0X.h>
#include <ArduinoJson.h>
#include <SoftwareSerial.h>

#define NUMBER_OF_SHELVES 1 // Note: Should not be more than 4
#define ROWS_PER_SHELF 1 // Note: Should not be more than 14
#define RACKNUM "000007"
SoftwareSerial send_to_node(10, 11); // Tx / Rx
int ENABLE_PINS[] = {6, 26, 0, 0}; //TODO : Change 0 to corresponding pin
int DATAZ_PINS[] = {7, 27, 0, 0}; //TODO : Change 0 to corresponding pin
int selectLine1[] = {2 , 3 , 4 , 5}; // for Shelf1
int selectLine2[] = {22 , 23 , 24 , 25}; // For Shelf2
//int selectLine3[] = {22 , 23 , 24 , 25}; // For Shelf3
//int selectLine4[] = {22 , 23 , 24 , 25}; // For Shelf4
String shelf1_ids[] = {"5b312d5b642ab630ee0c80a2","5b312d77642ab6308d459f29","5b312d7f642ab63114e598c1",
    "5b3139d0642ab63b1bb18367","5b3139d9642ab63b08b4a574","5b3139e2642ab63b2ea744ce","5b3139f5642ab63b08b4a583",
    "5b3139fe642ab63b1bb1837f","5b313a07642ab63ad8198995","5b314331642ab64458d269f6","5b31434d642ab6446e936d40",
    "5b314357642ab64448fb8b5e","5b314369642ab643ee85ddbb","5b314375642ab64458d26a42"};

String shelf2_ids[] = {"5b3155c7642ab656c2c1dc83","5b3155cf642ab656c2c1dc8f","5b3155d8642ab656c0c7d79b",
    "5b3155ea642ab656ad38e81f","5b3155f3642ab656f94a7409","5b3155ff642ab656f94a740a","5b315605642ab656ad38e82a",
    "5b315610642ab65699871c5a","5b31561b642ab656e346d70e","5b315625642ab656c0c7d7c7","5b31562b642ab65699871c7c",
    "5b315633642ab65699871c7d","5b315644642ab656f94a7444","5b31564b642ab656ad38e843"};

int shelf3_ids[] = {"","","","","","","","","","","","","",""};
int shelf4_ids[] = {"","","","","","","","","","","","","",""};
VL53L0X sensor1, sensor2, sensor3, sensor4, sensor5, sensor6, sensor7, sensor8, sensor9, sensor10, sensor11, sensor12, sensor13, sensor14,
    sensor15, sensor16, sensor17, sensor18, sensor19, sensor20, sensor21, sensor22, sensor23, sensor24, sensor25, sensor26, sensor27, sensor28,
    sensor29, sensor30, sensor31, sensor32, sensor33, sensor34, sensor35, sensor36, sensor37, sensor38, sensor39, sensor40, sensor41, sensor42,
    sensor43, sensor44, sensor45, sensor46, sensor47, sensor48, sensor49, sensor50, sensor51, sensor52, sensor53, sensor54, sensor55, sensor56;

VL53L0X sensors[] = {
    sensor1, sensor2, sensor3, sensor4, sensor5, sensor6, sensor7, sensor8, sensor9, sensor10, sensor11, sensor12, sensor13, sensor14,
    sensor15, sensor16, sensor17, sensor18, sensor19, sensor20, sensor21, sensor22, sensor23, sensor24, sensor25, sensor26, sensor27, sensor28,
    sensor29, sensor30, sensor31, sensor32, sensor33, sensor34, sensor35, sensor36, sensor37, sensor38, sensor39, sensor40, sensor41, sensor42,
    sensor43, sensor44, sensor45, sensor46, sensor47, sensor48, sensor49, sensor50, sensor51, sensor52, sensor53, sensor54, sensor55, sensor56
  };

void setup() {
  Serial.begin(19200);
  send_to_node.begin(19200);
  Wire.begin();
  for(int i=0;i<4;i++) {
    pinMode(selectLine1[i], OUTPUT);
    pinMode(selectLine2[i], OUTPUT);
    //pinMode(selectLine3[i], OUTPUT);
    //pinMode(selectLine4[i], OUTPUT);
    pinMode(ENABLE_PINS[i], OUTPUT);
    pinMode(DATAZ_PINS[i], OUTPUT);
  }
  int run_count = NUMBER_OF_SHELVES * ROWS_PER_SHELF;
  for(int i=0;i<run_count;i++) {
    if(i < ROWS_PER_SHELF) {
      if(NUMBER_OF_SHELVES >= 1) setSensor(i,sensors[i],1);
    } else if(i >= ROWS_PER_SHELF && i < (ROWS_PER_SHELF*2)) {
      if(NUMBER_OF_SHELVES >= 2) setSensor(i,sensors[i],2);
    } else if(i >= (ROWS_PER_SHELF * 2) && i < (ROWS_PER_SHELF*3)) {
      if(NUMBER_OF_SHELVES >= 3) setSensor(i,sensors[i],3);
    } else if(i >= (ROWS_PER_SHELF*3) && i < (ROWS_PER_SHELF*4)) {
      if(NUMBER_OF_SHELVES >= 4) setSensor(i,sensors[i],4);
    }
    sensors[i].startContinuous();
  }
  scanI2C();
}
void selectMux( int i, int shelf)
{
  int D = 0; int C = 0; int B = 0; int A = 0;
  int rec_num = 0; // This always goes from 0 to 13 if rows per shelf is 14
  if(i < ROWS_PER_SHELF) rec_num = i;
  else if(i >= ROWS_PER_SHELF && i<(ROWS_PER_SHELF*2)) rec_num = i-ROWS_PER_SHELF;
  else if(i >= (ROWS_PER_SHELF*2) && i<(ROWS_PER_SHELF*3)) rec_num = (i-(ROWS_PER_SHELF*2));
  else if(i >= (ROWS_PER_SHELF*3) && i<(ROWS_PER_SHELF*4)) rec_num = (i-(ROWS_PER_SHELF*3));
  for(int i=0;i<4;i++){
    byte outBit = bitRead(rec_num, i);
    if(i==0) A = outBit;
    else if(i==1) B = outBit;
    else if(i==2) C = outBit;
    else D = outBit;
  }

  switch(shelf) {
    case 1:
      digitalWrite(ENABLE_PINS[shelf-1],0);
      digitalWrite(selectLine1[0] ,A);
      digitalWrite(selectLine1[1] ,B);
      digitalWrite(selectLine1[2] ,C);
      digitalWrite(selectLine1[3] ,D);
    break;
    case 2:
      digitalWrite(ENABLE_PINS[shelf-1],0);
      digitalWrite(selectLine2[0] ,A);
      digitalWrite(selectLine2[1] ,B);
      digitalWrite(selectLine2[2] ,C);
      digitalWrite(selectLine2[3] ,D);
    break;
    /*case 3:
      digitalWrite(ENABLE_PINS[shelf-1],0);
      digitalWrite(selectLine3[0] ,A);
      digitalWrite(selectLine3[1] ,B);
      digitalWrite(selectLine3[2] ,C);
      digitalWrite(selectLine3[3] ,D);
    break3
    case 4:
      digitalWrite(ENABLE_PINS[shelf-1],0);
      digitalWrite(selectLine4[0] ,A);
      digitalWrite(selectLine4[1] ,B);
      digitalWrite(selectLine4[2] ,C);
      digitalWrite(selectLine4[3] ,D);
    break;*/
  }
  delay(500);
}
void deselectMux(int shelf)
{
  if(shelf == 1) digitalWrite(ENABLE_PINS[shelf-1],1);
  else if(shelf == 2) digitalWrite(ENABLE_PINS[shelf-1],1);
  //else if(shelf == 3) digitalWrite(ENABLE_PINS[shelf-1],1);
  //else if(shelf == 4) digitalWrite(ENABLE_PINS[shelf-1],1);
}
void setSensor(int i, VL53L0X sensor,int shelf)
{
    uint8_t addr = i;
    selectMux(i, shelf);
    ResetSensor(shelf);
    sensor.init(true);       // Initiallize sensor with address
    sensor.setTimeout(500);
    delay(100);
    sensor.setAddress(addr);  // I2c address of device
    delay(100);
    deselectMux(shelf);
    String msg = "Sensor ";
    msg = msg + i;
    msg = msg + " is Set!";
    Serial.println(msg);
}
void ResetSensor(int shelf)
{
    digitalWrite(DATAZ_PINS[shelf-1],HIGH);   // Make XSHUT = HIGH
    delay(150);

  // Make XSHUT = LOW for 150ms
    digitalWrite(DATAZ_PINS[shelf-1], LOW);
    delay(150);
    digitalWrite(DATAZ_PINS[shelf-1],HIGH);     // Make XSHUT = HIGH
    delay(500);
}
int* byteToArray(byte in){
  int i, temp, out[8];
  for(i=0; i<8; i++){
    temp = (in >> i) & 1;
    if(temp == 0) temp = -1;
    out[i] = temp;
  }
  return out;
}
void scanI2C() {
Serial.println ("\n\t I2C scanner. Scanning ...");
byte count = 0;
  for (byte i = 1; i < 120; i++)
  {
    Wire.beginTransmission (i);
    if (Wire.endTransmission () == 0)
    {
      Serial.print ("Found address: ");
      Serial.print (i, DEC);
      Serial.print (" (0x");
      Serial.print (i, HEX);
      Serial.println (")");
      count++;
      delay (1);  // maybe unneeded?
    } // end of good response
  }
}
void loop() {
  int run_count = NUMBER_OF_SHELVES * ROWS_PER_SHELF;
  int values[run_count];
  for(int i=0;i<run_count;i++) {
    values[i] = sensors[i].readRangeContinuousMillimeters();
  }
  for(int i=1;i<=NUMBER_OF_SHELVES;i++) {
    StaticJsonBuffer<1024> jsonBuffer;
    JsonObject& root = jsonBuffer.createObject();
    root["racknum"] = RACKNUM;
    String shelfname = "shelf";
    shelfname = shelfname + i;
    JsonArray& rows = root.createNestedArray(shelfname);
    for(int j=0;j<=ROWS_PER_SHELF;j++) {
      JsonObject& row = jsonBuffer.createObject();
      String rownum = "row";
      int a = j+1;
      rownum = rownum + a;
      row["rownum"] = rownum;
      row["value"] = values[i];
      if(i==0) row["id"] = shelf1_ids[j];
      if(i==1) row["id"] = shelf2_ids[j];
      //if(i==2) row["id"] = shelf3_ids[j];
      //if(i==3) row["id"] = shelf4_ids[j];
      rows.add(row);
    }
    root.prettyPrintTo(Serial);
    Serial.println();
  }
  delay(60000);
}
