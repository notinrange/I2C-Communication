#include<Wire.h>
int buttonPin = 2;
int buttonState = 0;

byte x  = 0;

void setup()
{
  pinMode(buttonPin,INPUT);
  Wire.begin(9);
}

void loop()
{
  buttonState = digitalRead(buttonPin);
  if(buttonState==HIGH)
  {
    x = 1;
  }
  else
  {
    x = 0;
  }
  Wire.beginTransmission(9);
  Wire.write(x);
  Wire.endTransmission();
  delay(200);
}