/* This example shows how to use continuous mode to take
range measurements with the VL53L0X. It is based on
vl53l0x_ContinuousRanging_Example.c from the VL53L0X API.

The range readings are in units of mm. */
#include <ArduinoJson.h>
#include <SoftwareSerial.h>

//------------------------------------- Shelf1
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
//------------------------------------- Shelf2
#define ID_15 "5b584f95c03f9774a5d96c78"
#define ID_16 "5b584f8fc03f9774a5d96c71"
#define ID_17 "5b584f89c03f977488b6d988"
#define ID_18 "5b584f85c03f977488b6d97d"
#define ID_19 "5b584f7fc03f9774a5d96c51"
#define ID_20 "5b584f79c03f9774a5d96c4c"
#define ID_21 "5b584f68c03f977488b6d976"
#define ID_22 "5b584f5dc03f9774a5d96c38"
#define ID_23 "5b584f45c03f97740352a357"
#define ID_24 "5b584f41c03f97740352a354"
#define ID_25 "5b584f34c03f97740352a34c"
#define ID_26 "5b584f2bc03f9774061803bd"
#define ID_27 "5b584f22c03f9774061803b9"
#define ID_28 "5b584f18c03f9774061803ac"

SoftwareSerial send_to_node(10, 11);

#include <Wire.h>
#include <VL53L0X.h>
int set_Timeout = 500;
#define selectLine_0 2
#define selectLine_1 3
#define selectLine_2 4
#define selectLine_3 5

#define selectLine2_0 22
#define selectLine2_1 23
#define selectLine2_2 24
#define selectLine2_3 25

#define ENABLE 6
#define ENABLE2 26
#define DATAZ 7
#define DATAZ2 27

VL53L0X sensor1,sensor2,sensor3,sensor4,sensor5,sensor6,sensor7,sensor8,sensor9,sensor10,sensor11,sensor12,sensor13,sensor14, sensor15,sensor16,sensor17,sensor18,sensor19,sensor20,sensor21,sensor22,sensor23,sensor24,sensor25,sensor26,sensor27,sensor28;

void selectMux(int D, int C, int B , int A)
  {
    digitalWrite(ENABLE,0);
    digitalWrite(selectLine_0 ,A);
    digitalWrite(selectLine_1 ,B);
    digitalWrite(selectLine_2 ,C);
    digitalWrite(selectLine_3 ,D);
    delay(500);
  }
