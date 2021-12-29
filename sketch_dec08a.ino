//Receiver:

//Referance: https://www.youtube.com/watch?v=I2qFXSe0W3w&list=LL&index=1

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
}
void loop()
{
  if (bt.available() > 0)
  {
    Serial.println(bt.read());
  }
}
