
 void selectMux1(int D, int C, int B , int A)
    {
      digitalWrite(ENABLE1,0);
      digitalWrite(selectLine1_0 ,A);
      digitalWrite(selectLine1_1 ,B);
      digitalWrite(selectLine1_2 ,C);
      digitalWrite(selectLine1_3 ,D);
      delay(500);

    }
    void selectMux2(int D, int C, int B , int A)
    {
      digitalWrite(ENABLE2,0);
      digitalWrite(selectLine2_0 ,A);
      digitalWrite(selectLine2_1 ,B);
      digitalWrite(selectLine2_2 ,C);
      digitalWrite(selectLine2_3 ,D);
      delay(500);

    }
//    void selectMux3(int D, int C, int B , int A)
//    {
//      digitalWrite(ENABLE3,0);
//      digitalWrite(selectLine3_0 ,A);
//      digitalWrite(selectLine3_1 ,B);
//      digitalWrite(selectLine3_2 ,C);
//      digitalWrite(selectLine3_3 ,D);
//      delay(500);
//
//    }
//    void selectMux4(int D, int C, int B , int A)
//    {
//      digitalWrite(ENABLE4,0);
//      digitalWrite(selectLine4_0 ,A);
//      digitalWrite(selectLine4_1 ,B);
//      digitalWrite(selectLine4_2 ,C);
//      digitalWrite(selectLine4_3 ,D);
//      delay(500);
//
//    }
//    void selectMux5(int D, int C, int B , int A)
//    {
//      digitalWrite(ENABLE5,0);
//      digitalWrite(selectLine5_0 ,A);
//      digitalWrite(selectLine5_1 ,B);
//      digitalWrite(selectLine5_2 ,C);
//      digitalWrite(selectLine5_3 ,D);
//      delay(500);
//
//    }
//    void selectMux6(int D, int C, int B , int A)
//    {
//      digitalWrite(ENABLE6,0);
//      digitalWrite(selectLine6_0 ,A);
//      digitalWrite(selectLine6_1 ,B);
//      digitalWrite(selectLine6_2 ,C);
//      digitalWrite(selectLine6_3 ,D);
//      delay(500);
//
//    }
    
  void deselectMux1()
    {
          //Serial.println("Enter deselect");
      digitalWrite(ENABLE1,1);
    }
    void deselectMux2()
    {
          //Serial.println("Enter deselect");
      digitalWrite(ENABLE2,1);
    }
//    void deselectMux3()
//    {
//          //Serial.println("Enter deselect");
//      digitalWrite(ENABLE3,1);
//    }
//    void deselectMux4()
//    {
//          //Serial.println("Enter deselect");
//      digitalWrite(ENABLE4,1);
//    }
//    void deselectMux5()
//    {
//          //Serial.println("Enter deselect");
//      digitalWrite(ENABLE5,1);
//    }
//    void deselectMux6()
//    {
//          //Serial.println("Enter deselect");
//      digitalWrite(ENABLE6,1);
//    }
