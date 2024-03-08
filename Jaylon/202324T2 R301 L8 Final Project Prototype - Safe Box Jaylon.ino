int answer[3] = {-1, -1, -1};
int LEDlist[3] = {11, 12, 13};  //LED pin numbers

void setup() {
	Serial.begin(115200);
}

void loop() {
}

void randomAnswer(){
	Serial.println("Generate Random Answer");
	//reset to -1
	for(int i=0; i<3; i++) {
		answer[i] = -1;
	}
	
	//random the answer list
	answer[0] = LEDlist[random(0, 3)];
	Serial.print(answer[0]);
	Serial.print(",");
	
	do {
		answer[1] = LEDlist[random(0, 3)];
	} while(answer[1] == answer[0]);
	Serial.print(answer[1]);
	Serial.print(",");
	
	do {
		answer[2] = LEDlist[random(0, 3)];
	} while(answer[2] == answer[1] || answer[2] == answer[0]);
	
	Serial.print(answer[2]);
	Serial.println();
}
