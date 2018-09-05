/***********************************************************************RACK number 1**********************************************************************************/

void sensor_1(uint8_t t)
{
   
Serial.println("Enter in function Sensor_1");
    selectMux1(0,0,0,0);// 0
    ResetRack1Sensor();
    sensor1.init(true);       // Initiallize sensor with address
    sensor1.setTimeout(set_Timeout);
    delay(100);
    sensor1.setAddress(t);  // I2c address of device
    delay(100);
    deselectMux1();
    Serial.println("Sensor_1 is Set !!!!!!!!!!!!!!!!!");
}


void sensor_2(uint8_t t)
{
   
Serial.println("Enter in function Sensor_2");
    selectMux1(0,0,0,1);  //1
    ResetRack1Sensor();
    sensor2.init(true);       // Initiallize sensor with address
    sensor2.setTimeout(set_Timeout);
    delay(100);
    sensor2.setAddress(t);  // I2c address of device
    delay(100);
    deselectMux1();
    Serial.println("Sensor_2 is Set !!!!!!!!!!!!!!!!!");
}

void sensor_3(uint8_t t)
{
Serial.println("Enter in function Sensor_3");
    selectMux1(0,0,1,0);  //2
    ResetRack1Sensor();
    sensor3.init(true);       // Initiallize sensor with address
    sensor3.setTimeout(set_Timeout);
    delay(100);
    sensor3.setAddress(t);  // I2c address of device
    delay(100);
    deselectMux1();
    Serial.println("Sensor_3 is Set !!!!!!!!!!!!!!!!!");
}

void sensor_4(uint8_t t)
{
Serial.println("Enter in function Sensor_4");
    selectMux1(0,0,1,1);  //3
    ResetRack1Sensor();
    sensor4.init(true);       // Initiallize sensor with address
    sensor4.setTimeout(set_Timeout);
    delay(100);
    sensor4.setAddress(t);  // I2c address of device
    delay(100);
    deselectMux1();
    Serial.println("Sensor_4 is Set !!!!!!!!!!!!!!!!!");
}
void sensor_5(uint8_t t)
{
Serial.println("Enter in function Sensor_5");
    selectMux1(0,1,0,0);  //4
    
    ResetRack1Sensor();
    sensor5.init(true);       // Initiallize sensor with address
    sensor5.setTimeout(set_Timeout);
    delay(100);
    sensor5.setAddress(t);  // I2c address of device
    delay(100);
    deselectMux1();
    Serial.println("Sensor_5 is Set !!!!!!!!!!!!!!!!!");
}

void sensor_6(uint8_t t)
{
Serial.println("Enter in function Sensor_6");
    selectMux1(0,1,0,1);  //5
    ResetRack1Sensor();
    sensor6.init(true);       // Initiallize sensor with address
    sensor6.setTimeout(set_Timeout);
    delay(100);
    sensor6.setAddress(t);  // I2c address of device
    delay(100);
    deselectMux1();
    Serial.println("Sensor_6 is Set !!!!!!!!!!!!!!!!!");
}
void sensor_7(uint8_t t)
{
Serial.println("Enter in function Sensor_7");
    selectMux1(0,1,1,0); // 6
    ResetRack1Sensor();
    sensor7.init(true);       // Initiallize sensor with address
    sensor7.setTimeout(set_Timeout);
    delay(100);
    sensor7.setAddress(t);  // I2c address of device
    delay(100);
    deselectMux1();
    Serial.println("Sensor_7 is Set !!!!!!!!!!!!!!!!!");
}
void sensor_8(uint8_t t)
{
Serial.println("Enter in function Sensor_8");
    selectMux1(0,1,1,1); // 7
    ResetRack1Sensor();
    sensor8.init(true);       // Initiallize sensor with address
    sensor8.setTimeout(set_Timeout);
    delay(100);
    sensor8.setAddress(t);  // I2c address of device
    delay(100);
    deselectMux1();
    Serial.println("Sensor_8 is Set !!!!!!!!!!!!!!!!!");
}

