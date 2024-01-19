void setup() {
	pinMode(13, OUTPUT);		
	pinMode(12, OUTPUT);		
	
	pinMode(10, OUTPUT);		
	pinMode(9, OUTPUT);		
	pinMode(8, INPUT);
	pinMode(7, INPUT);
	pinMode(3, OUTPUT);
	pinMode(6, INPUT);
	
	tone(3,500,500);
	delay(216);
	
	tone (3,293,500);
	delay(500);
	
	tone (3,329,500);
	delay (500);
	
	tone (3,349,500);
	delay(500);
	
	tone (3,391,500);
	delay (500);
	
	
	tone (3,493,500);
	delay(500);
	
	tone (3,490,500);
	delay (500);

	tone (3,494,500);
	delay(500);
	
	tone (3,524,500);
	delay (700);
}

void loop() {
	if (digitalRead(8))
	{
		digitalWrite(9, HIGH);
		delay(1000);
		digitalWrite(10, LOW);
		delay(1000);
		
		digitalWrite(12, HIGH);
		delay(1000);
		digitalWrite(11, LOW);
		delay(1000);
	}
}