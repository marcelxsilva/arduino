const int potenciometro = A0; 
const int LED = 11; 
int reader = 0; 
int pwm = 0; 

void setup() {
  pinMode(potenciometro, INPUT);
  pinMode(LED, OUTPUT); 
}

void loop() {
  reader = analogRead(potenciometro);
  pwm = map(reader, 0, 1023, 0, 255); 
  analogWrite(LED, pwm);
  
}
