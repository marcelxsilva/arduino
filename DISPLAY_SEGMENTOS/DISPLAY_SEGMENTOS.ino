const int pino_a = 12; 
const int pino_b = 11; 
const int pino_c = 10; 
const int pino_d = 9; 
const int pino_e = 8; 
const int pino_f = 6; 
const int pino_g = 7; 

void setup() {
  pinMode(pino_a, OUTPUT);
  pinMode(pino_b, OUTPUT);
  pinMode(pino_c, OUTPUT);
  pinMode(pino_d, OUTPUT);
  pinMode(pino_e, OUTPUT);
  pinMode(pino_f, OUTPUT);
  pinMode(pino_g, OUTPUT);
}

void loop() {
  // 0 (zero):
  digitalWrite(pino_a, HIGH);
  digitalWrite(pino_b, HIGH);
  digitalWrite(pino_c, HIGH);
  digitalWrite(pino_d, HIGH);
  digitalWrite(pino_e, HIGH);
  digitalWrite(pino_f, HIGH);
  digitalWrite(pino_g, LOW);
  delay(1000); 
  
  // 1 (um):
  digitalWrite(pino_a, LOW);
  digitalWrite(pino_b, HIGH);
  digitalWrite(pino_c, HIGH);
  digitalWrite(pino_d, LOW);
  digitalWrite(pino_e, LOW);
  digitalWrite(pino_f, LOW);
  digitalWrite(pino_g, LOW);
  delay(1000); 

  // 2 (dois):
  digitalWrite(pino_a, HIGH);
  digitalWrite(pino_b, HIGH);
  digitalWrite(pino_c, LOW);
  digitalWrite(pino_d, HIGH);
  digitalWrite(pino_e, HIGH);
  digitalWrite(pino_f, LOW);
  digitalWrite(pino_g, HIGH);
  delay(1000); 

  // 3 (três):
  digitalWrite(pino_a, HIGH);
  digitalWrite(pino_b, HIGH);
  digitalWrite(pino_c, HIGH);
  digitalWrite(pino_d, HIGH);
  digitalWrite(pino_e, LOW);
  digitalWrite(pino_f, LOW);
  digitalWrite(pino_g, HIGH);
  delay(1000); 

  // 4 (quatro):
  digitalWrite(pino_a, LOW);
  digitalWrite(pino_b, HIGH);
  digitalWrite(pino_c, HIGH);
  digitalWrite(pino_d, LOW);
  digitalWrite(pino_e, LOW);
  digitalWrite(pino_f, HIGH);
  digitalWrite(pino_g, HIGH);
  delay(1000); 

  // 5 (cinco):
  digitalWrite(pino_a, HIGH);
  digitalWrite(pino_b, LOW);
  digitalWrite(pino_c, HIGH);
  digitalWrite(pino_d, HIGH);
  digitalWrite(pino_e, LOW);
  digitalWrite(pino_f, HIGH);
  digitalWrite(pino_g, HIGH);
  delay(1000); 

}
