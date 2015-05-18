#include <Servo.h>

/**
  Code adapted from Jaycon Systems tutorial code and comment from
  forum user, Amit Sommer.
  http://www.jayconsystems.com/tutorial/s7sd/
  5/14/2015
**/
int pinArray[8] = {2,3,4,5,6,7,8,9};
int servo1Pin = 11;
int servo2Pin = 12;

Servo servo1;
Servo servo2;

int onDur = 1500;
int incomingVal = 1;
int servo1Pos;
int servo2Pos;

byte numVals[10] = {231, 132, 211, 214, 180, 118, 119, 196, 247, 244};
byte dec = 8;


void setup() {
  
  Serial.begin(9600);
  
  servo1.attach(servo1Pin);
  servo2.attach(servo2Pin);
  delay(500);
  
  servo1.write(0);
  servo2.write(0);
  delay(2000);
  servo1.write(155);
  servo2.write(155);
  
  for(int i = 0; i < 8 ; i++){
    pinMode(pinArray[i], OUTPUT);
  }

}

void numPrint(byte num){
 
 for(int i = 7; i >= 0; i--){
   digitalWrite(pinArray[i], bitRead(num, i));
 }
  
}

void numClear(){
  for(byte i = 0; i < 8; i++){
    digitalWrite(pinArray[i], LOW);
  }
}

void loop() {
  
  if(Serial){
    incomingVal = Serial.read();
    if(incomingVal == -1){
      numPrint(dec);
      servo1.write(0);
      servo2.write(0);
    }
    else{
      if(incomingVal % 2 == 0){
        servo1Pos = incomingVal * 12;
        servo2Pos = 0;
      }
      else{
        servo1Pos = 0;
        servo2Pos = incomingVal * 12;
      }
      numPrint(numVals[incomingVal]);
      servo1.write(servo1Pos);
      servo2.write(servo2Pos);
    }
    
    delay(onDur);
  }
}
