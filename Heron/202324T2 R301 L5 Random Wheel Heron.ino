#include <Servo.h>

Servo heron;
int number = 0;

void setup() {
	heron.attach(3);
	pinMode(8, INPUT);
}

void loop() {
	if (digitalRead(8)) {
		number = random(0, 180);
		heron.write(number);
		delay(1000);
		while(digitalRead(8));
	}	
}