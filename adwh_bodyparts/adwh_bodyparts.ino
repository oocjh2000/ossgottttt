#include <arduwatch.h>
int game=1;
short hits=1;
#include <SoftwareSerial.h>
SoftwareSerial mySerial(2, 3); // RX, TX
Hero park;
int atk = 0;
int score=100;
void setup()
{
  // Open serial communications and wait for port to open:
  Serial.begin(9600);

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
      
      Serial.print("atk=");
      Serial.print(atk);

      Serial.print("         ");
      
      Serial.print("hits=");
       Serial.print(hits);
       
        Serial.print("         ");
        
      Serial.println("discount");
      Serial.print("HP_NOW=");
      Serial.println(park.Hero_print_HP_Now());
    hits++;
tone(7, 262, 300);
      atk = 0;
      delay(1000);
      break;
    }

  }
  if (park.Hero_print_HP_Now() <= 0) {
tone(7, 31, 4000);
    Serial.println("You Died");
    hits=1;
     for(int i;i<=50;i++){
      Serial.print(':');
      atk=0;
      delay(50);
      score= score+atk;
      atk=0;
     }
    park.Hero_Revive();
    game++;
    Serial.print("Score=");
    Serial.println(score);
    Serial.println("You are revived");
    Serial.print(game);
    Serial.println("   game");

  } else {
    digitalWrite(7, LOW);
  atk=0;
  }
  atk = 0;
  
}