void sensor_9(uint8_t t)
{
Serial.println("Enter in function Sensor_9");
    selectMux1(1,0,0,0); // 8
    ResetRack1Sensor();
    sensor9.init(true);       // Initiallize sensor with address
    sensor9.setTimeout(set_Timeout);
    delay(100);
    sensor9.setAddress(t);  // I2c address of device
    delay(100);
    deselectMux1();
    Serial.println("Sensor_9 is Set !!!!!!!!!!!!!!!!!");
}
void sensor_10(uint8_t t)
{
Serial.println("Enter in function Sensor_10");
    selectMux1(1,0,0,1); // 9
    ResetRack1Sensor();
    sensor10.init(true);       // Initiallize sensor with address
    sensor10.setTimeout(set_Timeout);
    delay(100);
    sensor10.setAddress(t);  // I2c address of device
    delay(100);
    deselectMux1();
    Serial.println("Sensor_10 is Set !!!!!!!!!!!!!!!!!");
}
void sensor_11(uint8_t t)
{
Serial.println("Enter in function Sensor_11");
    selectMux1(1,0,1,0); // 10
    ResetRack1Sensor();
    sensor11.init(true);       // Initiallize sensor with address
    sensor11.setTimeout(set_Timeout);
    delay(100);
    sensor11.setAddress(t);  // I2c address of device
    delay(100);
    deselectMux1();
    Serial.println("Sensor_11 is Set !!!!!!!!!!!!!!!!!");
}
void sensor_12(uint8_t t)
{
Serial.println("Enter in function Sensor_12");
    selectMux1(1,0,1,1); // 11
    ResetRack1Sensor();
    sensor12.init(true);       // Initiallize sensor with address
    sensor12.setTimeout(set_Timeout);
    delay(100);
    sensor12.setAddress(t);  // I2c address of device
    delay(100);
    deselectMux1();
    Serial.println("Sensor_12 is Set !!!!!!!!!!!!!!!!!");
}
void sensor_13(uint8_t t)
{
Serial.println("Enter in function Sensor_13");
    selectMux1(1,1,0,0); // 12
    ResetRack1Sensor();
    sensor13.init(true);       // Initiallize sensor with address
    sensor13.setTimeout(set_Timeout);
    delay(100);
    sensor13.setAddress(t);  // I2c address of device
    delay(100);
    deselectMux1();
    Serial.println("Sensor_13 is Set !!!!!!!!!!!!!!!!!");
}
void sensor_14(uint8_t t)
{
Serial.println("Enter in function Sensor_14");
    selectMux1(1,1,0,1); // 13
    ResetRack1Sensor();
    sensor14.init(true);       // Initiallize sensor with address
    sensor14.setTimeout(set_Timeout);
    delay(100);
    sensor14.setAddress(t);  // I2c address of device
    delay(100);
    deselectMux1();
    Serial.println("Sensor_14 is Set !!!!!!!!!!!!!!!!!");
}
/**********************************************************************************************************************************************************************/
/***********************************************************************RACK number 2**********************************************************************************/

