const int LDR = A0;
const int buzzer = 9;
const int button = 8; 

int readLDR = 0;
int readButton;

void setup() {
  pinMode(LDR, INPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(button, INPUT_PULLUP);
}

void loop() {
  readLDR = analogRead(LDR);
  readButton = digitalRead(button);
  
  if (readLDR <= 512) {
  	tone(buzzer, 1000); 
  }
  else if (readButton == LOW) { 
  	noTone(buzzer); 
  }
}