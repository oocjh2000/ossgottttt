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

void loop() {
 // gun();
 // machineGun();
 //Sniper(); 
}
