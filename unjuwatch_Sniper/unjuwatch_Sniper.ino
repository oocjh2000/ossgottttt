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
      
     irsend.sendNEC(0xDE2E3D36, 32); // DE2E3D36 <-총기분류코드 HEX값으로 32비트구성
 //  irsend.sendNEC(11011110001011100011110100110110, 32);
    delay(1000);
    
    bullit--;
    }
    else{
      digitalWrite(SpkPin,HIGH);
      delay(2000);//재장전
      digitalWrite(SpkPin,LOW);
      bullit=5;
    }
  }
}
