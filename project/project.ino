#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <SPI.h>
#include <Wire.h>

Adafruit_SSD1306 oled = Adafruit_SSD1306(128, 32, &Wire);


void setup()
{
    Serial.begin(9600);


}
void loop()
{
    int sensorValue = analogRead(A0); 

if (sensorValue >=600 && sensorValue <=800){
Serial.println(sensorValue);
    
  }
  else {
Serial.println(sensorValue);
    
  }
delay(1000);


}