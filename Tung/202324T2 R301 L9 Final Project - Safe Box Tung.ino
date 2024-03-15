#include <Servo.h>

Servo locker; 
int trig = 9;
int echo = 8;
double velocity = 0.034;
int distance;
long duration;

void setup() {
	Serial.begin(115200);
	pinMode(trig,OUTPUT);
	pinMode(echo,INPUT);
	pinMode(11, OUTPUT);
	pinMode(12, OUTPUT);
	pinMode(10, OUTPUT);
	pinMode(7, INPUT);
	pinMode(6, INPUT);
	pinMode(5, INPUT);
	pinMode(4, INPUT);
	pinMode(3, INPUT);
	locker.attach(10);
	locker.write(0);
}

void loop() {
	digitalWrite(trig,LOW);
	delayMicroseconds(2);
	
	digitalWrite(trig,HIGH);
	delayMicroseconds(10);
	
	digitalWrite(trig,LOW);
	
	duration = pulseIn(echo,HIGH);
	distance = (velocity * duration)/2;
	
	Serial.print(distance);
	Serial.println(" cm");
	
	if (digitalRead(7) && digitalRead(6) && digitalRead(5) && digitalRead(4) && digitalRead(3)){
		digitalWrite(13, HIGH);
		digitalWrite(11, HIGH);
		digitalWrite(12, HIGH);
		locker.write(0);
		delay(10000);
	} else {
		digitalWrite(11, LOW);
		digitalWrite(12, LOW);
		digitalWrite(13, LOW);
		locker.write(180);
	}
	
	
	if (distance<10){
		tone(2, 440, 100);
		delay(100);
		tone(2, 470, 100);
		delay(100);
		tone(2, 500, 100);
		delay(100);
		
	}
}
