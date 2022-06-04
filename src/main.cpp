#include <Arduino.h>

void setup()
{
  pinMode(23, OUTPUT);
  Serial.begin(115200);
}

void loop()
{
  int val = analogRead(34);
  Serial.println(val);
  if (val < 3000)
  {
    digitalWrite(23, HIGH);
  }
  else
  {
    digitalWrite(23, LOW);
  }
  delay(10);
}