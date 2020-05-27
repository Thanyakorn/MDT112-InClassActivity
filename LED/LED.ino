#define pinR 3
#define pinG 5
#define pinB 6
const int maxSvit = 100;

void setup() {
  pinMode(pinR, OUTPUT);
  pinMode(pinG, OUTPUT);
  pinMode(pinB, OUTPUT);
  
}

void loop() {
  for (int red = 0 ; red < maxSvit; red += maxSvit/5) {
    for (int green = 0 ; green < maxSvit; green += maxSvit/5) {
      for (int blue = 0 ; blue < maxSvit; blue += maxSvit/5) {
        
        nastavRGB(red, green, blue);
        
        delay(200);
      }
    }
  }
  
}
void test(int ledPin) {
  for (int intenzita = 0 ; intenzita <= maxSvit; intenzita += 5) {
    analogWrite(ledPin, intenzita);
    delay(30);
  }
  
  for (int intenzita = maxSvit ; intenzita >= 0; intenzita -= 5) {
    analogWrite(ledPin, intenzita);
    delay(30);
  }
}
void nastavRGB(int cervena, int zelena, int modra) {
  analogWrite(pinR, cervena);
  analogWrite(pinG, zelena);
  analogWrite(pinB, modra);
}