#include <Servo.h>

Servo Thewheelofnames;
int number = 0;
void setup() {
Thewheelofnames.attach(3);
}

void loop() {
	if(digitalRead(8)) {
number = random(0, 180);
	Thewheelofnames.write(number);
	delay(1000);
	while(digitalRead(8));
	}
}