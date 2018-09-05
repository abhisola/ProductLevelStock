/* This example shows how to use continuous mode to take
range measurements with the VL53L0X. It is based on
vl53l0x_ContinuousRanging_Example.c from the VL53L0X API.

The range readings are in units of mm. */
#include <ArduinoJson.h>
//#include <UbidotsArduinoGPRS.h>
#include <SoftwareSerial.h>

//#define APN "internet" // Assign the APN
//#define USER ""  // If your apn doesnt have username just put ""
//#define PASS ""  // If your apn doesnt have password just put ""
//#define TOKEN "BBFF-OLDnBKc3nFJSb4XqjoMBTt9xRG813P"  // Replace it with your Ubidots token
//#define VARIABLE_LABEL_1 "sensor_1" // Assign the variable label 5aa55b0a642ab62df485d11d
//#define VARIABLE_LABEL_2 "sensor_2" // Assign the variable label
//#define VARIABLE_LABEL_3 "sensor_3" // Assign the variable label
//#define VARIABLE_LABEL_4 "sensor_4" // Assign the variable label 5aa55b0a642ab62df485d11d
//#define VARIABLE_LABEL_5 "sensor_5" // Assign the variable label
//#define VARIABLE_LABEL_6 "sensor_6" // Assign the variable label
//#define VARIABLE_LABEL_7 "sensor_7" // Assign the variable label 5aa55b0a642ab62df485d11d
//#define VARIABLE_LABEL_8 "sensor_8" // Assign the variable label
//#define VARIABLE_LABEL_9 "sensor_9" // Assign the variable label
//#define VARIABLE_LABEL_10 "sensor_10" // Assign the variable label 5aa55b0a642ab62df485d11d
//#define VARIABLE_LABEL_11 "sensor_11" // Assign the variable label
//#define VARIABLE_LABEL_12 "sensor_12" // Assign the variable label
//#define VARIABLE_LABEL_13 "sensor_13" // Assign the variable label 5aa55b0a642ab62df485d11d
//#define VARIABLE_LABEL_14 "sensor_14" // Assign the variable label

//Ubidots client(TOKEN);
//SoftwareSerial gprs = SoftwareSerial(10, 11);
//SoftwareSerial *GPRSSerial = &gprs;

//double distance;
#define ID_1 "5b312d5b642ab630ee0c80a2"
#define ID_2 "5b312d77642ab6308d459f29"
#define ID_3 "5b312d7f642ab63114e598c1"
#define ID_4 "5b3139d0642ab63b1bb18367"
#define ID_5 "5b3139d9642ab63b08b4a574"
#define ID_6 "5b3139e2642ab63b2ea744ce"
#define ID_7 "5b3139f5642ab63b08b4a583"
#define ID_8 "5b3139fe642ab63b1bb1837f"
#define ID_9 "5b313a07642ab63ad8198995"
#define ID_10 "5b314331642ab64458d269f6"
#define ID_11 "5b31434d642ab6446e936d40"
#define ID_12 "5b314357642ab64448fb8b5e"
#define ID_13 "5b314369642ab643ee85ddbb"
#define ID_14 "5b314375642ab64458d26a42"
SoftwareSerial send_to_node(10, 11);

#include <Wire.h>
#include <VL53L0X.h>

#define selectLine_0 2
#define selectLine_1 3
#define selectLine_2 4
#define selectLine_3 5

#define ENABLE 6
#define DATAZ 7

VL53L0X sensor1,sensor2,sensor3,sensor4,sensor5,sensor6,sensor7,sensor8,sensor9,sensor10,sensor11,sensor12,sensor13,sensor14;
void selectMux(int D, int C, int B , int A)
  {
    digitalWrite(ENABLE,0);
    digitalWrite(selectLine_0 ,A);
    digitalWrite(selectLine_1 ,B);
    digitalWrite(selectLine_2 ,C);
    digitalWrite(selectLine_3 ,D);
    delay(500);

  }

