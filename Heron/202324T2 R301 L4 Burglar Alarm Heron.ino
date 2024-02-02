void setup() {
	pinMode(2,INPUT);
	pinMode(3,OUTPUT);
	pinMode(4,OUTPUT);
	pinMode(5,OUTPUT);
	analogWrite(3, HIGH);
	analogWrite(4, HIGH);
	analogWrite(5, HIGH);
	
	pinMode(10, OUTPUT);
}
void loop() {
	if (digitalRead(2)) {
		digitalWrite(3, HIGH);
		digitalWrite(4, HIGH);
		digitalWrite(5, HIGH);
	}
	
	int Knob = analogRead(A0);
	int value = map(Knob, 0, 1023, 0, 255);	
	
	analogWrite(3, value);
	analogWrite(4, value);
	analogWrite(5, value);
	
	tone(10, Knob, 5);	
	
	
}