void sensor_15(uint8_t t)
{
   
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


void sensor_16(uint8_t t)
{
   
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

void sensor_17(uint8_t t)
{
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

void sensor_18(uint8_t t)
{
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
void sensor_19(uint8_t t)
{
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

void sensor_20(uint8_t t)
{
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
void sensor_21(uint8_t t)
{
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
void sensor_22(uint8_t t)
{
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

void sensor_23(uint8_t t)
{
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
void sensor_24(uint8_t t)
{
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
void sensor_25(uint8_t t)
{
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
void sensor_26(uint8_t t)
{
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
void sensor_27(uint8_t t)
{
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
void sensor_28(uint8_t t)
{
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
/**********************************************************************************************************************************************************************/
/***********************************************************************RACK number 3**********************************************************************************/
//void sensor_29(uint8_t t)
//{
//Serial.println("Enter in function Sensor_29");
//    selectMux3(0,0,0,0); // 0
//    ResetRack3Sensor();
//    sensor29.init(true);       // Initiallize sensor with address
//    sensor29.setTimeout(set_Timeout);
//    delay(100);
//    sensor29.setAddress(t);  // I2c address of device
//    delay(100);
//    deselectMux3();
//    Serial.println("Sensor_29 is Set !!!!!!!!!!!!!!!!!");
//}
//void sensor_30(uint8_t t)
//{
//Serial.println("Enter in function Sensor_30");
//    selectMux3(0,0,0,1); // 1
//    ResetRack3Sensor();
//    sensor30.init(true);       // Initiallize sensor with address
//    sensor30.setTimeout(set_Timeout);
//    delay(100);
//    sensor30.setAddress(t);  // I2c address of device
//    delay(100);
//    deselectMux3();
//    Serial.println("Sensor_30 is Set !!!!!!!!!!!!!!!!!");
//}
//void sensor_31(uint8_t t)
//{
//Serial.println("Enter in function Sensor_31");
//    selectMux3(0,0,1,0); // 2
//    ResetRack3Sensor();
//    sensor31.init(true);       // Initiallize sensor with address
//    sensor31.setTimeout(set_Timeout);
//    delay(100);
//    sensor31.setAddress(t);  // I2c address of device
//    delay(100);
//    deselectMux3();
//    Serial.println("Sensor_31 is Set !!!!!!!!!!!!!!!!!");
//}
//void sensor_32(uint8_t t)
//{
//Serial.println("Enter in function Sensor_32");
//    selectMux3(0,0,1,1); // 3
//    ResetRack3Sensor();
//    sensor32.init(true);       // Initiallize sensor with address
//    sensor32.setTimeout(set_Timeout);
//    delay(100);
//    sensor32.setAddress(t);  // I2c address of device
//    delay(100);
//    deselectMux3();
//    Serial.println("Sensor_32 is Set !!!!!!!!!!!!!!!!!");
//}
//void sensor_33(uint8_t t)
//{
//Serial.println("Enter in function Sensor_33");
//    selectMux3(0,1,0,0); // 4
//    ResetRack3Sensor();
//    sensor33.init(true);       // Initiallize sensor with address
//    sensor33.setTimeout(set_Timeout);
//    delay(100);
//    sensor33.setAddress(t);  // I2c address of device
//    delay(100);
//    deselectMux3();
//    Serial.println("Sensor_33 is Set !!!!!!!!!!!!!!!!!");
//}
//void sensor_34(uint8_t t)
//{
//Serial.println("Enter in function Sensor_34");
//    selectMux3(0,1,0,1);  //5
//    ResetRack3Sensor();
//    sensor34.init(true);       // Initiallize sensor with address
//    sensor34.setTimeout(set_Timeout);
//    delay(100);
//    sensor34.setAddress(t);  // I2c address of device
//    delay(100);
//    deselectMux3();
//    Serial.println("Sensor_34 is Set !!!!!!!!!!!!!!!!!");
//}
//void sensor_35(uint8_t t)
//{
//Serial.println("Enter in function Sensor_35");
//    selectMux3(0,1,1,0); // 6
//    ResetRack3Sensor();
//    sensor35.init(true);       // Initiallize sensor with address
//    sensor35.setTimeout(set_Timeout);
//    delay(100);
//    sensor35.setAddress(t);  // I2c address of device
//    delay(100);
//    deselectMux3();
//    Serial.println("Sensor_35 is Set !!!!!!!!!!!!!!!!!");
//}
//void sensor_36(uint8_t t)
//{
//Serial.println("Enter in function Sensor_36");
//    selectMux3(0,1,1,1); // 7
//    ResetRack3Sensor();
//    sensor36.init(true);       // Initiallize sensor with address
//    sensor36.setTimeout(set_Timeout);
//    delay(100);
//    sensor36.setAddress(t);  // I2c address of device
//    delay(100);
//    deselectMux3();
//    Serial.println("Sensor_36 is Set !!!!!!!!!!!!!!!!!");
//}
//
//void sensor_37(uint8_t t)
//{
//Serial.println("Enter in function Sensor_37");
//    selectMux3(1,0,0,0); // 8
//    ResetRack3Sensor();
//    sensor37.init(true);       // Initiallize sensor with address
//    sensor37.setTimeout(set_Timeout);
//    delay(100);
//    sensor37.setAddress(t);  // I2c address of device
//    delay(100);
//    deselectMux3();
//    Serial.println("Sensor_37 is Set !!!!!!!!!!!!!!!!!");
//}
//void sensor_38(uint8_t t)
//{
//Serial.println("Enter in function Sensor_38");
//    selectMux3(1,0,0,1); // 9
//    ResetRack3Sensor();
//    sensor38.init(true);       // Initiallize sensor with address
//    sensor38.setTimeout(set_Timeout);
//    delay(100);
//    sensor38.setAddress(t);  // I2c address of device
//    delay(100);
//    deselectMux3();
//    Serial.println("Sensor_38 is Set !!!!!!!!!!!!!!!!!");
//}
//void sensor_39(uint8_t t)
//{
//Serial.println("Enter in function Sensor_39");
//    selectMux3(1,0,1,0); // 10
//    ResetRack3Sensor();
//    sensor39.init(true);       // Initiallize sensor with address
//    sensor39.setTimeout(set_Timeout);
//    delay(100);
//    sensor39.setAddress(t);  // I2c address of device
//    delay(100);
//    deselectMux3();
//    Serial.println("Sensor_39 is Set !!!!!!!!!!!!!!!!!");
//}
//void sensor_40(uint8_t t)
//{
//Serial.println("Enter in function Sensor_40");
//    selectMux3(1,0,1,1); // 11
//    ResetRack3Sensor();
//    sensor40.init(true);       // Initiallize sensor with address
//    sensor40.setTimeout(set_Timeout);
//    delay(100);
//    sensor40.setAddress(t);  // I2c address of device
//    delay(100);
//    deselectMux3();
//    Serial.println("Sensor_40 is Set !!!!!!!!!!!!!!!!!");
//}
//void sensor_41(uint8_t t)
//{
//Serial.println("Enter in function Sensor_41");
//    selectMux3(1,1,0,0); // 12
//    ResetRack3Sensor();
//    sensor41.init(true);       // Initiallize sensor with address
//    sensor41.setTimeout(set_Timeout);
//    delay(100);
//    sensor41.setAddress(t);  // I2c address of device
//    delay(100);
//    deselectMux3();
//    Serial.println("Sensor_41 is Set !!!!!!!!!!!!!!!!!");
//}
//void sensor_42(uint8_t t)
//{
//Serial.println("Enter in function Sensor_42");
//    selectMux3(1,1,0,1); // 13
//    ResetRack3Sensor();
//    sensor42.init(true);       // Initiallize sensor with address
//    sensor42.setTimeout(set_Timeout);
//    delay(100);
//    sensor42.setAddress(t);  // I2c address of device
//    delay(100);
//    deselectMux3();
//    Serial.println("Sensor_42 is Set !!!!!!!!!!!!!!!!!");
//}
///**********************************************************************************************************************************************************************/
///***********************************************************************RACK number 4**********************************************************************************/
//void sensor_43(uint8_t t)
//{
//Serial.println("Enter in function Sensor_43");
//    selectMux4(0,0,0,0); // 0
//    ResetRack4Sensor();
//    sensor43.init(true);       // Initiallize sensor with address
//    sensor43.setTimeout(set_Timeout);
//    delay(100);
//    sensor43.setAddress(t);  // I2c address of device
//    delay(100);
//    deselectMux4();
//    Serial.println("Sensor_43 is Set !!!!!!!!!!!!!!!!!");
//}
//void sensor_44(uint8_t t)
//{
//Serial.println("Enter in function Sensor_44");
//    selectMux4(0,0,0,1); // 1
//    ResetRack4Sensor();
//    sensor44.init(true);       // Initiallize sensor with address
//    sensor44.setTimeout(set_Timeout);
//    delay(100);
//    sensor44.setAddress(t);  // I2c address of device
//    delay(100);
//    deselectMux4();
//    Serial.println("Sensor_44 is Set !!!!!!!!!!!!!!!!!");
//}
//void sensor_45(uint8_t t)
//{
//Serial.println("Enter in function Sensor_45");
//    selectMux4(0,0,1,0); // 2
//    ResetRack4Sensor();
//    sensor45.init(true);       // Initiallize sensor with address
//    sensor45.setTimeout(set_Timeout);
//    delay(100);
//    sensor45.setAddress(t);  // I2c address of device
//    delay(100);
//    deselectMux4();
//    Serial.println("Sensor_45 is Set !!!!!!!!!!!!!!!!!");
//}
//void sensor_46(uint8_t t)
//{
//Serial.println("Enter in function Sensor_46");
//    selectMux4(0,0,1,1); // 3
//    ResetRack4Sensor();
//    sensor46.init(true);       // Initiallize sensor with address
//    sensor46.setTimeout(set_Timeout);
//    delay(100);
//    sensor46.setAddress(t);  // I2c address of device
//    delay(100);
//    deselectMux4();
//    Serial.println("Sensor_46 is Set !!!!!!!!!!!!!!!!!");
//}
//void sensor_47(uint8_t t)
//{
//Serial.println("Enter in function Sensor_47");
//    selectMux4(0,1,0,0); // 4
//    ResetRack4Sensor();
//    sensor47.init(true);       // Initiallize sensor with address
//    sensor47.setTimeout(set_Timeout);
//    delay(100);
//    sensor47.setAddress(t);  // I2c address of device
//    delay(100);
//    deselectMux4();
//    Serial.println("Sensor_47 is Set !!!!!!!!!!!!!!!!!");
//}
//void sensor_48(uint8_t t)
//{
//Serial.println("Enter in function Sensor_48");
//    selectMux4(0,1,0,1);  //5
//    ResetRack4Sensor();
//    sensor48.init(true);       // Initiallize sensor with address
//    sensor48.setTimeout(set_Timeout);
//    delay(100);
//    sensor48.setAddress(t);  // I2c address of device
//    delay(100);
//    deselectMux4();
//    Serial.println("Sensor_48 is Set !!!!!!!!!!!!!!!!!");
//}
//void sensor_49(uint8_t t)
//{
//Serial.println("Enter in function Sensor_49");
//    selectMux4(0,1,1,0); // 6
//    ResetRack4Sensor();
//    sensor49.init(true);       // Initiallize sensor with address
//    sensor49.setTimeout(set_Timeout);
//    delay(100);
//    sensor49.setAddress(t);  // I2c address of device
//    delay(100);
//    deselectMux4();
//    Serial.println("Sensor_49 is Set !!!!!!!!!!!!!!!!!");
//}
//void sensor_50(uint8_t t)
//{
//Serial.println("Enter in function Sensor_50");
//    selectMux4(0,1,1,1); // 7
//    ResetRack4Sensor();
//    sensor50.init(true);       // Initiallize sensor with address
//    sensor50.setTimeout(set_Timeout);
//    delay(100);
//    sensor50.setAddress(t);  // I2c address of device
//    delay(100);
//    deselectMux4();
//    Serial.println("Sensor_50 is Set !!!!!!!!!!!!!!!!!");
//}
//
//void sensor_51(uint8_t t)
//{
//Serial.println("Enter in function Sensor_51");
//    selectMux4(1,0,0,0); // 8
//    ResetRack4Sensor();
//    sensor51.init(true);       // Initiallize sensor with address
//    sensor51.setTimeout(set_Timeout);
//    delay(100);
//    sensor51.setAddress(t);  // I2c address of device
//    delay(100);
//    deselectMux4();
//    Serial.println("Sensor_51 is Set !!!!!!!!!!!!!!!!!");
//}
//void sensor_52(uint8_t t)
//{
//Serial.println("Enter in function Sensor_52");
//    selectMux4(1,0,0,1); // 9
//    ResetRack4Sensor();
//    sensor52.init(true);       // Initiallize sensor with address
//    sensor52.setTimeout(set_Timeout);
//    delay(100);
//    sensor52.setAddress(t);  // I2c address of device
//    delay(100);
//    deselectMux4();
//    Serial.println("Sensor_52 is Set !!!!!!!!!!!!!!!!!");
//}
//void sensor_53(uint8_t t)
//{
//Serial.println("Enter in function Sensor_53");
//    selectMux4(1,0,1,0); // 10
//    ResetRack4Sensor();
//    sensor53.init(true);       // Initiallize sensor with address
//    sensor53.setTimeout(set_Timeout);
//    delay(100);
//    sensor53.setAddress(t);  // I2c address of device
//    delay(100);
//    deselectMux4();
//    Serial.println("Sensor_53 is Set !!!!!!!!!!!!!!!!!");
//}
//void sensor_54(uint8_t t)
//{
//Serial.println("Enter in function Sensor_54");
//    selectMux4(1,0,1,1); // 11
//    ResetRack4Sensor();
//    sensor54.init(true);       // Initiallize sensor with address
//    sensor54.setTimeout(set_Timeout);
//    delay(100);
//    sensor54.setAddress(t);  // I2c address of device
//    delay(100);
//    deselectMux4();
//    Serial.println("Sensor_54 is Set !!!!!!!!!!!!!!!!!");
//}
//void sensor_55(uint8_t t)
//{
//Serial.println("Enter in function Sensor_55");
//    selectMux4(1,1,0,0); // 12
//    ResetRack4Sensor();
//    sensor55.init(true);       // Initiallize sensor with address
//    sensor55.setTimeout(set_Timeout);
//    delay(100);
//    sensor55.setAddress(t);  // I2c address of device
//    delay(100);
//    deselectMux4();
//    Serial.println("Sensor_55 is Set !!!!!!!!!!!!!!!!!");
//}
//void sensor_56(uint8_t t)
//{
//Serial.println("Enter in function Sensor_56");
//    selectMux4(1,1,0,1); // 13
//    ResetRack4Sensor();
//    sensor56.init(true);       // Initiallize sensor with address
//    sensor56.setTimeout(set_Timeout);
//    delay(100);
//    sensor56.setAddress(t);  // I2c address of device
//    delay(100);
//    deselectMux4();
//    Serial.println("Sensor_57 is Set !!!!!!!!!!!!!!!!!");
//}
///**********************************************************************************************************************************************************************/
///***********************************************************************RACK number 5**********************************************************************************/
//void sensor_57(uint8_t t)
//{
//Serial.println("Enter in function Sensor_57");
//    selectMux5(0,0,0,0); // 0
//    ResetRack5Sensor();
//    sensor57.init(true);       // Initiallize sensor with address
//    sensor57.setTimeout(set_Timeout);
//    delay(100);
//    sensor57.setAddress(t);  // I2c address of device
//    delay(100);
//    deselectMux5();
//    Serial.println("Sensor_57 is Set !!!!!!!!!!!!!!!!!");
//}
//void sensor_58(uint8_t t)
//{
//Serial.println("Enter in function Sensor_58");
//    selectMux5(0,0,0,1); // 1
//    ResetRack5Sensor();
//    sensor58.init(true);       // Initiallize sensor with address
//    sensor58.setTimeout(set_Timeout);
//    delay(100);
//    sensor58.setAddress(t);  // I2c address of device
//    delay(100);
//    deselectMux5();
//    Serial.println("Sensor_58 is Set !!!!!!!!!!!!!!!!!");
//}
//void sensor_59(uint8_t t)
//{
//Serial.println("Enter in function Sensor_59");
//    selectMux5(0,0,1,0); // 2
//    ResetRack5Sensor();
//    sensor59.init(true);       // Initiallize sensor with address
//    sensor59.setTimeout(set_Timeout);
//    delay(100);
//    sensor59.setAddress(t);  // I2c address of device
//    delay(100);
//    deselectMux5();
//    Serial.println("Sensor_59 is Set !!!!!!!!!!!!!!!!!");
//}
//void sensor_60(uint8_t t)
//{
//Serial.println("Enter in function Sensor_60");
//    selectMux5(0,0,1,1); // 3
//    ResetRack5Sensor();
//    sensor60.init(true);       // Initiallize sensor with address
//    sensor60.setTimeout(set_Timeout);
//    delay(100);
//    sensor60.setAddress(t);  // I2c address of device
//    delay(100);
//    deselectMux5();
//    Serial.println("Sensor_60 is Set !!!!!!!!!!!!!!!!!");
//}
//void sensor_61(uint8_t t)
//{
//Serial.println("Enter in function Sensor_61");
//    selectMux5(0,1,0,0); // 4
//    ResetRack5Sensor();
//    sensor61.init(true);       // Initiallize sensor with address
//    sensor61.setTimeout(set_Timeout);
//    delay(100);
//    sensor61.setAddress(t);  // I2c address of device
//    delay(100);
//    deselectMux5();
//    Serial.println("Sensor_61 is Set !!!!!!!!!!!!!!!!!");
//}
//void sensor_62(uint8_t t)
//{
//Serial.println("Enter in function Sensor_62");
//    selectMux5(0,1,0,1);  //5
//    ResetRack5Sensor();
//    sensor62.init(true);       // Initiallize sensor with address
//    sensor62.setTimeout(set_Timeout);
//    delay(100);
//    sensor62.setAddress(t);  // I2c address of device
//    delay(100);
//    deselectMux5();
//    Serial.println("Sensor_62 is Set !!!!!!!!!!!!!!!!!");
//}
//void sensor_63(uint8_t t)
//{
//Serial.println("Enter in function Sensor_63");
//    selectMux5(0,1,1,0); // 6
//    ResetRack5Sensor();
//    sensor63.init(true);       // Initiallize sensor with address
//    sensor63.setTimeout(set_Timeout);
//    delay(100);
//    sensor63.setAddress(t);  // I2c address of device
//    delay(100);
//    deselectMux5();
//    Serial.println("Sensor_63 is Set !!!!!!!!!!!!!!!!!");
//}
//void sensor_64(uint8_t t)
//{
//Serial.println("Enter in function Sensor_64");
//    selectMux5(0,1,1,1); // 7
//    ResetRack5Sensor();
//    sensor64.init(true);       // Initiallize sensor with address
//    sensor64.setTimeout(set_Timeout);
//    delay(100);
//    sensor64.setAddress(t);  // I2c address of device
//    delay(100);
//    deselectMux5();
//    Serial.println("Sensor_64 is Set !!!!!!!!!!!!!!!!!");
//}
//
//void sensor_65(uint8_t t)
//{
//Serial.println("Enter in function Sensor_65");
//    selectMux5(1,0,0,0); // 8
//    ResetRack5Sensor();
//    sensor65.init(true);       // Initiallize sensor with address
//    sensor65.setTimeout(set_Timeout);
//    delay(100);
//    sensor65.setAddress(t);  // I2c address of device
//    delay(100);
//    deselectMux5();
//    Serial.println("Sensor_65 is Set !!!!!!!!!!!!!!!!!");
//}
//void sensor_66(uint8_t t)
//{
//Serial.println("Enter in function Sensor_66");
//    selectMux5(1,0,0,1); // 9
//    ResetRack5Sensor();
//    sensor66.init(true);       // Initiallize sensor with address
//    sensor66.setTimeout(set_Timeout);
//    delay(100);
//    sensor66.setAddress(t);  // I2c address of device
//    delay(100);
//    deselectMux5();
//    Serial.println("Sensor_66 is Set !!!!!!!!!!!!!!!!!");
//}
//void sensor_67(uint8_t t)
//{
//Serial.println("Enter in function Sensor_67");
//    selectMux5(1,0,1,0); // 10
//    ResetRack5Sensor();
//    sensor67.init(true);       // Initiallize sensor with address
//    sensor67.setTimeout(set_Timeout);
//    delay(100);
//    sensor67.setAddress(t);  // I2c address of device
//    delay(100);
//    deselectMux5();
//    Serial.println("Sensor_67 is Set !!!!!!!!!!!!!!!!!");
//}
//void sensor_68(uint8_t t)
//{
//Serial.println("Enter in function Sensor_68");
//    selectMux5(1,0,1,1); // 11
//    ResetRack5Sensor();
//    sensor68.init(true);       // Initiallize sensor with address
//    sensor68.setTimeout(set_Timeout);
//    delay(100);
//    sensor68.setAddress(t);  // I2c address of device
//    delay(100);
//    deselectMux5();
//    Serial.println("Sensor_68 is Set !!!!!!!!!!!!!!!!!");
//}
//void sensor_69(uint8_t t)
//{
//Serial.println("Enter in function Sensor_69");
//    selectMux5(1,1,0,0); // 12
//    ResetRack5Sensor();
//    sensor69.init(true);       // Initiallize sensor with address
//    sensor69.setTimeout(set_Timeout);
//    delay(100);
//    sensor69.setAddress(t);  // I2c address of device
//    delay(100);
//    deselectMux5();
//    Serial.println("Sensor_69 is Set !!!!!!!!!!!!!!!!!");
//}
//void sensor_70(uint8_t t)
//{
//Serial.println("Enter in function Sensor_70");
//    selectMux5(1,1,0,1); // 13
//    ResetRack5Sensor();
//    sensor70.init(true);       // Initiallize sensor with address
//    sensor70.setTimeout(set_Timeout);
//    delay(100);
//    sensor70.setAddress(t);  // I2c address of device
//    delay(100);
//    deselectMux5();
//    Serial.println("Sensor_70 is Set !!!!!!!!!!!!!!!!!");
//}
///**********************************************************************************************************************************************************************/
///***********************************************************************RACK number 6**********************************************************************************/
//void sensor_71(uint8_t t)
//{
//Serial.println("Enter in function Sensor_71");
//    selectMux6(0,0,0,0); // 0
//    ResetRack6Sensor();
//    sensor71.init(true);       // Initiallize sensor with address
//    sensor71.setTimeout(set_Timeout);
//    delay(100);
//    sensor71.setAddress(t);  // I2c address of device
//    delay(100);
//    deselectMux6();
//    Serial.println("Sensor_71 is Set !!!!!!!!!!!!!!!!!");
//}
//void sensor_72(uint8_t t)
//{
//Serial.println("Enter in function Sensor_72");
//    selectMux6(0,0,0,1); // 1
//    ResetRack6Sensor();
//    sensor72.init(true);       // Initiallize sensor with address
//    sensor72.setTimeout(set_Timeout);
//    delay(100);
//    sensor72.setAddress(t);  // I2c address of device
//    delay(100);
//    deselectMux6();
//    Serial.println("Sensor_72 is Set !!!!!!!!!!!!!!!!!");
//}
//void sensor_73(uint8_t t)
//{
//Serial.println("Enter in function Sensor_73");
//    selectMux6(0,0,1,0); // 2
//    ResetRack6Sensor();
//    sensor73.init(true);       // Initiallize sensor with address
//    sensor73.setTimeout(set_Timeout);
//    delay(100);
//    sensor73.setAddress(t);  // I2c address of device
//    delay(100);
//    deselectMux6();
//    Serial.println("Sensor_73 is Set !!!!!!!!!!!!!!!!!");
//}
//void sensor_74(uint8_t t)
//{
//Serial.println("Enter in function Sensor_74");
//    selectMux6(0,0,1,1); // 3
//    ResetRack6Sensor();
//    sensor74.init(true);       // Initiallize sensor with address
//    sensor74.setTimeout(set_Timeout);
//    delay(100);
//    sensor74.setAddress(t);  // I2c address of device
//    delay(100);
//    deselectMux6();
//    Serial.println("Sensor_74 is Set !!!!!!!!!!!!!!!!!");
//}
//void sensor_75(uint8_t t)
//{
//Serial.println("Enter in function Sensor_75");
//    selectMux6(0,1,0,0); // 4
//    ResetRack6Sensor();
//    sensor75.init(true);       // Initiallize sensor with address
//    sensor75.setTimeout(set_Timeout);
//    delay(100);
//    sensor75.setAddress(t);  // I2c address of device
//    delay(100);
//    deselectMux6();
//    Serial.println("Sensor_75 is Set !!!!!!!!!!!!!!!!!");
//}
//void sensor_76(uint8_t t)
//{
//Serial.println("Enter in function Sensor_76");
//    selectMux6(0,1,0,1);  //5
//    ResetRack6Sensor();
//    sensor76.init(true);       // Initiallize sensor with address
//    sensor76.setTimeout(set_Timeout);
//    delay(100);
//    sensor76.setAddress(t);  // I2c address of device
//    delay(100);
//    deselectMux6();
//    Serial.println("Sensor_76 is Set !!!!!!!!!!!!!!!!!");
//}
//void sensor_77(uint8_t t)
//{
//Serial.println("Enter in function Sensor_77");
//    selectMux6(0,1,1,0); // 6
//    ResetRack6Sensor();
//    sensor77.init(true);       // Initiallize sensor with address
//    sensor77.setTimeout(set_Timeout);
//    delay(100);
//    sensor77.setAddress(t);  // I2c address of device
//    delay(100);
//    deselectMux6();
//    Serial.println("Sensor_77 is Set !!!!!!!!!!!!!!!!!");
//}
//void sensor_78(uint8_t t)
//{
//Serial.println("Enter in function Sensor_78");
//    selectMux6(0,1,1,1); // 7
//    ResetRack6Sensor();
//    sensor78.init(true);       // Initiallize sensor with address
//    sensor78.setTimeout(set_Timeout);
//    delay(100);
//    sensor78.setAddress(t);  // I2c address of device
//    delay(100);
//    deselectMux6();
//    Serial.println("Sensor_78 is Set !!!!!!!!!!!!!!!!!");
//}
//
//void sensor_79(uint8_t t)
//{
//Serial.println("Enter in function Sensor_79");
//    selectMux6(1,0,0,0); // 8
//    ResetRack6Sensor();
//    sensor79.init(true);       // Initiallize sensor with address
//    sensor79.setTimeout(set_Timeout);
//    delay(100);
//    sensor79.setAddress(t);  // I2c address of device
//    delay(100);
//    deselectMux6();
//    Serial.println("Sensor_79 is Set !!!!!!!!!!!!!!!!!");
//}
//void sensor_80(uint8_t t)
//{
//Serial.println("Enter in function Sensor_80");
//    selectMux6(1,0,0,1); // 9
//    ResetRack6Sensor();
//    sensor80.init(true);       // Initiallize sensor with address
//    sensor80.setTimeout(set_Timeout);
//    delay(100);
//    sensor80.setAddress(t);  // I2c address of device
//    delay(100);
//    deselectMux6();
//    Serial.println("Sensor_80 is Set !!!!!!!!!!!!!!!!!");
//}
//void sensor_81(uint8_t t)
//{
//Serial.println("Enter in function Sensor_81");
//    selectMux6(1,0,1,0); // 10
//    ResetRack6Sensor();
//    sensor81.init(true);       // Initiallize sensor with address
//    sensor81.setTimeout(set_Timeout);
//    delay(100);
//    sensor81.setAddress(t);  // I2c address of device
//    delay(100);
//    deselectMux6();
//    Serial.println("Sensor_81 is Set !!!!!!!!!!!!!!!!!");
//}
//void sensor_82(uint8_t t)
//{
//Serial.println("Enter in function Sensor_82");
//    selectMux6(1,0,1,1); // 11
//    ResetRack6Sensor();
//    sensor82.init(true);       // Initiallize sensor with address
//    sensor82.setTimeout(set_Timeout);
//    delay(100);
//    sensor82.setAddress(t);  // I2c address of device
//    delay(100);
//    deselectMux6();
//    Serial.println("Sensor_82 is Set !!!!!!!!!!!!!!!!!");
//}
//void sensor_83(uint8_t t)
//{
//Serial.println("Enter in function Sensor_83");
//    selectMux6(1,1,0,0); // 12
//    ResetRack6Sensor();
//    sensor83.init(true);       // Initiallize sensor with address
//    sensor83.setTimeout(set_Timeout);
//    delay(100);
//    sensor83.setAddress(t);  // I2c address of device
//    delay(100);
//    deselectMux6();
//    Serial.println("Sensor_83 is Set !!!!!!!!!!!!!!!!!");
//}
//void sensor_84(uint8_t t)
//{
//Serial.println("Enter in function Sensor_84");
//    selectMux6(1,1,0,1); // 13
//    ResetRack6Sensor();
//    sensor84.init(true);       // Initiallize sensor with address
//    sensor84.setTimeout(set_Timeout);
//    delay(100);
//    sensor84.setAddress(t);  // I2c address of device
//    delay(100);
//    deselectMux6();
//    Serial.println("Sensor_84 is Set !!!!!!!!!!!!!!!!!");
//}
