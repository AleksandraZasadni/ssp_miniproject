#include <Servo.h>
#define trigPin 13
#define echoPin 11
Servo myservo;
void setup(){
Serial.begin (115200);
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
myservo.attach(2);
}
void loop(){
long duration, distance;
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
distance = (duration/2) / 29.1;
if (distance < 30)
{
myservo.write(0);
delay(5000);
Serial.print(distance);
Serial.println("cm");
}
if (distance > 30){
myservo.write(120);
Serial.println("The distance is more than 30");
}
delay(500);
}
