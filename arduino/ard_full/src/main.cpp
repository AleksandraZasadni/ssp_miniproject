#include <Servo.h>
#include <dht.h>
#include <string.h>
#include "Arduino.h"
#include <ST_HW_HC_SR04.h>

#define fullPin A0
#define dhtPin 8
#define led 9
#define servEcho 11
#define servTrig 13

char locked = 0;
char open = 0;
unsigned long closeTime = 0;
Servo lidservo;
dht DHT;
ST_HW_HC_SR04 ultrasonicSensor(servTrig, servEcho);
double currentFullness = 0;


unsigned long last = 0;

void setup(){
  pinMode(led, OUTPUT);
  pinMode(servTrig, OUTPUT);
  pinMode(servEcho, INPUT);
  ultrasonicSensor.setTimeout(50000);
  Serial.begin(115200);
  lidservo.attach(2);
}

void led_meth(int brightness){
  if (brightness == 255) {
    locked = 1;
  }
  else {
    locked = 0;
  }
  analogWrite(led, brightness);
//   Serial.print("Brightf: ");
//   Serial.print(brightness);
//   Serial.print(";");
}

void lid_open(int distanceOpen){
  if(!(millis() > last + 1000)) return;
  last = millis();
  int hitTime = ultrasonicSensor.getHitTime();
  int distance = hitTime / 58;
  distance = (distance == 0)? 400 : distance;

  if (distance < distanceOpen && !locked){
      lidservo.write(0); //0
      open = 1;
    } else {
      lidservo.write(120); //120
      if(open) {
        closeTime = millis();
        open = 0;
      }
    }
}

void fullness(){
  if(!open && millis() > closeTime + 1500) {
    double volts = analogRead(fullPin)*0.0048828125;
    double distance = 13*pow(volts, -1);
    distance = (distance > 26)? 26 : distance;
    distance = map(distance, 26, 0, 0, 100);
    currentFullness = distance;
  }
  Serial.print(currentFullness);
  Serial.print(",");
}

void dht_meth() {
  DHT.read11(dhtPin);
  Serial.print(DHT.temperature);
  Serial.print(",");
  Serial.print(DHT.humidity);
  Serial.println();
}

void sensors(){
  fullness();
  dht_meth();
}

void loop(){
  char serialSpecifier = Serial.read();
  //Serial.print(serialValue);

  if (serialSpecifier == 's'){
    sensors();
   }
   else if (serialSpecifier == 'l'){
     int serialValue = Serial.parseInt();
     led_meth(serialValue);
   }
    lid_open(20);
}
