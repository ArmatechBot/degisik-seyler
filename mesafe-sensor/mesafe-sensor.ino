#include <NewPing.h>

#define TRIGGER_PIN 9
#define ECHO_PIN 10
#define MAX_DISTANCE 400  
#define buzzer 7
#define led 8

NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);
float duration, distance;
void setup() 
{
  pinMode(7, OUTPUT);
  Serial.begin(9600);
}
void loop() 
{
  distance = sonar.ping_cm();
  
  Serial.print("Mesafeeee = ");
  
  if (distance >= 400) 
  {
    Serial.println("Error!!");
  }

  else {
    Serial.print(distance);
    Serial.println(" cm");
  }
  delay(200);

  
  if(distance <= 20 ){
    digitalWrite(buzzer, HIGH);
    digitalWrite(led, HIGH);
  }
  else{
    digitalWrite(buzzer, LOW);
    digitalWrite(led, LOW);
  }

  
}