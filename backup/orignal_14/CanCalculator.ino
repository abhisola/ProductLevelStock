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
    Serial.print("OutSide Loop Number of Cans are ");Serial.print(" = "); Serial.print(cans);Serial.println();
return(cans);
}

