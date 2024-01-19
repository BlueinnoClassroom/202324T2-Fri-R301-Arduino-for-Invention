void setup() {
	pinMode(6, OUTPUT);
	pinMode(5, OUTPUT);
	pinMode(4, OUTPUT);
	pinMode(3, OUTPUT);
	pinMode(8, INPUT);
	
	pinMode(2, OUTPUT); 
	
	tone(2, 261, 500);
	delay(500);
	
	tone(2, 293, 500);
	delay(500);
	
	tone(2, 329, 500);
	delay(500);
	
	tone(2, 349, 500);
	delay(500);
	
	tone(2, 391, 500);
	delay(500);
	
	tone(2, 421, 500);
	delay(500);
	
	tone(2, 451, 500);
	delay(500);
	
	tone(2, 481, 500);
	delay(500);
	
	tone(2, 511, 500);
	delay(500);
	
	tone(2, 541, 500);
	delay(500);
	
	tone(2, 571, 500);
	delay(500);
	
	tone(2, 601, 500);
	delay(500);
	
	tone(2, 631, 500);
	delay(500);
	
	tone(2, 661, 500);
	delay(500);
	
	tone(2, 691, 500);
	delay(500);
	
	tone(2, 721, 500);
	delay(500);
	
	tone(2, 751, 500);
	delay(500);
	
	tone(2, 781, 500);
	delay(500);
	
	tone(2, 811, 500);
	delay(500);
	
	tone(2, 841, 500);
	delay(500);
	
	tone(2, 871, 500);
	delay(500);
	
	tone(2, 901, 500);
	delay(500);
	
	tone(2, 931, 500);
	delay(500);
	
	tone(2, 961, 500);
	delay(500);
	
	tone(2, 991, 500);
	delay(500);

	tone(2, 1021, 500);
	delay(500);
	
	tone(2, 7355608, 500);
	delay(500);
	
	
	
	
}

void loop() {
	if (digitalRead(8))
	{ 
		digitalWrite(5, HIGH);
	} else {
		digitalWrite(5, LOW);
	}
	
	
	if (digitalRead(9))
	{ 
		digitalWrite(4, HIGH);
	}
	
	if (digitalRead(10))
	{ 
		digitalWrite(5, LOW);
		digitalWrite(4, LOW);
		digitalWrite(3, HIGH);
		delay(1000);
		digitalWrite(5, LOW);
		digitalWrite(4, LOW);
		digitalWrite(3, LOW);
		delay(1000);
	}
}
