void sensor_1(uint8_t t)
{
   
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


void sensor_2(uint8_t t)
{
   
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

void sensor_3(uint8_t t)
{
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

void sensor_4(uint8_t t)
{
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
void sensor_5(uint8_t t)
{
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

void sensor_6(uint8_t t)
{
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
void sensor_7(uint8_t t)
{
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
void sensor_8(uint8_t t)
{
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

void sensor_9(uint8_t t)
{
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
void sensor_10(uint8_t t)
{
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
void sensor_11(uint8_t t)
{
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
void sensor_12(uint8_t t)
{
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
void sensor_13(uint8_t t)
{
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
void sensor_14(uint8_t t)
{
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
