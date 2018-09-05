void displayShell_1()
{
  Serial.println("**************************************************** RACK NUMBER 1 ****************************************************************");
Serial.println();
if(sensor1.readRangeContinuousMillimeters()<60000)
{Serial.print("Sensor_1 = ");Serial.print(sensor1.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");}
if(sensor2.readRangeContinuousMillimeters()<60000)
{Serial.print("Sensor_2 = ");Serial.print(sensor2.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");}
if(sensor3.readRangeContinuousMillimeters()<60000)
{Serial.print("Sensor_3 = ");Serial.print(sensor3.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");}
if(sensor4.readRangeContinuousMillimeters()<60000)
{Serial.print("Sensor_4 = ");Serial.print(sensor4.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");}
if(sensor5.readRangeContinuousMillimeters()<60000)
{Serial.print("Sensor_5 = ");Serial.print(sensor5.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");}
if(sensor6.readRangeContinuousMillimeters()<60000)
{Serial.print("Sensor_6 = ");Serial.print(sensor6.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");}
if(sensor7.readRangeContinuousMillimeters()<60000)
{Serial.print("Sensor_7 = ");Serial.print(sensor7.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");Serial.println();}
if(sensor8.readRangeContinuousMillimeters()<60000)
{Serial.print("Sensor_8 = ");Serial.print(sensor8.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");}
if(sensor9.readRangeContinuousMillimeters()<60000)
{Serial.print("Sensor_9 = ");Serial.print(sensor9.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");}
if(sensor10.readRangeContinuousMillimeters()<60000)
{Serial.print("Sensor_10= ");Serial.print(sensor10.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");}
if(sensor11.readRangeContinuousMillimeters()<60000)
{Serial.print("Sensor_11= ");Serial.print(sensor11.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");}
if(sensor12.readRangeContinuousMillimeters()<60000)
{Serial.print("Sensor_12= ");Serial.print(sensor12.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");}
if(sensor13.readRangeContinuousMillimeters()<60000)
{Serial.print("Sensor_13= ");Serial.print(sensor13.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");}
if(sensor14.readRangeContinuousMillimeters()<60000)
{Serial.print("Sensor_14= ");Serial.print(sensor14.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");}
}

void displayShell_2()
{
Serial.println();
Serial.println("**************************************************** RACK NUMBER 2 *********************************************************************");
Serial.println();

Serial.print("Sensor_15= ");Serial.print(sensor15.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");
Serial.print("Sensor_16= ");Serial.print(sensor16.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");
Serial.print("Sensor_17= ");Serial.print(sensor17.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");
Serial.print("Sensor_18= ");Serial.print(sensor18.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");
Serial.print("Sensor_19= ");Serial.print(sensor19.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");
Serial.print("Sensor_20= ");Serial.print(sensor20.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");
Serial.print("Sensor_21= ");Serial.print(sensor21.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");
Serial.println();
Serial.print("Sensor_22= ");Serial.print(sensor22.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");
Serial.print("Sensor_23= ");Serial.print(sensor23.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");
Serial.print("Sensor_24= ");Serial.print(sensor24.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");
Serial.print("Sensor_25= ");Serial.print(sensor25.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");
Serial.print("Sensor_26= ");Serial.print(sensor26.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");
Serial.print("Sensor_27= ");Serial.print(sensor27.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");
Serial.print("Sensor_28= ");Serial.print(sensor28.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");
}
//void displayShell_3()
//{
//Serial.println();
//Serial.println("**************************************************** RACK NUMBER 3 **********************************************************************");
//Serial.println();
//
//
//Serial.print("Sensor_29= ");Serial.print(sensor29.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");
//Serial.print("Sensor_30= ");Serial.print(sensor30.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");
//Serial.print("Sensor_31= ");Serial.print(sensor31.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");
//Serial.print("Sensor_32= ");Serial.print(sensor32.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");
//Serial.print("Sensor_33= ");Serial.print(sensor33.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");
//Serial.print("Sensor_34= ");Serial.print(sensor34.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");
//Serial.print("Sensor_35= ");Serial.print(sensor35.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");
//Serial.println();
//Serial.print("Sensor_36= ");Serial.print(sensor36.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");
//Serial.print("Sensor_37= ");Serial.print(sensor37.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");
//Serial.print("Sensor_38= ");Serial.print(sensor38.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");
//Serial.print("Sensor_39= ");Serial.print(sensor39.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");
//Serial.print("Sensor_40= ");Serial.print(sensor40.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");
//Serial.print("Sensor_41= ");Serial.print(sensor41.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");
//Serial.print("Sensor_42= ");Serial.print(sensor42.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");
//}
//void displayShell_4()
//{
//Serial.println();
//Serial.println("**************************************************** RACK NUMBER 4 ***********************************************************************");
//Serial.println();
//
//Serial.print("Sensor_43= ");Serial.print(sensor43.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");
//Serial.print("Sensor_44= ");Serial.print(sensor44.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");
//Serial.print("Sensor_45= ");Serial.print(sensor45.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");
//Serial.print("Sensor_46= ");Serial.print(sensor46.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");
//Serial.print("Sensor_47= ");Serial.print(sensor47.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");
//Serial.print("Sensor_48= ");Serial.print(sensor48.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");
//Serial.print("Sensor_49= ");Serial.print(sensor49.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");
//Serial.println();
//Serial.print("Sensor_50= ");Serial.print(sensor50.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");
//Serial.print("Sensor_51= ");Serial.print(sensor51.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");
//Serial.print("Sensor_52= ");Serial.print(sensor52.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");
//Serial.print("Sensor_53= ");Serial.print(sensor53.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");
//Serial.print("Sensor_54= ");Serial.print(sensor54.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");
//Serial.print("Sensor_55= ");Serial.print(sensor55.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");
//Serial.print("Sensor_56= ");Serial.print(sensor56.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");
//}
//void displayShell_5()
//{
//Serial.println();
//Serial.println("**************************************************** RACK NUMBER 5 ************************************************************************");
//Serial.println();
//
//Serial.print("Sensor_57= ");Serial.print(sensor57.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");
//Serial.print("Sensor_58= ");Serial.print(sensor58.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");
//Serial.print("Sensor_59= ");Serial.print(sensor59.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");
//Serial.print("Sensor_60= ");Serial.print(sensor60.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");
//Serial.print("Sensor_61= ");Serial.print(sensor61.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");
//Serial.print("Sensor_62= ");Serial.print(sensor62.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");
//Serial.print("Sensor_63= ");Serial.print(sensor63.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");
//Serial.println();
//Serial.print("Sensor_64= ");Serial.print(sensor64.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");
//Serial.print("Sensor_65= ");Serial.print(sensor65.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");
//Serial.print("Sensor_66= ");Serial.print(sensor66.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");
//Serial.print("Sensor_67= ");Serial.print(sensor67.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");
//Serial.print("Sensor_68= ");Serial.print(sensor68.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");
//Serial.print("Sensor_69= ");Serial.print(sensor69.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");
//Serial.print("Sensor_70= ");Serial.print(sensor70.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");
//}
//void displayShell_6()
//{
//Serial.println();
//Serial.println("**************************************************** RACK NUMBER 6 *************************************************************************");
//Serial.println();
//
//Serial.print("Sensor_71= ");Serial.print(sensor71.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");
//Serial.print("Sensor_72= ");Serial.print(sensor72.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");
//Serial.print("Sensor_73= ");Serial.print(sensor73.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");
//Serial.print("Sensor_74= ");Serial.print(sensor74.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");
//Serial.print("Sensor_75= ");Serial.print(sensor75.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");
//Serial.print("Sensor_76= ");Serial.print(sensor76.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");
//Serial.print("Sensor_77= ");Serial.print(sensor77.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");
//Serial.println();
//Serial.print("Sensor_78= ");Serial.print(sensor78.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");
//Serial.print("Sensor_79= ");Serial.print(sensor79.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");
//Serial.print("Sensor_80= ");Serial.print(sensor80.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");
//Serial.print("Sensor_81= ");Serial.print(sensor81.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");
//Serial.print("Sensor_82= ");Serial.print(sensor82.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");
//Serial.print("Sensor_83= ");Serial.print(sensor83.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");
//Serial.print("Sensor_84= ");Serial.print(sensor84.readRangeContinuousMillimeters());Serial.print("mm");Serial.print("||");
//Serial.println();
//Serial.println();
//}
