/*
  Author: Vladimir G 25/09/24
  Learning Intention:
  The students will learn to use the I2C communication protocol to send and receive
  data with 2IC sensors and actuators

  Success Criteria:
    1.  I understand that I2C is a communication protocol
    2.  I understand that each I2C needs it's own I2C Channel
    3.  I understand that communicating to I2C modules is similar to the serial monitor
    4.  I understand I need to include the `wire-h` library
    5.  I understand that I need to look at the documentation and example code for each I2C module
    6.  I can sucessfully send data to the I2C OLED display
    7.  I can successfully receive data from either Temperature & Humidity Sensor, Air pressure Sensor or Acceleration Sensor in the sensor kit.

  Student Notes:
    
  Documentation: 
    https://www.arduino.cc/reference/en/language/functions/communication/wire/


  Examples:
    OLED: https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/blob/main/TempeHS_Sensor_Catalogue/Sensor%20Kit/0.96_OLED_Display/0.96_OLED_Display.ino
    3 Axis: Acceleromter: https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/blob/main/TempeHS_Sensor_Catalogue/Sensor%20Kit/3_Axis_Accel_Sensor/3_Axis_Accel_Sensor.ino
    Temperature & Humidity: https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/blob/main/TempeHS_Sensor_Catalogue/Sensor%20Kit/Temp_and_Humid_Sensor/Temp_and_Humid_Sensor.ino
    Air Pressure Sensor: https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/blob/main/TempeHS_Sensor_Catalogue/Sensor%20Kit/Air_Pressure_Sensor/Air_Pressure_Sensor.ino
*/

#include "Arduino_SensorKit.h"

// Uncomment line below if your SensorKit is the variant with the DHT20 sensor
// (It's marked IIC on the PCB and has a black cover, while the DHT11 sensor
// has a blue cover.)
//#define Environment Environment_I2C

void setup() {
  // Uncomment line below if your kit has a DHT11 and you're connecting it to 
  // a pin different than 3
  //Environment.setPin(4);

  Serial.begin(9600);
  Environment.begin();
}

void loop() {
  Serial.print("Temperature = ");
  Serial.print(Environment.readTemperature()); //print temperature
  Serial.println(" C");
  Serial.print("Humidity = ");
  Serial.print(Environment.readHumidity()); //print humidity
  Serial.println(" %");
  delay(2000);
}



/*

#include "Arduino_SensorKit.h"

void setup() {
  Oled.begin();
  Oled.setFlipMode(true);
}

void loop() {
  int random_value = random(0, 1023);   // create a random value

  Oled.setFont(u8x8_font_chroma48medium8_r); 
  Oled.setCursor(0, 3);
  Oled.print("Value: ");
  Oled.print(random_value);
  delay(1000);
}


//


#include "Arduino_SensorKit.h"

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  while(!Serial);
  
  Accelerometer.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  // 3 axis
  Serial.print("x:"); 
  Serial.print(Accelerometer.readX()); 
  Serial.print("  ");
  Serial.print("y:"); 
  Serial.print(Accelerometer.readY());        
  Serial.print("  ");
  Serial.print("z:"); 
  Serial.println(Accelerometer.readZ());
 
  delay(500);
}


//


#include "Arduino_SensorKit.h"
 
unsigned int x = 60;
unsigned int y = 35;
 
void setup()
{
  Oled.begin();
  Oled.setFlipMode(true);
  Serial.begin(9600);
  Accelerometer.begin();
}
 
void loop()
{
 while (!gameOver())
 {
    Oled.setFont(u8x8_font_chroma48medium8_r);   // choose a suitable font
    Oled.setCursor(x, y);
    Oled.print("O");    // write something to the internal memory
    delay(100);
   
 
 }
  Serial.print("x:");
  Serial.print(Accelerometer.readX());
  Serial.print("  ");
  Serial.print("y:");
  Serial.print(Accelerometer.readY());        
  Serial.print("  ");
  Serial.print("z:");
  Serial.println(Accelerometer.readZ());
 
  delay(500);
<<<<<<< HEAD
  }
}

*/
=======
 
}
>>>>>>> 48bea349a850d10d57a1139046ddd3da48215953
