#include<Wire.h>
int ledPin = 13;
int x = 0;



void setup()
{
  pinMode(ledPin,OUTPUT);
  Wire.begin(9);
  Wire.onReceive(receiveEvent);
  Serial.begin(9600);
}

void loop()
{
  
  delay(100);
}

void receiveEvent(int howMany){
  int x = Wire.read();
  Serial.println(x);
  
  if(x == 1)
  {
    digitalWrite(ledPin,HIGH);
    delay(200);
  }
  if(x == 0)
  {
    digitalWrite(ledPin,LOW);
    delay(200);
  }
}