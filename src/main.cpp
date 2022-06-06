#include <ESP32Servo.h>
Servo servo_L;
Servo servo_R;

void setup()
{
  pinMode(23, OUTPUT);
  servo_L.attach(16);
  servo_R.attach(17);
  Serial.begin(115200);
}

void loop()
{
  int val = analogRead(34);
  Serial.println(val);

  if (val < 3000)
  {
    digitalWrite(23, HIGH);
    servo_L.write(0);
    servo_R.write(0);
  }
  else
  {
    digitalWrite(23, LOW);
    servo_L.write(180);
    servo_R.write(180);
  }
  delay(10);
}