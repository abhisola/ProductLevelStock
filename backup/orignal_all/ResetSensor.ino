
 
 void ResetRack1Sensor()
    {
      digitalWrite(DATAZ1,HIGH);   // Make XSHUT = HIGH
      delay(150);
  
    // Make XSHUT = LOW for 150ms
      digitalWrite(DATAZ1, LOW);
      delay(150);
      digitalWrite(DATAZ1,HIGH);     // Make XSHUT = HIGH
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
//    void ResetRack3Sensor()
//    {
//      digitalWrite(DATAZ3,HIGH);   // Make XSHUT = HIGH
//      delay(150);
//  
//    // Make XSHUT = LOW for 150ms
//      digitalWrite(DATAZ3, LOW);
//      delay(150);
//      digitalWrite(DATAZ3,HIGH);     // Make XSHUT = HIGH
//      delay(500);
//    }
//     void ResetRack4Sensor()
//    {
//      digitalWrite(DATAZ4,HIGH);   // Make XSHUT = HIGH
//      delay(150);
//  
//    // Make XSHUT = LOW for 150ms
//      digitalWrite(DATAZ4, LOW);
//      delay(150);
//      digitalWrite(DATAZ4,HIGH);     // Make XSHUT = HIGH
//      delay(500);
//    }
//     void ResetRack5Sensor()
//    {
//      digitalWrite(DATAZ5,HIGH);   // Make XSHUT = HIGH
//      delay(150);
//  
//    // Make XSHUT = LOW for 150ms
//      digitalWrite(DATAZ5, LOW);
//      delay(150);
//      digitalWrite(DATAZ5,HIGH);     // Make XSHUT = HIGH
//      delay(500);
//    }
//     void ResetRack6Sensor()
//    {
//      digitalWrite(DATAZ6,HIGH);   // Make XSHUT = HIGH
//      delay(150);
//  
//    // Make XSHUT = LOW for 150ms
//      digitalWrite(DATAZ6, LOW);
//      delay(150);
//      digitalWrite(DATAZ6,HIGH);     // Make XSHUT = HIGH
//      delay(500);
//    }
