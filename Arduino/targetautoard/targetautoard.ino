/**
  Code adapted from Jaycon Systems tutorial code and comment from
  forum user, Amit Sommer.
  http://www.jayconsystems.com/tutorial/s7sd/
  5/14/2015
**/
int pinArray[8] = {2,3,4,5,6,7,8,9};

int onDur = 500;
int offDur = 250;

byte num0 = 231;
byte num1 = 132;
byte num2 = 211;
byte num3 = 214;
byte num4 = 180;
byte num5 = 118;
byte num6 = 119;
byte num7 = 196;
byte num8 = 247;
byte num9 = 244;

void setup() {
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
  
  numPrint(num0);
  delay(onDur);
  numPrint(num1);
  delay(onDur);
  numPrint(num2);
  delay(onDur);
  numPrint(num3);
  delay(onDur);
  numPrint(num4);
  delay(onDur);
  numPrint(num5);
  delay(onDur);
  numPrint(num6);
  delay(onDur);
  numPrint(num7);
  delay(onDur);
  numPrint(num8);
  delay(onDur);
  numPrint(num9);
  delay(onDur);
  numClear();
  delay(offDur);
  
  /**for(int i = 0; i < 8; i++){
    digitalWrite(pinArray[i], HIGH);
    delay(onDur);
    digitalWrite(pinArray[i], LOW);
    delay(offDur);
  }**/
  
}
