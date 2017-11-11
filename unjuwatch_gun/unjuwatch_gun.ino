//일반학생 사용가능
//말그대로 보통의 평범한 총기
//장탄수 30발
//재장전 10초

#include <IRremote.h>

#define Mode_Debug 1
#define LaserPin 13
#define BT 4
#define SpkPin 8

IRsend irsend;

void setup() {
  // put your setup code here, to run once:
  pinMode(LaserPin, OUTPUT);
  pinMode(BT, INPUT_PULLUP);
  pinMode(SpkPin, OUTPUT);
  #if Mode_Debug
  Serial.begin(9600);
  #endif
}
int bullit=30;
void loop() {
  // put your main code here, to run repeatedly:
  bool BTST = digitalRead(BT);
  if (BTST == LOW) {
    if(bullit>0){
      
     irsend.sendNEC(0xFFE01FDA, 32); // FFE01FDA <-총기분류코드 HEX값으로 32비트구성
  // irsend.sendNEC(11111111111000000001111111011010);
    delay(100);
    
    bullit--;
    #if Mode_Debug
    char Debug_BullitCounter[32];
    sprintf(Debug_BullitCounter,"Left Bullit:%d",bullit);
  Serial.println(Debug_BullitCounter);
  #endif
    }
    else{
      #if Mode_Debug
      Serial.println("reroading");
      #endif
      digitalWrite(SpkPin,HIGH);
      delay(2000);//재장전
      digitalWrite(SpkPin,LOW);
      bullit=30;
    }
  }
}
