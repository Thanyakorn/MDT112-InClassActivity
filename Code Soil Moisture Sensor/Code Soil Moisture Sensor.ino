void setup() {
// initialize serial communication at 9600 bits per second:

Serial.begin(9600);
pinMode(13,OUTPUT);
}


void loop() {
// read the input on analog pin 0:
int sensorValue = analogRead(A0); 

if (sensorValue >=600 && sensorValue <=800){
Serial.println(sensorValue);


    
  }
  else {
Serial.println(sensorValue);


    
  }

}
