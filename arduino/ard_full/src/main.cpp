#include <Servo.h>
#include <dht.h>
#include <string.h>
#include "Arduino.h"

#define fullPin A0
#define dhtPin 8
#define led 9
#define servEcho 11
#define servTrig 13

Servo lidservo;
dht DHT;

void setup(){
  pinMode(led, OUTPUT);
  pinMode(servTrig, OUTPUT);
  pinMode(servEcho, INPUT);
  Serial.begin(115200);
  lidservo.attach(2);
}

void led_meth(int brightness){
  analogWrite(led, brightness);
//   Serial.print("Brightf: ");
//   Serial.print(brightness);
//   Serial.print(";");
}

void lid_open(int distanceOpen){
  long duration, distance;
  // distanceOpen = 20;
  duration = pulseIn(servEcho, HIGH);
  distance = (duration/2) / 29.1;

  digitalWrite(servTrig, LOW);
  delayMicroseconds(2);
  digitalWrite(servTrig, HIGH);
  delayMicroseconds(10);
  digitalWrite(servTrig, LOW);

  if (distance < distanceOpen){
      lidservo.write(0); //0
      // delay(2500);
    }

  if (distance > distanceOpen){
      lidservo.write(120); //120
    }

  Serial.print("d");
  Serial.print("_");
  Serial.print(distance);
  Serial.print(",");
  // delay(1000);
  Serial.print("dO");
  Serial.print("_");
  Serial.print(distanceOpen);
  Serial.print(",");
  delay(1000);
}

void fullness(){
  float volts = analogRead(fullPin)*0.0048828125;
  float distance = 13*pow(volts, -1);

  Serial.print("f");
  Serial.print("_");
  Serial.print(distance);
  Serial.print(",");
  // delay(1000);
}

void dht_meth() {
  DHT.read11(dhtPin);

  Serial.print("t");
  Serial.print("_");
  Serial.print(DHT.temperature);
  Serial.print(",");
  Serial.print("h");
  Serial.print("_");
  Serial.print(DHT.humidity);
  Serial.print(",");

  // delay(1000);
}

void sensors(){
  fullness();
  dht_meth();
}

void loop(){
  char serialSpecifier = Serial.read();
  int serialValue = Serial.parseInt();

  Serial.print(serialValue);

  if (serialSpecifier == 's'){
    sensors();
   }
   else if (serialSpecifier == 'l'){
     led_meth(serialValue);
   }
   else if(serialSpecifier == 'p'){
     lid_open(serialValue);
     Serial.print("Andreeeeej!");
   }
}
