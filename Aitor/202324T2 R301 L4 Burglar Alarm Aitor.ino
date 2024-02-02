void setup() {
 Serial.begin(115200);
	pinMode(13, OUTPUT);
	pinMode(3, OUTPUT);
}

void loop() {
	int b = analogRead(A1);
	Serial.println(b);
  if (b > 100){
	  digitalWrite(13, HIGH);
		tone(3, 444, 500);
	} else {
		digitalWrite(13, LOW);
	}
}