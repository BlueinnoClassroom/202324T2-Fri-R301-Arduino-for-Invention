void setup() {
	pinMode(9,INPUT);
	pinMode(13,OUTPUT);
	pinMode(10,OUTPUT);
	pinMode(12,OUTPUT);
	digitalWrite(13,HIGH);
	digitalWrite(10,HIGH);
	digitalWrite(12,HIGH);
	pinMode(11,OUTPUT);
}

void loop() {
if (digitalRead(9)){
	digitalWrite(13, HIGH);
	digitalWrite(12, HIGH);
	digitalWrite(10, HIGH);
}
	int  knob = analogRead(A0);
	int value =map(knob, 0, 1023, 0, 255);
	analogWrite(13, value);
  analogWrite(12, value);
	analogWrite(10, value);
	tone(11, knob, 5);
}