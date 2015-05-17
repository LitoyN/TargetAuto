

/**
  Code adapted from Jaycon Systems tutorial code and comment from
  forum user, Amit Sommer.
  http://www.jayconsystems.com/tutorial/s7sd/
  5/14/2015
**/
int pinArray[8] = {2,3,4,5,6,7,8,9};

int onDur = 500;
int waitDur = 250;

int incomingVal = 1;

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
byte dec = 8;

void setup() {
  
  Serial.begin(9600);
  
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
    delay(waitDur);
    if(incomingVal == -1){
      numPrint(dec);
    }
    if(incomingVal == 0){
      numPrint(num0);
    }
    if(incomingVal == 1){
      numPrint(num1);
    }
    if(incomingVal == 2){
      numPrint(num2);
    }
  }
}
