#include <Servo.h>

const int buttonPin=8;
const int ledPin=5;
const int tempPin=A0;
const int servoPin=2;

Servo myservo1;
int celsius=0;
int buttonState=0;


void setup()
{
  pinMode (buttonPin, INPUT);
  pinMode (ledPin, OUTPUT);
  pinMode (tempPin, INPUT);
  myservo1.attach(servoPin);
  
  Serial.begin(9600);

}

void loop()
{
  buttonState = digitalRead(buttonPin);
  
  
  if (buttonState == HIGH) {
	celsius=map(((analogRead(tempPin)-20)*3.04),0,1023,-40,125);
    Serial.print(celsius);
    delay(100);
    if (celsius<30){
      myservo1.write(90);
      digitalWrite(ledPin,HIGH);
      delay(15);
    
  	} else {
      myservo1.write(0);
      digitalWrite(ledPin,LOW);
      delay(15);
		}
    
    
  } else {
    		myservo1.write(0);
    	digitalWrite(ledPin,LOW);
    	Serial.println("PLEASE PRESS BUTTON");
  }
}