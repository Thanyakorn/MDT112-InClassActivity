#include "DHT.h"
#define DHTPIN 2
#define DHTTYPE DHT11


DHT dht(DHTPIN, DHTTYPE);

void setup() {
   Serial.begin(9600); 
   Serial.println("DHTxx test!");
   dht.begin();
}
void loop() {
   
   float t = dht.readTemperature();
   
   Serial.print("Temperature: "); 
   Serial.print(t);
   Serial.print(" *C ");
   
   delay(2000);

}