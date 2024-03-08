#include <Servo.h>

Servo poopthenames;
int number = 0;

void setup() {
  poopthenames.attach(3);
  pinMode(8, INPUT);
}

void loop() {
  number = random(0, 180);
  poopthenames.write(number);
  delay(1000); 
  while(digitalRead(8));
}