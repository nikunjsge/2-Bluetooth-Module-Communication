//Sender:

#include <SoftwareSerial.h>
#define tx 2
#define rx 3
SoftwareSerial bt(rx, tx); //RX, TX
void setup()
{
  Serial.begin(9600);
  bt.begin(9600);
  pinMode(tx, OUTPUT);
  pinMode(rx, INPUT);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  
}
void loop()
{


  if (digitalRead(4) == 0)
  {
    bt.write(4);
  }
  
  if (digitalRead(5) == 0)
  {
    bt.write(5);
  }
  
  if (digitalRead(6) == 0)
  {
    bt.write(6);
  }
  
  if (digitalRead(7) == 0)
  {
    bt.write(7);
  }
  
}
