#include <Servo.h>
Servo M1, M2;

int Button = 8;
int Mode = 0;
int pos = 0;

void setup() {
Serial.begin(9600);
pinMode(Button, INPUT_PULLUP);
M1.attach(9); //2 fingers
M2.attach(10); //3 fingers
  }

void loop() {
  int state = 0;
  state = digitalRead(Button);
  
if (state==LOW){
  Mode = Mode + 1;
  delay(100);
  Serial.println(Mode);
  }

 if(Mode == 0){
    M1.write(0);
    delay(200);
    M2.write(0);
    delay(100);
  }
  
  if(Mode == 1){
    M1.write(180);
    delay(200);
    M2.write(180);
    delay(100);
  }
  
    if(Mode == 2){
    M1.write(0);
    delay(200);
    M2.write(180);
    delay(100);
  }
  
  if(Mode==3){
    Mode=0;} 
  }