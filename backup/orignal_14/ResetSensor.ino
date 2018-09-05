
 
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
