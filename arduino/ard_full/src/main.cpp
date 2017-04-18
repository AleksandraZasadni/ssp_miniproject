#include <Servo.h>
#include "Arduino.h"
#include "../lib/dht.h"

#define fullPin A0
#define dhtPin 8
#define led 9
#define servEcho 11
#define servTrig 13

Servo lidservo;

void setup(){
  pinMode(led, OUTPUT);
  pinMode(servTrig, OUTPUT);
  pinMode(servEcho, INPUT);
  analogWrite(led, 255);
  Serial.begin(115200);
  lidservo.attach(2);
}

void writeCommand(int brightness){
  analogWrite(led, 255 - brightness);
  Serial.print("Brightf: ");
  Serial.print(brightness);
  Serial.println(";");
}

void led_meth(){
  if (Serial.available()){
    int led_brightness = Serial.parseInt();
    writeCommand(led_brightness);
    Serial.print("Brights: ");
    Serial.print(led_brightness);
    Serial.println("|");
  }
}

void lid_open(){
  long duration, distance;
  digitalWrite(servTrig, LOW);
  delayMicroseconds(2);
  digitalWrite(servTrig, HIGH);
  delayMicroseconds(10);
  digitalWrite(servTrig, LOW);
  duration = pulseIn(servEcho, HIGH);
  distance = (duration/2) / 29.1;

  if (distance < 20){
      lidservo.write(0);
      // delay(2500);
    }

  if (distance > 20){
      lidservo.write(120);
    }
  Serial.print("Dist: ");
  Serial.print(distance);
  Serial.println(",");
  delay(1000);
}

void fullness(){
  float volts = analogRead(fullPin)*0.0048828125;  // same as below?
  int distance = 13*pow(volts, -1); // que pasa?
  Serial.print("Full: ");
  Serial.print(distance);
  Serial.println(".");
  delay(1000);
}

dht DHT;
void dht_meth() {
  DHT.read11(dhtPin);

  Serial.print("Temp: ");
  Serial.print(DHT.temperature);
  Serial.print(" ");
  Serial.print("Humid: ");
  Serial.print(DHT.humidity);
  Serial.println("_");
  delay(1000);
}

void loop(){
  led_meth();
  lid_open();
  fullness();
  // dht not done
  dht_meth();
}
