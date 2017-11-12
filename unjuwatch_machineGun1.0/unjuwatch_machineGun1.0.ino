#include <IRremote.h>

#define LaserPin 13
#define BT 4
#define SpkPin 8

IRsend irsend;

void setup() {
  // put your setup code here, to run once:
  pinMode(LaserPin, OUTPUT);
  pinMode(BT, INPUT_PULLUP);
  pinMode(SpkPin, OUTPUT);
}
int bullit=5;
void loop() {
  // put your main code here, to run repeatedly:
  bool BTST = digitalRead(BT);
  if (BTST == LOW) {
    if(bullit>0){
      
     irsend.sendNEC(0xAAAAAAAA, 32); // AAAAAAAA <-총기분류코드 HEX값으로 32비트구성
 //  irsend.sendNEC(10101010101010101010101010101010, 32);
    delay(50);
    
    bullit--;
    }
    else{
      digitalWrite(SpkPin,HIGH);
      delay(10000);//재장전
      digitalWrite(SpkPin,LOW);
      bullit=150;
    }
  }
}
