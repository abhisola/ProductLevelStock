#include <Wire.h>
#include <VL53L0X.h>
#include <ArduinoJson.h>
#include <SoftwareSerial.h>

#define NUMBER_OF_SHELVES 1 // Note: Should not be more than 4
#define ROWS_PER_SHELF 14 // Note: Should not be more than 14
#define RACKNUM "000007"
SoftwareSerial send_to_node(10, 11); // Tx / Rx
int ENABLE_PINS[] = {6, 26, 0, 0}; //TODO : Change 0 to corresponding pin
int DATAZ_PINS[] = {7, 27, 0, 0}; //TODO : Change 0 to corresponding pin
int selectLine1[] = {2 , 3 , 4 , 5}; // for Shelf1
int selectLine2[] = {22 , 23 , 24 , 25}; // For Shelf2
//int selectLine3[] = {22 , 23 , 24 , 25}; // For Shelf3
//int selectLine4[] = {22 , 23 , 24 , 25}; // For Shelf4
String shelf1_ids[] = {"5b5767f9c03f97015d147266","5b576823c03f97015d147273","5b576d86c03f9707c22d86c9",
    "5b576d93c03f9707c22d86d0","5b576d9bc03f9707c22d86e7","5b576da1c03f9707a52719f5","5b576da9c03f9707c22d86ec",
    "5b576db7c03f9707a52719f9","5b576dcdc03f9707a52719fe","5b576dd9c03f97084534acf8","5b576de4c03f970827a4c2dc",
    "5b576debc03f97084534ad00","5b576df3c03f97084534ad05","5b576e10c03f970827a4c2f7"};

String shelf2_ids[] = {"5b584f95c03f9774a5d96c78","5b584f8fc03f9774a5d96c71","5b584f89c03f977488b6d988",
    "5b584f85c03f977488b6d97d","5b584f7fc03f9774a5d96c51","5b584f79c03f9774a5d96c4c","5b584f68c03f977488b6d976",
    "5b584f5dc03f9774a5d96c38","5b584f45c03f97740352a357","5b584f41c03f97740352a354","5b584f34c03f97740352a34c",
    "5b584f2bc03f9774061803bd","5b584f22c03f9774061803b9","5b584f18c03f9774061803ac"};

