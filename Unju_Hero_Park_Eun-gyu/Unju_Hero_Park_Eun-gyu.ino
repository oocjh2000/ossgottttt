//운주히어로 eungyu Park
//그는 고통을 모른다 (고통이 반감됩니다)
//무적시간이 1초 늘어납니다 체력이 2배가됩니다.
//맞짱뜰까아아아아아 특수스킬 10초간 무적
#include<time.h>


#define PainPin 13
#define InputPin 12
#define spkPin 8
#define revivePin 2
#define SkillPin 3
#define mode

bool hit;
int HP=100;

void matjjang(){//특수스킬 인터럽트로 발동
  delay(10000);
}

void setup() {
  // put your setup code here, to run once:

  pinMode(InputPin, INPUT);
  pinMode(PainPin, OUTPUT);
  attachInterrupt(digitalPinToInterrupt(revivePin),matjjang,RISING);
  attachInterrupt(digitalPinToInterrupt(SkillPin),revive,RISING);
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
      delay(100);
      digitalWrite(PainPin,LOW);
      delay(3000);//무적시간
    }
  }
  else{//die
    digitalWrite(spkPin,HIGH);
  }
}