void selectMux2(int D, int C, int B , int A){
  digitalWrite(ENABLE2,0);
  digitalWrite(selectLine2_0 ,A);
  digitalWrite(selectLine2_1 ,B);
  digitalWrite(selectLine2_2 ,C);
  digitalWrite(selectLine2_3 ,D);
  delay(500);

}
void deselectMux(){
    //Serial.println("Enter deselect");
    digitalWrite(ENABLE,1);
}
void deselectMux2(){
    //Serial.println("Enter deselect");
    digitalWrite(ENABLE2,1);
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
//---------------------------Shelf 2
void sensor_15(uint8_t t){
    Serial.println("Enter in function Sensor_15");
    selectMux2(0,0,0,0);// 0
    ResetRack2Sensor();
    sensor15.init(true);       // Initiallize sensor with address
    sensor15.setTimeout(set_Timeout);
    delay(100);
    sensor15.setAddress(t);  // I2c address of device
    delay(100);
    deselectMux2();
    Serial.println("Sensor_15 is Set !!!!!!!!!!!!!!!!!");
}
void sensor_16(uint8_t t){
    Serial.println("Enter in function Sensor_16");
    selectMux2(0,0,0,1);  //1
    ResetRack2Sensor();
    sensor16.init(true);       // Initiallize sensor with address
    sensor16.setTimeout(set_Timeout);
    delay(100);
    sensor16.setAddress(t);  // I2c address of device
    delay(100);
    deselectMux2();
    Serial.println("Sensor_16 is Set !!!!!!!!!!!!!!!!!");
}
void sensor_17(uint8_t t){
    Serial.println("Enter in function Sensor_17");
    selectMux2(0,0,1,0);  //2
    ResetRack2Sensor();
    sensor17.init(true);       // Initiallize sensor with address
    sensor17.setTimeout(set_Timeout);
    delay(100);
    sensor17.setAddress(t);  // I2c address of device
    delay(100);
    deselectMux2();
    Serial.println("Sensor_17 is Set !!!!!!!!!!!!!!!!!");
}
void sensor_18(uint8_t t){
    Serial.println("Enter in function Sensor_18");
    selectMux2(0,0,1,1);  //3
    ResetRack2Sensor();
    sensor18.init(true);       // Initiallize sensor with address
    sensor18.setTimeout(set_Timeout);
    delay(100);
    sensor18.setAddress(t);  // I2c address of device
    delay(100);
    deselectMux2();
    Serial.println("Sensor_18 is Set !!!!!!!!!!!!!!!!!");
}
void sensor_19(uint8_t t){
    Serial.println("Enter in function Sensor_19");
    selectMux2(0,1,0,0);  //4
    ResetRack2Sensor();
    sensor19.init(true);       // Initiallize sensor with address
    sensor19.setTimeout(set_Timeout);
    delay(100);
    sensor19.setAddress(t);  // I2c address of device
    delay(100);
    deselectMux2();
    Serial.println("Sensor_19 is Set !!!!!!!!!!!!!!!!!");
}
void sensor_20(uint8_t t){
    Serial.println("Enter in function Sensor_20");
    selectMux2(0,1,0,1);  //5
    ResetRack2Sensor();
    sensor20.init(true);       // Initiallize sensor with address
    sensor20.setTimeout(set_Timeout);
    delay(100);
    sensor20.setAddress(t);  // I2c address of device
    delay(100);
    deselectMux2();
    Serial.println("Sensor_20 is Set !!!!!!!!!!!!!!!!!");
}
void sensor_21(uint8_t t){
    Serial.println("Enter in function Sensor_21");
    selectMux2(0,1,1,0); // 6
    ResetRack2Sensor();
    sensor21.init(true);       // Initiallize sensor with address
    sensor21.setTimeout(set_Timeout);
    delay(100);
    sensor21.setAddress(t);  // I2c address of device
    delay(100);
    deselectMux2();
    Serial.println("Sensor_21 is Set !!!!!!!!!!!!!!!!!");
}
void sensor_22(uint8_t t){
    Serial.println("Enter in function Sensor_22");
    selectMux2(0,1,1,1); // 7
    ResetRack2Sensor();
    sensor22.init(true);       // Initiallize sensor with address
    sensor22.setTimeout(set_Timeout);
    delay(100);
    sensor22.setAddress(t);  // I2c address of device
    delay(100);
    deselectMux2();
    Serial.println("Sensor_22 is Set !!!!!!!!!!!!!!!!!");
}
void sensor_23(uint8_t t){
    Serial.println("Enter in function Sensor_23");
    selectMux2(1,0,0,0); // 8
    ResetRack2Sensor();
    sensor23.init(true);       // Initiallize sensor with address
    sensor23.setTimeout(set_Timeout);
    delay(100);
    sensor23.setAddress(t);  // I2c address of device
    delay(100);
    deselectMux2();
    Serial.println("Sensor_23 is Set !!!!!!!!!!!!!!!!!");
}
void sensor_24(uint8_t t){
    Serial.println("Enter in function Sensor_24");
    selectMux2(1,0,0,1); // 9
    ResetRack2Sensor();
    sensor24.init(true);       // Initiallize sensor with address
    sensor24.setTimeout(set_Timeout);
    delay(100);
    sensor24.setAddress(t);  // I2c address of device
    delay(100);
    deselectMux2();
    Serial.println("Sensor_24 is Set !!!!!!!!!!!!!!!!!");
}
void sensor_25(uint8_t t){
    Serial.println("Enter in function Sensor_25");
    selectMux2(1,0,1,0); // 10
    ResetRack2Sensor();
    sensor25.init(true);       // Initiallize sensor with address
    sensor25.setTimeout(set_Timeout);
    delay(100);
    sensor25.setAddress(t);  // I2c address of device
    delay(100);
    deselectMux2();
    Serial.println("Sensor_25 is Set !!!!!!!!!!!!!!!!!");
}
void sensor_26(uint8_t t){
    Serial.println("Enter in function Sensor_26");
    selectMux2(1,0,1,1); // 11
    ResetRack2Sensor();
    sensor26.init(true);       // Initiallize sensor with address
    sensor26.setTimeout(set_Timeout);
    delay(100);
    sensor26.setAddress(t);  // I2c address of device
    delay(100);
    deselectMux2();
    Serial.println("Sensor_26 is Set !!!!!!!!!!!!!!!!!");
}
void sensor_27(uint8_t t){
    Serial.println("Enter in function Sensor_27");
    selectMux2(1,1,0,0); // 12
    ResetRack2Sensor();
    sensor27.init(true);       // Initiallize sensor with address
    sensor27.setTimeout(set_Timeout);
    delay(100);
    sensor27.setAddress(t);  // I2c address of device
    delay(100);
    deselectMux2();
    Serial.println("Sensor_27 is Set !!!!!!!!!!!!!!!!!");
}
void sensor_28(uint8_t t){
    Serial.println("Enter in function Sensor_28");
    selectMux2(1,1,0,1); // 13
    ResetRack2Sensor();
    sensor28.init(true);       // Initiallize sensor with address
    sensor28.setTimeout(set_Timeout);
    delay(100);
    sensor28.setAddress(t);  // I2c address of device
    delay(100);
    deselectMux2();
    Serial.println("Sensor_28 is Set !!!!!!!!!!!!!!!!!");
}

void setup()
{
  pinMode(selectLine_0 ,OUTPUT);
  pinMode(selectLine_1 ,OUTPUT);
  pinMode(selectLine_2 ,OUTPUT);
  pinMode(selectLine_3 ,OUTPUT);

  pinMode(ENABLE ,OUTPUT);
  pinMode(DATAZ ,OUTPUT);

  pinMode(selectLine2_0 ,OUTPUT);
  pinMode(selectLine2_1 ,OUTPUT);
  pinMode(selectLine2_2 ,OUTPUT);
  pinMode(selectLine2_3 ,OUTPUT);

  pinMode(ENABLE2 ,OUTPUT);
  pinMode(DATAZ2 ,OUTPUT);

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
      //unsigned int shell_2= 0x0F;
       sensor_15(0X0F);   //0X0F
       sensor_16(0X10);   //0X10
       sensor_17(0X11);   //0X11
       sensor_18(0X12);   //0X12
       sensor_19(0X13);   //0X13
       sensor_20(0X14);   //0X14
       sensor_21(0X15);   //0X15
       sensor_22(0X16);   //0X16
       sensor_23(0X17);   //0X17
       sensor_24(0X19);   //0X19
       sensor_26(0X1A);   //0X1A
       sensor_27(0X1B);   //0X1B
       sensor_28(0X1C);     //0X1C

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

  sensor15.startContinuous();
  sensor16.startContinuous();
  sensor17.startContinuous();
  sensor18.startContinuous();
  sensor19.startContinuous();
  sensor20.startContinuous();
  sensor21.startContinuous();
  sensor22.startContinuous();
  sensor23.startContinuous();
  sensor24.startContinuous();
  sensor25.startContinuous();
  sensor26.startContinuous();
  sensor27.startContinuous();
  sensor28.startContinuous();
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
void ResetRack2Sensor()
   {
     digitalWrite(DATAZ2,HIGH);   // Make XSHUT = HIGH
     delay(150);

   // Make XSHUT = LOW for 150ms
     digitalWrite(DATAZ2, LOW);
     delay(150);
     digitalWrite(DATAZ2,HIGH);     // Make XSHUT = HIGH
     delay(500);
   }
int CanInNumbers(unsigned int distance)
{
  int cans;
  int r1 = 0;
  int r2 = 85;
  int r3 = 250;
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

    unsigned int Sensor15 = sensor15.readRangeContinuousMillimeters();
    unsigned int Sensor16 = sensor16.readRangeContinuousMillimeters();
    unsigned int Sensor17 = sensor17.readRangeContinuousMillimeters();
    unsigned int Sensor18 = sensor18.readRangeContinuousMillimeters();
    unsigned int Sensor19 = sensor19.readRangeContinuousMillimeters();
    unsigned int Sensor20 = sensor20.readRangeContinuousMillimeters();
    unsigned int Sensor21 = sensor21.readRangeContinuousMillimeters();
    unsigned int Sensor22 = sensor22.readRangeContinuousMillimeters();
    unsigned int Sensor23 = sensor23.readRangeContinuousMillimeters();
    unsigned int Sensor24 = sensor24.readRangeContinuousMillimeters();
    unsigned int Sensor25 = sensor25.readRangeContinuousMillimeters();
    unsigned int Sensor26 = sensor26.readRangeContinuousMillimeters();
    unsigned int Sensor27 = sensor27.readRangeContinuousMillimeters();
    unsigned int Sensor28 = sensor28.readRangeContinuousMillimeters();
    int s15 = CanInNumbers(Sensor15);
    delay(10);
    int s16 = CanInNumbers(Sensor16);
    delay(10);
    int s17 = CanInNumbers(Sensor17);
    delay(10);
    int s18 = CanInNumbers(Sensor18);
    delay(10);
    int s19 = CanInNumbers(Sensor19);
    delay(10);
    int s20 = CanInNumbers(Sensor20);
    delay(10);
    int s21 = CanInNumbers(Sensor21);
    delay(10);
    int s22 = CanInNumbers(Sensor22);
    delay(10);
    int s23 = CanInNumbers(Sensor23);
    delay(10);
    int s24 = CanInNumbers(Sensor24);
    delay(10);
    int s25 = CanInNumbers(Sensor25);
    delay(10);
    int s26 = CanInNumbers(Sensor26);
    delay(10);
    int s27 = CanInNumbers(Sensor27);
    delay(10);
    int s28 = CanInNumbers(Sensor28);
    delay(10);

    String sens1 = "";
    sens1 +=  s1;
    sens1 +=  " (";
    sens1 +=  Sensor1;
    sens1 += ")";
    root["id1"]=(ID_1);
    root["val1"]=sens1;
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

    //------- Shelf 2
    root["id15"]=(ID_15);
    root["val15"]=Sensor15;
    root["id16"]=(ID_16);
    root["val16"]=(Sensor16);
    root["id17"]=(ID_17);
    root["val17"]=(Sensor17);
    root["id18"]=(ID_18);
    root["val18"]=(Sensor18);
    root["id19"]=(ID_19);
    root["val19"]=(Sensor19);
    root["id20"]=(ID_20);
    root["val20"]=(Sensor20);
    root["id21"]=(ID_21);
    root["val21"]=(Sensor21);
    root["id22"]=(ID_22);
    root["val22"]=(Sensor22);
    root["id23"]=(ID_23);
    root["val23"]=(Sensor23);
    root["id24"]=(ID_24);
    root["val24"]=(Sensor24);
    root["id25"]=(ID_25);
    root["val25"]=(Sensor25);
    root["id26"]=(ID_26);
    root["val26"]=(Sensor26);
    root["id27"]=(ID_27);
    root["val27"]=(Sensor27);
   root["id28"]=(ID_28);
    root["val28"]=(Sensor28);

    root.printTo(send_to_node);
    send_to_node.println();
    delay(6000);
}