String shelf3_ids[] = {"","","","","","","","","","","","","",""};
String shelf4_ids[] = {"","","","","","","","","","","","","",""};
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
  Serial.print("In Setup: ");
  Serial.println(run_count);
  for(int i=1;i<=run_count;i++) {
    if(i <= ROWS_PER_SHELF) {
      if(NUMBER_OF_SHELVES >= 1) setSensor(i,1);
    } else if(i > ROWS_PER_SHELF && i <= (ROWS_PER_SHELF*2)) {
      if(NUMBER_OF_SHELVES >= 2) setSensor(i,2);
    } else if(i > (ROWS_PER_SHELF * 2) && i <= (ROWS_PER_SHELF*3)) {
      if(NUMBER_OF_SHELVES >= 3) setSensor(i,3);
    } else if(i > (ROWS_PER_SHELF*3) && i <= (ROWS_PER_SHELF*4)) {
      if(NUMBER_OF_SHELVES >= 4) setSensor(i,4);
    }
    sensors[i-1].startContinuous();
    delay(300);
    Serial.print("Counter: ");
    Serial.println(i);
    Serial.println();
  }
  scanI2C();
}
void selectMux( int i, int shelf)
{
  Serial.print("Select Mux Num: ");
  Serial.print(i);
  Serial.print(" For Shelf: ");
  Serial.println(shelf);
  int D = 0; int C = 0; int B = 0; int A = 0;
  int rec_num = 0; // This always goes from 0 to 13 if rows per shelf is 14
  if(i <= ROWS_PER_SHELF) rec_num = i;
  else if(i > ROWS_PER_SHELF && i<=(ROWS_PER_SHELF*2)) rec_num = i-ROWS_PER_SHELF;
  else if(i > (ROWS_PER_SHELF*2) && i<=(ROWS_PER_SHELF*3)) rec_num = (i-(ROWS_PER_SHELF*2));
  else if(i > (ROWS_PER_SHELF*3) && i<=(ROWS_PER_SHELF*4)) rec_num = (i-(ROWS_PER_SHELF*3));

  for(int i=0;i<4;i++){
    int outBit = bitRead(rec_num, i);
    if(i==0) A = outBit;
    else if(i==1) B = outBit;
    else if(i==2) C = outBit;
    else D = outBit;
  }
  Serial.print("Mux Value: A->");
  Serial.print(A);
  Serial.print(", B->");
  Serial.print(B);
  Serial.print(", C->");
  Serial.print(C);
  Serial.print(", D->");
  Serial.print(D);
  Serial.println();

  switch(shelf) {
    digitalWrite(ENABLE_PINS[shelf-1],0);
    case 1:
      digitalWrite(selectLine1[0] ,A);
      digitalWrite(selectLine1[1] ,B);
      digitalWrite(selectLine1[2] ,C);
      digitalWrite(selectLine1[3] ,D);
    break;
    case 2:
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
  Serial.print("Deselect Mux for shelf: ");
  Serial.println(shelf);
  if(shelf == 1) digitalWrite(ENABLE_PINS[shelf-1],1);
  else if(shelf == 2) digitalWrite(ENABLE_PINS[shelf-1],1);
  //else if(shelf == 3) digitalWrite(ENABLE_PINS[shelf-1],1);
  //else if(shelf == 4) digitalWrite(ENABLE_PINS[shelf-1],1);
}
void setSensor(int i, int shelf)
{
    uint8_t addr = i;
    selectMux(i-1, shelf);
    ResetSensor(shelf);
    sensors[i-1].init(true);       // Initiallize sensor with address
    sensors[i-1].setTimeout(500);
    delay(100);
    Serial.print("Setting Address For Sensor ");
    Serial.print(i);
    Serial.print(" with Addr: ");
    Serial.println(addr, HEX);
    sensors[i-1].setAddress(addr);  // I2c address of device
    delay(200);
    deselectMux(shelf);
    String msg = "Sensor ";
    msg = msg + i;
    msg = msg + " is Set!";
    Serial.println(msg);
    delay(200);
}
void ResetSensor(int shelf)
{
  Serial.print("Rese sensor Shelf ");
  Serial.println(shelf);
    digitalWrite(DATAZ_PINS[shelf-1],HIGH);   // Make XSHUT = HIGH
    delay(150);
  // Make XSHUT = LOW for 150ms
    digitalWrite(DATAZ_PINS[shelf-1], LOW);
    delay(150);
    digitalWrite(DATAZ_PINS[shelf-1],HIGH);     // Make XSHUT = HIGH
    delay(500);
}
/*int* byteToArray(byte in){
  int i, temp, out[8];
  for(i=0; i<8; i++){
    temp = (in >> i) & 1;
    if(temp == 0) temp = -1;
    out[i] = temp;
  }
  return out;
}*/
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
  Serial.print("Found Devices : ");
  Serial.println(count);
}
void loop() {
  int run_count = NUMBER_OF_SHELVES * ROWS_PER_SHELF;
  float values[run_count];
  for(int i=0;i<run_count;i++) {
    unsigned int a = sensors[i].readRangeContinuousMillimeters();
    Serial.print("Sensor ");
    Serial.print(i);
    Serial.print(": ");
    Serial.println(a);
  }
  /*for(int i=1;i<=NUMBER_OF_SHELVES;i++) {
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

  }*/
  for(int i=1;i<=NUMBER_OF_SHELVES;i++) {
    for(int j=0;j<=ROWS_PER_SHELF;j++) {
      StaticJsonBuffer<1024> jsonBuffer;
      JsonObject& root = jsonBuffer.createObject();
      String rownum = "row";
      int a = j+1;
      rownum = rownum + a;
      root["rownum"] = rownum;
      root["value"] = values[i];
      if(i==0) root["id"] = shelf1_ids[j];
      if(i==1) root["id"] = shelf2_ids[j];
      if(i==2) root["id"] = shelf3_ids[j];
      if(i==3) root["id"] = shelf4_ids[j];
      root.prettyPrintTo(Serial);
      delay(300);
    }
  }
  //Serial.println("looping");
  delay(6000);
}
