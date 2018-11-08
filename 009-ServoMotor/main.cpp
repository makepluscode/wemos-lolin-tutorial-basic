#include <Servo.h>

Servo servo;

void setup()
{
  Serial.begin(74880);
  servo.attach(2);
}

void loop()
{
  int pos;

  for (pos = 0; pos < 180; pos+=30)
  {
    servo.write(pos);
    delay(100);
  }

  for (; pos > 0; pos-=30)
  {
    servo.write(pos);
    delay(100);
  }

  Serial.println("a cycle done!");
  delay(1000);
}
