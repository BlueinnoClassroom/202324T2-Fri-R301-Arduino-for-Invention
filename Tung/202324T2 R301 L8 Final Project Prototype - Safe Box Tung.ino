int trig = 9;
int echo = 8;
double velocity = 0.034;
int distance;
long duration;

void setup() {
	Serial.begin(115200);
	pinMode(trig,OUTPUT);
	pinMode(echo,INPUT);
	pinMode(13 ,OUTPUT);
	pinMode(12, OUTPUT);
	pinMode(11, OUTPUT);
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
	
	if(distance<10){
		digitalWrite(13, HIGH);
		delay(50);
		digitalWrite(12, HIGH);
		delay(50);
		digitalWrite(11, HIGH);
		delay(50);
		tone(3, distance*100, 50);
		delay(50);
	}else{
		digitalWrite(13, LOW);
    digitalWrite(12, LOW);
		digitalWrite(11, LOW);
	}
}

