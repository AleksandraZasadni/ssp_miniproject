#include <dht.h>
#define dataPin 8 // Digital input
dht DHT; // Creats a DHT object
#include <Servo.h>
Servo myservo1;
int pos = 0;
void setup() {
  Serial.begin(115200); // Initializes serial monitor
  myservo1.attach(2);  // attaches the servo on pin 2 to the servo object

}

void loop() {
  int DataRead = DHT.read11(dataPin); // read11() is a function for data read from the DHT11.
  float t = DHT.temperature; // Stores temperature value in variable "t"
  float h = DHT.humidity; // Stores temperature value in variable "h"

  Serial.print("Current trashcan temperature is ");
  Serial.print(t);
  Serial.print(" Celsius degrees ");
  Serial.print('\n');
  Serial.print("Current trashcan humidity is ");
  Serial.print(h);
  Serial.println("%");
  
 if (t>27) {
 for (pos = 0; pos <= 180; pos += 10) { // goes from 0 degrees to 180 degree in steps of 1 degree
 myservo1.write(pos);              // tell servo to go to position in variable 'pos'
 delay(100);                       // waits 15ms for the servo to reach the position
 }

  delay(5000);
  
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo1.write(pos);              // tell servo to go to position in variable 'pos'
    delay(100);                       // waits 15ms for the servo to reach the position
  }
 // }
  delay(5000); // 1 sec delay. DHT has frequency of 1Hz, which is 1 second. 
}
