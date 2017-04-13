
#define sensor A0
void setup() {
  Serial.begin(115200);
}

void loop() 
{
  
  float volts = analogRead(sensor)*0.0048828125;  // value from sensor * (5/1024)
  int distance = 13*pow(volts, -1); // worked out from datasheet graph
  delay(1000); // slow down serial port 
  Serial.println(distance);   // print the distance
  
}
