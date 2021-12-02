String readString("");
#define motorA1 5
#define motorA2 6
#define motorB1 9
#define motorB2 10


void setup() {
  Serial.begin(9600);
  pinMode(motorA1,OUTPUT);
  pinMode(motorA2,OUTPUT);
  pinMode(motorB1,OUTPUT);
  pinMode(motorB2,OUTPUT);
  
}

void loop() {
  while(Serial.available()){
    char c = (char)Serial.read();
    readString += c;
  }

if(readString.length() > 0){
     
  if(readString == "F"){
    analogWrite(motorA1,255);
    analogWrite(motorB1,255);
    analogWrite(motorA2,0);
    analogWrite(motorB2,0);
  }
   if(readString == "B"){
    analogWrite(motorA2,255);
    analogWrite(motorB2,255);
    analogWrite(motorA1,0);
    analogWrite(motorB1,0);
  }
  if(readString == "R"){
    analogWrite(motorA2,255);
    analogWrite(motorB2,0);
    analogWrite(motorA1,0);
    analogWrite(motorB1,255);
  }
  if(readString == "L"){
    analogWrite(motorA2,0);
    analogWrite(motorB2,255);
    analogWrite(motorA1,255);
    analogWrite(motorB1,0);
  }
  if(readString == "G"){
    analogWrite(motorA2,0);
    analogWrite(motorB2,0);
    analogWrite(motorA1,255);
    analogWrite(motorB1,100);
  }
  
  if(readString == "I"){
    analogWrite(motorA2,0);
    analogWrite(motorB2,0);
    analogWrite(motorA1,100);
    analogWrite(motorB1,255);
  }

  if(readString == "H"){
    analogWrite(motorA2,255);
    analogWrite(motorB2,100);
    analogWrite(motorA1,0);
    analogWrite(motorB1,0);
  }

  if(readString == "J"){
    analogWrite(motorA2,100);
    analogWrite(motorB2,255);
    analogWrite(motorA1,0);
    analogWrite(motorB1,0);
  }
}
  else{
    analogWrite(motorA2,0);
    analogWrite(motorB2,0);
    analogWrite(motorA1,0);
    analogWrite(motorB1,0);
  }
}
