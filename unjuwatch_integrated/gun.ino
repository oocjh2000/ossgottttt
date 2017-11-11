
void gun() {
  int bullit;
  // put your main code here, to run repeatedly:
  bool BTST = digitalRead(BT);
  if (BTST == LOW) {
    if (bullit > 0) {

      irsend.sendNEC(0xFFE01FDA, 32); // FFE01FDA <-총기분류코드 HEX값으로 32비트구성
      // irsend.sendNEC(11111111111000000001111111011010);
      delay(100);

      bullit--;
#if Mode_Debug
      char Debug_BullitCounter[32];
      sprintf(Debug_BullitCounter, "Left Bullit:%d", bullit);
      Serial.println(Debug_BullitCounter);
#endif
    }
    else {
#if Mode_Debug
      Serial.println("reroading");
#endif
      digitalWrite(SpkPin, HIGH);
      delay(2000);//재장전
      digitalWrite(SpkPin, LOW);
      bullit = 30;
    }
  }
}
void machineGun() {
  int bullit;
  // put your main code here, to run repeatedly:
  bool BTST = digitalRead(BT);
  if (BTST == LOW) {
    if (bullit > 0) {

      irsend.sendNEC(0xAAAAAAAA, 32); // AAAAAAAA <-총기분류코드 HEX값으로 32비트구성
      //  irsend.sendNEC(10101010101010101010101010101010, 32);
      delay(50);

      bullit--;
#if Mode_Debug
      char Debug_BullitCounter[32];
      sprintf(Debug_BullitCounter, "Left Bullit:%d", bullit);
      Serial.println(Debug_BullitCounter);
#endif
    }
    else {
#if Mode_Debug
      Serial.println("reroading");
#endif
      digitalWrite(SpkPin, HIGH);
      delay(10000);//재장전
      digitalWrite(SpkPin, LOW);
      bullit = 150;
    }
  }
}
void Sniper() {
  int bullit;
  // put your main code here, to run repeatedly:
  bool BTST = digitalRead(BT);
  if (BTST == LOW) {
    if (bullit > 0) {

      irsend.sendNEC(0xDE2E3D36, 32); // DE2E3D36 <-총기분류코드 HEX값으로 32비트구성
      //  irsend.sendNEC(11011110001011100011110100110110, 32);
      delay(1000);

      bullit--;
#if Mode_Debug
      char Debug_BullitCounter[32];
      sprintf(Debug_BullitCounter, "Left Bullit:%d", bullit);
      Serial.println(Debug_BullitCounter);
      #endif
    }
    else {
#if Mode_Debug
      Serial.println("reroading");
#endif
      digitalWrite(SpkPin, HIGH);
      delay(2000);//재장전
      digitalWrite(SpkPin, LOW);
      bullit = 5;
    }
  }
}
