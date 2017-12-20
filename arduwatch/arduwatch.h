#define PainPin 13
#define InputPin 12
#define SpkPin 8
#define Revive_Pin 2

 class hero{
   private int HP_Full
   private int HP_Now;
   private int Revive_Count;
   private int Skill_count;

   void Use_Skill(){
     if(Skill_count)

     Skill_count--;
   }

   void  revive(){
     if(Revive_Count){
       HP_Now=HP_Full;
       Revive_Count--;
     }
   }

}

/*#define PainPin 13
#define InputPin 12
#define spkPin 8
#define revivePin 2

bool hit;

  int HP=100;
  int ReviveCount=5;





void setup() {
  // put your setup code here, to run once:

  pinMode(InputPin, INPUT);
  pinMode(PainPin, OUTPUT);
  attachInterrupt(digitalPinToInterrupt(revivePin),revive,RISING);
}
void revive(){
  if(HP<=0&&ReviveCount!=0){
   HP=100;
   ReviveCount--;
  }
}
void loop() {
  // put your main code here, to run repeatedly:
  if (HP <= 0) {
    hit = digitalRead(InputPin);
    if (hit == HIGH) {
      HP=HP-20;
      digitalWrite(PainPin,HIGH);
      delay(200);
      digitalWrite(PainPin,LOW);
      delay(2000);//무적시간
    }
  }
  else{//die
    digitalWrite(spkPin,HIGH);
  }
}*/
