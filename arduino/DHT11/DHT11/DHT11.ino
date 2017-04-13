#include <dht.h>
#define dataPin 8 // Digital input
dht DHT; // Creats a DHT object
void setup() {
  Serial.begin(115200); // Initializes serial monitor
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
  Serial.println("TOO HOT!");
   Serial.print(t);
     Serial.print(" Celsius degrees");
 }
  if (h>30) {
  Serial.println("TOO WET!");
   Serial.print(h);
     Serial.print("%");
 }
  delay(5000); // 1 sec delay. DHT has frequency of 1Hz, which is 1 second. 
}
