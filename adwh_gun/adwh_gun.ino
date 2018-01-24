#include<SoftwareSerial.h>
#include<arduwatch.h>

Wepon assult;
void setup() {
  // put your setup code here, to run once:
  pinMode(D7, INPUT);
  // pinMode(D4, OUTPUT);
  //Serial.begin(19200);
  Serial.begin(19200);
}
int mag = 30;
int power = 10;
int reload = 3000;
int Wspeed = 100;
void loop() {

bool btst =LOW;
btst=digitalRead(D7);
  if (mag > 0&&btst==HIGH) {
    Serial.println(power);
    mag--;
    delay(Wspeed);

  } else if (mag <= 0) {
    delay(reload);
  }
}


