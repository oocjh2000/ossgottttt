//그는 포기를 모릅니다(계속부활)
//댕청댕청(고통시간이 길어짐, 체력절반)
//그는 모든대화를 거부합니다(기본공격외 피해x)

#include<time.h>


#define PainPin 13
#define InputPin 12
#define spkPin 8
#define revivePin 2
#define mode

bool hit;
int HP=40;



void setup() {
  // put your setup code here, to run once:

  pinMode(InputPin, INPUT);
  pinMode(PainPin, OUTPUT);
  attachInterrupt(digitalPinToInterrupt(revivePin),revive,RISING);
}
void revive(){
  if(HP<=0){
    HP=100;
  }
}
void loop() {
  // put your main code here, to run repeatedly:
  if (HP <= 0) {
    hit = digitalRead(InputPin);
    if (hit == HIGH) {
      HP=HP-20;
      digitalWrite(PainPin,HIGH);
      delay(300);
      digitalWrite(PainPin,LOW);
      delay(2000);//무적시간
    }
  }
  else{//die
    digitalWrite(spkPin,HIGH);
  }
}
