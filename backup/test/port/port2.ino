/* This example shows how to use continuous mode to take
range measurements with the VL53L0X. It is based on
vl53l0x_ContinuousRanging_Example.c from the VL53L0X API.

The range readings are in units of mm. */
#include <ArduinoJson.h>
//#include <UbidotsArduinoGPRS.h>
#include <SoftwareSerial.h>
//double distance;
#define ID_1 "5b5767f9c03f97015d147266"
#define ID_2 "5b576823c03f97015d147273"
#define ID_3 "5b576d86c03f9707c22d86c9"
#define ID_4 "5b576d93c03f9707c22d86d0"
#define ID_5 "5b576d9bc03f9707c22d86e7"
#define ID_6 "5b576da1c03f9707a52719f5"
#define ID_7 "5b576da9c03f9707c22d86ec"
#define ID_8 "5b576db7c03f9707a52719f9"
#define ID_9 "5b576dcdc03f9707a52719fe"
#define ID_10 "5b576dd9c03f97084534acf8"
#define ID_11 "5b576de4c03f970827a4c2dc"
#define ID_12 "5b576debc03f97084534ad00"
#define ID_13 "5b576df3c03f97084534ad05"
#define ID_14 "5b576e10c03f970827a4c2f7"

SoftwareSerial send_to_node(10, 11);

#include <Wire.h>
#include <VL53L0X.h>

#define selectLine_0 22
#define selectLine_1 23
#define selectLine_2 24
#define selectLine_3 25

#define ENABLE 26
#define DATAZ 27

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
void sensor_1(uint8_t t)
{

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


void sensor_2(uint8_t t)
{

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

void sensor_3(uint8_t t)
{
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

void sensor_4(uint8_t t)
{
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
void sensor_5(uint8_t t)
{
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

void sensor_6(uint8_t t)
{
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
void sensor_7(uint8_t t)
{
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
void sensor_8(uint8_t t)
{
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

void sensor_9(uint8_t t)
{
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
void sensor_10(uint8_t t)
{
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
void sensor_11(uint8_t t)
{
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
void sensor_12(uint8_t t)
{
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
void sensor_13(uint8_t t)
{
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
void sensor_14(uint8_t t)
{
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
  int r1 = 85;
  int r2 = 195;
  int r3 = 250;
  int r4 = 325;
  int r5 = 630;
  if (distance < 700)  // phase failures have incorrect data
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
    String sens1 = "";
    sens1 +=  s1;
    sens1 +=  " (";
    sens1 +=  Sensor1;
    sens1 += ")";
    root["id1"]=(ID_1);
    root["val1"]=(s1);
    root["id2"]=(ID_2);
    root["val2"]=(s2);
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
