#define trigPin 13
#define echoPin 12

void setup() {
  Serial.begin (115200);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
   long duration, distance;
  digitalWrite(trigPin, LOW);  // Added this line
  delayMicroseconds(2); // Added this line
  digitalWrite(trigPin, HIGH);
//  delayMicroseconds(1000); - Removed this line
  delayMicroseconds(10); // Added this line
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;
  
  if (distance <= 20 || distance <= 0){
    
    Serial.println("It is below 20");
    Serial.print(distance);
    Serial.println(" cm");
  }
  else {
    Serial.print(distance);
    Serial.println(" cm");
  }
  delay(2000);
}
