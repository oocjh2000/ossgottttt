#include<time.h>
#include <IRremote.h>

#define PainPin 13
#define InputPin 12
#define spkPin 8
#define revivePin 2
#define mode

bool hit;

int HP = 100;
int ReviveCount = 5;

IRrecv irrecv(InputPin);
decode_results judge;


void setup() {
  // put your setup code here, to run once:
  irrecv.enableIRIn();
  pinMode(InputPin, INPUT);
  pinMode(PainPin, OUTPUT);
  attachInterrupt(digitalPinToInterrupt(revivePin), revive, RISING);
}
void revive() {
  if (HP <= 0 && ReviveCount != 0) {
    HP = 100;
    ReviveCount--;
  }
}
void loop() {
  // put your main code here, to run repeatedly:
  if (HP <= 0) {
    if (irrecv.decode(&judge)) {
      switch (judge.value) {
 case 0xFFE01FDA://총분류코드 일반총

      break;
    case 0xAAAAAAAA:

      break;
      }
    }
  }
  else { //die
    digitalWrite(spkPin, HIGH);
  }
}
