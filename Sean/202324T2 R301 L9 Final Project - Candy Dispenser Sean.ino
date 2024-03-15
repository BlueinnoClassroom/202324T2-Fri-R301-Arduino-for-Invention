#include <Servo.h>

Servo qwertyuiopasdfghjkl;

void setup() {
	qwertyuiopasdfghjkl.attach(5);
	qwertyuiopasdfghjkl.write(180);
	pinMode(11, INPUT);

}

void loop() {
	if (digitalRead(11)){
	   qwertyuiopasdfghjkl.write(0);
	}else{
		qwertyuiopasdfghjkl.write(180);
	}
}