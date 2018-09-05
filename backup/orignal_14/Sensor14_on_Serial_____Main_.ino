/* This example shows how to use continuous mode to take
range measurements with the VL53L0X. It is based on
vl53l0x_ContinuousRanging_Example.c from the VL53L0X API.

The range readings are in units of mm. */
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

void loop()
{
   
  Serial.print("Sensor_1 = ");Serial.print(sensor1.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");
  send_to_node.write("S1");send_to_node.write(sensor1.readRangeContinuousMillimeters());
  Serial.print("Sensor_2 = ");Serial.print(sensor2.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");
  send_to_node.write("S2");send_to_node.write(sensor2.readRangeContinuousMillimeters());
  Serial.print("Sensor_3 = ");Serial.print(sensor3.readRangeContinuousMillimeters());Serial.print("mm");Serial.println();
  send_to_node.write("S3");send_to_node.write(sensor3.readRangeContinuousMillimeters());
  Serial.print("Sensor_4 = ");Serial.print(sensor4.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");
  send_to_node.write("S4");send_to_node.write(sensor4.readRangeContinuousMillimeters());
  Serial.print("Sensor_5 = ");Serial.print(sensor5.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");
  send_to_node.write("S5");send_to_node.write(sensor5.readRangeContinuousMillimeters());
  Serial.print("Sensor_6 = ");Serial.print(sensor6.readRangeContinuousMillimeters());Serial.print("mm");Serial.println();
  send_to_node.write("S6");send_to_node.write(sensor6.readRangeContinuousMillimeters());
  Serial.print("Sensor_7 = ");Serial.print(sensor7.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");
  send_to_node.write("S7");send_to_node.write(sensor7.readRangeContinuousMillimeters());
  Serial.print("Sensor_8 = ");Serial.print(sensor8.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");
  send_to_node.write("S8");send_to_node.write(sensor8.readRangeContinuousMillimeters());
  Serial.print("Sensor_9 = ");Serial.print(sensor9.readRangeContinuousMillimeters());Serial.print("mm");Serial.println();
  send_to_node.write("S9");send_to_node.write(sensor9.readRangeContinuousMillimeters());
  Serial.print("Sensor_10 = ");Serial.print(sensor10.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");
  send_to_node.write("S10");send_to_node.write(sensor10.readRangeContinuousMillimeters());
  Serial.print("Sensor_11 = ");Serial.print(sensor11.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");
  send_to_node.write("S11");send_to_node.write(sensor11.readRangeContinuousMillimeters());
  Serial.print("Sensor_12 = ");Serial.print(sensor12.readRangeContinuousMillimeters());Serial.print("mm");Serial.println();
  send_to_node.write("S12");send_to_node.write(sensor12.readRangeContinuousMillimeters());
  Serial.print("Sensor_13 = ");Serial.print(sensor13.readRangeContinuousMillimeters());Serial.print("mm");Serial.println();
  send_to_node.write("S13");send_to_node.write(sensor13.readRangeContinuousMillimeters());
  Serial.print("Sensor_14 = ");Serial.print(sensor14.readRangeContinuousMillimeters());Serial.print("mm");Serial.println();
  send_to_node.write("S14");send_to_node.write(sensor14.readRangeContinuousMillimeters());
  
  
//  unsigned int Sensor1 = sensor1.readRangeContinuousMillimeters();  // Sensor 1
//  unsigned int Sensor2 = sensor2.readRangeContinuousMillimeters();  // Sensor 2
//  unsigned int Sensor3 = sensor3.readRangeContinuousMillimeters();  // Sensor 3
//
//  CanInNumbers(Sensor1);
//  delay(10);
//  CanInNumbers(Sensor2);
//  delay(10);
//  CanInNumbers(Sensor2);
//  delay(10);

//  client.add(VARIABLE_LABEL_1, Sensor1);
//  client.add(VARIABLE_LABEL_2, Sensor2);
//  client.add(VARIABLE_LABEL_3, Sensor3);
//  client.sendAll();

  Serial.println();
  Serial.println();

  delay(5000);
}
