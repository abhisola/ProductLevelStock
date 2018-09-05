/* This example shows how to use continuous mode to take
range measurements with the VL53L0X. It is based on
vl53l0x_ContinuousRanging_Example.c from the VL53L0X API.

The range readings are in units of mm. */

#include <Wire.h>
#include <VL53L0X.h>
#include "selectlines.h"

int set_Timeout = 500;

VL53L0X sensor1,sensor2,sensor3,sensor4,sensor5,sensor6,sensor7,sensor8,sensor9,sensor10,sensor11,sensor12,sensor13,sensor14;          //RACK 1
VL53L0X sensor15,sensor16,sensor17,sensor18,sensor19,sensor20,sensor21,sensor22,sensor23,sensor24,sensor25,sensor26,sensor27,sensor28; //RACK 2
//VL53L0X sensor29,sensor30,sensor31,sensor32,sensor33,sensor34,sensor35,sensor36,sensor37,sensor38,sensor39,sensor40,sensor41,sensor42; //RACK 3
//VL53L0X sensor43,sensor44,sensor45,sensor46,sensor47,sensor48,sensor49,sensor50,sensor51,sensor52,sensor53,sensor54,sensor55,sensor56; //RACK 4
//VL53L0X sensor57,sensor58,sensor59,sensor60,sensor61,sensor62,sensor63,sensor64,sensor65,sensor66,sensor67,sensor68,sensor69,sensor70; //RACK 5
//VL53L0X sensor71,sensor72,sensor73,sensor74,sensor75,sensor76,sensor77,sensor78,sensor79,sensor80,sensor81,sensor82,sensor83,sensor84; //RACK 6

void setup()
{
  
  delay(1000);
  
  connector_1_set();
    connector_2_set();
//      connector_3_set();
//        connector_4_set();
//          connector_5_set();
//           connector_6_set();

 
  Serial.begin(19200);
  
  Wire.begin();

   Serial.println("All Pins Set");

    Rack_1_SensorAddress();
     Rack_2_SensorAddress();
//      Rack_3_SensorAddress();
//       Rack_4_SensorAddress();
//        Rack_5_SensorAddress();
//         Rack_6_SensorAddress();     

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

  Rack_1_Status();
  Rack_2_Status();
//  Rack_3_Status();
//  Rack_4_Status();
//  Rack_5_Status();
//  Rack_6_Status();
}

void loop()
{
//  int x;
 // x = 1;   
//switch(x)
//{
//  case 1: displayShell_1();
//  break;
//  case 2: displayShell_2();
//  break;
//  case 3: displayShell_3();
//  break;
//  case 4: displayShell_4();
//  break;
//  case 5: displayShell_5();
//  break;
//  case 6: displayShell_6();
//  break;
//}
displayShell_1();
displayShell_2();

Serial.println();
Serial.println("**********************************************************************************************************************************************");
Serial.println();
delay(1000);
}