void deselectMux()
  {
        //Serial.println("Enter deselect");
    digitalWrite(ENABLE,1);
  }
  void sensor_1(uint8_t t) {
      Serial.println("Enter in function Sensor_1");
      selectMux(0,0,0,0);// 0
      ResetSensor();
      sensor1.init(true);       // Initiallize sensor with address
      sensor1.setTimeout(500);
      delay(100);
      sensor1.setAddress(t);  // I2c address of device
      delay(100);
      deselectMux();
      Serial.println("Sensor_1 is Set !!!!!!!!!!!!!!!!!");
  }
  void sensor_2(uint8_t t){
      Serial.println("Enter in function Sensor_2");
      selectMux(0,0,0,1);  //1
      ResetSensor();
      sensor2.init(true);       // Initiallize sensor with address
      sensor2.setTimeout(500);
      delay(100);
      sensor2.setAddress(t);  // I2c address of device
      delay(100);
      deselectMux();
      Serial.println("Sensor_2 is Set !!!!!!!!!!!!!!!!!");
  }
  void sensor_3(uint8_t t){
      Serial.println("Enter in function Sensor_3");
      selectMux(0,0,1,0);  //2
      ResetSensor();
      sensor3.init(true);       // Initiallize sensor with address
      sensor3.setTimeout(500);
      delay(100);
      sensor3.setAddress(t);  // I2C address of device
      delay(100);
      deselectMux();
      Serial.println("Sensor_3 is Set !!!!!!!!!!!!!!!!!");
  }
  void sensor_4(uint8_t t){
      Serial.println("Enter in function Sensor_4");
      selectMux(0,0,1,1);  //3
      ResetSensor();
      sensor4.init(true);       // Initiallize sensor with address
      sensor4.setTimeout(500);
      delay(100);
      sensor4.setAddress(t);  // I2c address of device
      delay(100);
      deselectMux();
      Serial.println("Sensor_4 is Set !!!!!!!!!!!!!!!!!");
  }
  void sensor_5(uint8_t t){
      Serial.println("Enter in function Sensor_5");
      selectMux(0,1,0,0);  //4

      ResetSensor();
      sensor5.init(true);       // Initiallize sensor with address
      sensor5.setTimeout(500);
      delay(100);
      sensor5.setAddress(t);  // I2c address of device
      delay(100);
      deselectMux();
      Serial.println("Sensor_5 is Set !!!!!!!!!!!!!!!!!");
  }
  void sensor_6(uint8_t t){
      Serial.println("Enter in function Sensor_6");
      selectMux(0,1,0,1);  //5
      ResetSensor();
      sensor6.init(true);       // Initiallize sensor with address
      sensor6.setTimeout(500);
      delay(100);
      sensor6.setAddress(t);  // I2c address of device
      delay(100);
      deselectMux();
      Serial.println("Sensor_6 is Set !!!!!!!!!!!!!!!!!");
  }
  void sensor_7(uint8_t t){
      Serial.println("Enter in function Sensor_7");
      selectMux(0,1,1,0); // 6
      ResetSensor();
      sensor7.init(true);       // Initiallize sensor with address
      sensor7.setTimeout(500);
      delay(100);
      sensor7.setAddress(t);  // I2c address of device
      delay(100);
      deselectMux();
      Serial.println("Sensor_7 is Set !!!!!!!!!!!!!!!!!");
  }
  void sensor_8(uint8_t t){
      Serial.println("Enter in function Sensor_8");
      selectMux(0,1,1,1); // 7
      ResetSensor();
      sensor8.init(true);       // Initiallize sensor with address
      sensor8.setTimeout(500);
      delay(100);
      sensor8.setAddress(t);  // I2c address of device
      delay(100);
      deselectMux();
      Serial.println("Sensor_8 is Set !!!!!!!!!!!!!!!!!");
  }
  void sensor_9(uint8_t t){
      Serial.println("Enter in function Sensor_9");
      selectMux(1,0,0,0); // 8
      ResetSensor();
      sensor9.init(true);       // Initiallize sensor with address
      sensor9.setTimeout(500);
      delay(100);
      sensor9.setAddress(t);  // I2c address of device
      delay(100);
      deselectMux();
      Serial.println("Sensor_9 is Set !!!!!!!!!!!!!!!!!");
  }
  void sensor_10(uint8_t t){
      Serial.println("Enter in function Sensor_10");
      selectMux(1,0,0,1); // 9
      ResetSensor();
      sensor10.init(true);       // Initiallize sensor with address
      sensor10.setTimeout(500);
      delay(100);
      sensor10.setAddress(t);  // I2c address of device
      delay(100);
      deselectMux();
      Serial.println("Sensor_10 is Set !!!!!!!!!!!!!!!!!");
  }
  void sensor_11(uint8_t t){
      Serial.println("Enter in function Sensor_11");
      selectMux(1,0,1,0); // 10
      ResetSensor();
      sensor11.init(true);       // Initiallize sensor with address
      sensor11.setTimeout(500);
      delay(100);
      sensor11.setAddress(t);  // I2c address of device
      delay(100);
      deselectMux();
      Serial.println("Sensor_11 is Set !!!!!!!!!!!!!!!!!");
  }
  void sensor_12(uint8_t t){
      Serial.println("Enter in function Sensor_12");
      selectMux(1,0,1,1); // 11
      ResetSensor();
      sensor12.init(true);       // Initiallize sensor with address
      sensor12.setTimeout(500);
      delay(100);
      sensor12.setAddress(t);  // I2c address of device
      delay(100);
      deselectMux();
      Serial.println("Sensor_12 is Set !!!!!!!!!!!!!!!!!");
  }
  void sensor_13(uint8_t t){
      Serial.println("Enter in function Sensor_13");
      selectMux(1,1,0,0); // 12
      ResetSensor();
      sensor13.init(true);       // Initiallize sensor with address
      sensor13.setTimeout(500);
      delay(100);
      sensor13.setAddress(t);  // I2c address of device
      delay(100);
      deselectMux();
      Serial.println("Sensor_13 is Set !!!!!!!!!!!!!!!!!");
  }
  void sensor_14(uint8_t t){
      Serial.println("Enter in function Sensor_14");
      selectMux(1,1,0,1); // 13
      ResetSensor();
      sensor14.init(true);       // Initiallize sensor with address
      sensor14.setTimeout(500);
      delay(100);
      sensor14.setAddress(t);  // I2c address of device
      delay(100);
      deselectMux();
      Serial.println("Sensor_14 is Set !!!!!!!!!!!!!!!!!");
  }

