#define PainPin 13
#define InputPin 12
#define spkPin 8
#define revivePin 2

struct hero{
   int health;
   int atk;
   int revive;
   int skill_count;
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
