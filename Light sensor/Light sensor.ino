int inPin = 2;         
int state = LOW;      
int reading;           
int previous = HIGH;    

long time = 0;         
long debounce = 200;   

void setup()
{
  pinMode(inPin, INPUT_PULLUP);
}

void loop()
{
  reading = digitalRead(inPin);

  
  if (reading == HIGH && previous == LOW && millis() - time > debounce) {
    if (state == HIGH)
      state = LOW;
    else
      state = HIGH;

    time = millis();    
  }

  previous = reading;
}