void setup()
{
//   Serial.begin(115200);
//    GPRSSerial->begin(19200);
//    if (! client.init(*GPRSSerial))
//    {
//      Serial.println(F("Couldn't find FONA"));
//      while (1);
//    }
//    client.setApn(APN,USER,PASS);
//                      //client.setDebug(false);
//
//  delay(2000);



  pinMode(selectLine_0 ,OUTPUT);
  pinMode(selectLine_1 ,OUTPUT);
  pinMode(selectLine_2 ,OUTPUT);
  pinMode(selectLine_3 ,OUTPUT);

  pinMode(ENABLE ,OUTPUT);
  pinMode(DATAZ ,OUTPUT);

  Serial.begin(19200);
  send_to_node.begin(19200);

  Wire.begin();

   Serial.println("All Pins Set");

      sensor_1(0x01);
      sensor_2(0x02);
      sensor_3(0x03);
      sensor_4(0x04);
      sensor_5(0x05);
      sensor_6(0x06);
      sensor_7(0x07);
      sensor_8(0x08);
      sensor_9(0x09);
      sensor_10(0x0A);
      sensor_11(0x0B);
      sensor_12(0x0C);
      sensor_13(0x0D);
      sensor_14(0x0E);

  Serial.println("00");
  Serial.println("01");
  Serial.println("02");
  Serial.println("03");
  Serial.println("04");

  Serial.println("");
  Serial.println("***************************************************/addresses set/***************************************************");

  // Start continuous back-to-back mode (take readings as
  // fast as possible).  To use continuous timed mode
  // instead, provide a desired inter-measurement period in
  // ms (e.g. sensor.startContinuous(100)).

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
  } // end of for loop
  Serial.println("**********************************************************************************************************************");

  Serial.println ("Done.");
  Serial.print ("Found ");
  Serial.print (count, DEC);
  Serial.println (" device(s).");
  Serial.println("Sensor Readings...........");

  sensor1.startContinuous();
  sensor2.startContinuous();
  sensor3.startContinuous();
  sensor4.startContinuous();
  sensor5.startContinuous();
  sensor6.startContinuous();
  sensor7.startContinuous();
  sensor8.startContinuous();
  sensor9.startContinuous();
  sensor10.startContinuous();
  sensor11.startContinuous();
  sensor12.startContinuous();
  sensor13.startContinuous();
  sensor14.startContinuous();
 }
void ResetSensor()
  {
    digitalWrite(DATAZ,HIGH);   // Make XSHUT = HIGH
    delay(150);

  // Make XSHUT = LOW for 150ms
    digitalWrite(DATAZ, LOW);
    delay(150);
    digitalWrite(DATAZ,HIGH);     // Make XSHUT = HIGH
    delay(500);
  }
