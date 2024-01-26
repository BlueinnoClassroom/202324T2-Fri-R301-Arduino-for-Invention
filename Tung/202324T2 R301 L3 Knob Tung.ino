void setup() {
	pinMode(8,INPUT);				
	pinMode(4,OUTPUT);		
	pinMode(3,OUTPUT);			
	pinMode(5,OUTPUT);			
	digitalWrite(4, HIGH);
	digitalWrite(3, HIGH);
	digitalWrite(5, HIGH);
	
	pinMode(2, OUTPUT);
}

void loop() {
	if (digitalRead(8)) {
	digitalWrite(4, HIGH);
	digitalWrite(3, HIGH);
	digitalWrite(5, HIGH);
	}
	
	int knob = analogRead(A0);
	int value = map(knob, 0, 1023, 0, 255);
	
	
	analogWrite(4, value);
	analogWrite(3, value);
	analogWrite(5, value);
	
	tone(2, knob, 5);

}

