#include<SoftwareSerial.h>
#include<arduwatch.h>
SoftwareSerial mySerial(D2, D4);
Wepon assult;
void setup() {
  // put your setup code here, to run once:
  pinMode(D4, OUTPUT);
  mySerial.begin(19200);
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (assult.Wepon_print_Magazine() > 0) {
    mySerial.print(assult.Shot(assult.Wepon_print_Power()));
    Serial.println("shot");
    delay(assult.Wepon_print_Speed());
  } else {
    Serial.println("Reload");
    delay(assult.Reload());
  }

}
