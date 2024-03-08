#include <Servo.h>

Servo bleh;
int number = 0;

void setup() {
	bleh.attach(3);
	pinMode(8, INPUT);
}

void loop() {
	if (digitalRead(8)){}
	number = random(0, 180);
	bleh.write(number);
	delay(1000);
}