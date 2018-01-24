#include <arduwatch.h>

short hits=1;
#include <SoftwareSerial.h>
SoftwareSerial mySerial(2, 3); // RX, TX
Hero park;
int atk = 0;
void setup()
{
  // Open serial communications and wait for port to open:
  Serial.begin(9600);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for Leonardo only
  }
pinMode(7,OUTPUT);

  Serial.println("Goodnight moon!");

  // set the data rate for the SoftwareSerial port
  mySerial.begin(19200);

}
bool seriSt = LOW;
void loop() // run over and over
{
  while (mySerial.available() > 0) {
    atk = mySerial.parseInt();
    if (0 < atk && atk < 20) {

      park.Hero_Discount_HP(atk);
      Serial.print(atk);

      Serial.print("         ");
       Serial.print(hits);
        Serial.print("         ");
      Serial.println("discount");
      Serial.println(park.Hero_print_HP_Now());
    hits++;

      atk = 0;
      delay(1000);
      break;
    }

  }
  if (park.Hero_print_HP_Now() <= 0) {
    digitalWrite(7, HIGH);
    Serial.println("You Died");
    atk=0;
    hits=1;
     for(int i;i<=20;i++){
      Serial.print(':');
      delay(100);
     }
    park.Hero_Revive();
    Serial.println("You are revived");

  } else {
    digitalWrite(7, LOW);
  atk=0;
  }
  atk = 0;
}

