

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
