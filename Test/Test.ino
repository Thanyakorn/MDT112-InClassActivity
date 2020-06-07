#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <SPI.h>
#include <Wire.h>

Adafruit_SSD1306 oled = Adafruit_SSD1306(128, 32, &Wire);

void setup(void) {
    Serial.begin(9600);
  oled.begin();
  oled.begin();
}

void loop(void) {
  float current_mA = 0;

  oled.clearBuffer();					// clear the internal menory
  	// choose a suitable font
  oled.setCursor (0, 32);
  
  oled.print(current_mA);
  oled.sendBuffer();					// transfer internal memory to the display
  delay(200);
}