int CanInNumbers(unsigned int distance)
{
  int cans;
  int r1 = 150;
  int r2 = 220;
  int r3 = 290;
  int r4 = 360;
  int r5 = 430;
  if (distance < 500)  // phase failures have incorrect data
  {
    Serial.print("Distance (mm): "); Serial.print(distance);Serial.println();
//    server.handleClient();
    cans = 0;
      if (distance <= r1)        //  ||---->  O O O O 0
      {
      cans = 5;
      }
      else if (distance > r1 && distance <= r2)
      {
      cans = 4;
      }
     else if ( distance > r2 && distance <= r3 ) {
      cans = 3;
    }
    else if ( distance > r3 && distance <= r4 ) {
      cans = 2;
    }
    else if ( distance > r4 && distance <= r5 ) {
      cans = 1;
    }
    else if ( distance > r5)
    {
      cans = 0;
    }
  }
  else
  {
    Serial.println(" out of range ");
    cans = 0;
  }
  delay(1000);
    Serial.print("OutSide Loop Number of Cans are ");
    Serial.print(" = ");
    Serial.print(cans);
    Serial.println();
return(cans);
}

void loop()
{
   StaticJsonBuffer<2048> jsonBuffer;
   JsonObject& root = jsonBuffer.createObject();
    unsigned int Sensor1 = sensor1.readRangeContinuousMillimeters();
    unsigned int Sensor2 = sensor2.readRangeContinuousMillimeters();
    unsigned int Sensor3 = sensor3.readRangeContinuousMillimeters();
    unsigned int Sensor4 = sensor4.readRangeContinuousMillimeters();
    unsigned int Sensor5 = sensor5.readRangeContinuousMillimeters();
    unsigned int Sensor6 = sensor6.readRangeContinuousMillimeters();
    unsigned int Sensor7 = sensor7.readRangeContinuousMillimeters();
    unsigned int Sensor8 = sensor8.readRangeContinuousMillimeters();
    unsigned int Sensor9 = sensor9.readRangeContinuousMillimeters();
    unsigned int Sensor10 = sensor10.readRangeContinuousMillimeters();
    unsigned int Sensor11 = sensor11.readRangeContinuousMillimeters();
    unsigned int Sensor12 = sensor12.readRangeContinuousMillimeters();
    unsigned int Sensor13 = sensor13.readRangeContinuousMillimeters();
    unsigned int Sensor14 = sensor14.readRangeContinuousMillimeters();

    int s1 = CanInNumbers(Sensor1);
    delay(10);
    int s2 = CanInNumbers(Sensor2);
    delay(10);
    int s3 = CanInNumbers(Sensor3);
    delay(10);
    int s4 = CanInNumbers(Sensor4);
    delay(10);
    int s5 = CanInNumbers(Sensor5);
    delay(10);
    int s6 = CanInNumbers(Sensor6);
    delay(10);
    int s7 = CanInNumbers(Sensor7);
    delay(10);
    int s8 = CanInNumbers(Sensor8);
    delay(10);
    int s9 = CanInNumbers(Sensor9);
    delay(10);
    int s10 = CanInNumbers(Sensor10);
    delay(10);
    int s11 = CanInNumbers(Sensor11);
    delay(10);
    int s12 = CanInNumbers(Sensor12);
    delay(10);
    int s13 = CanInNumbers(Sensor13);
    delay(10);
    int s14 = CanInNumbers(Sensor14);
    delay(10);

    root["id1"]=(ID_1);
    root["val1"]=(Sensor1);
    root["id2"]=(ID_2);
    root["val2"]=(Sensor2);
    root["id3"]=(ID_3);
    root["val3"]=(Sensor3);
    root["id4"]=(ID_4);
    root["val4"]=(Sensor4);
    root["id5"]=(ID_5);
    root["val5"]=(Sensor5);
    root["id6"]=(ID_6);
    root["val6"]=(Sensor6);

   root["id7"]=(ID_7);
    root["val7"]=(Sensor7);
   root["id8"]=(ID_8);
    root["val8"]=(Sensor8);
   root["id9"]=(ID_9);
    root["val9"]=(Sensor9);
   root["id10"]=(ID_10);
    root["val10"]=(Sensor10);
   root["id11"]=(ID_11);
    root["val11"]=(Sensor11);
   root["id12"]=(ID_12);
    root["val12"]=(Sensor12);
   root["id13"]=(ID_13);
    root["val13"]=(Sensor13);
   root["id14"]=(ID_14);
    root["val14"]=(Sensor14);
    root.printTo(send_to_node);
    send_to_node.println();
    delay(6000);
}
