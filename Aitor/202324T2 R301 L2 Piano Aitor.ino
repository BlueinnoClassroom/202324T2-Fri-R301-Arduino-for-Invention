void setup() {
	pinMode(13, OUTPUT);
	pinMode(8, INPUT);
	pinMode(10, OUTPUT);
	pinMode(12, OUTPUT);
}

void loop() {
	tone(3,900,500);
	delay(500);
	tone(3,800,500);
	delay(500);
	tone(3,700,500);
	delay(500);
	tone(3,600,100);
	delay(500);
	tone(3,500,500);
	delay(500);
	if (digitalRead(8)){
		digitalWrite(13, HIGH);
		digitalWrite(12, HIGH);
		digitalWrite(10, HIGH);											 			    
	}else {
		digitalWrite(13, LOW);
		digitalWrite(12, LOW);
		digitalWrite(10, LOW);
	}
}

