// variavel do pino analogico
int PIN = A0;
// definindo variavel para armazenar o valor lido pelo potenciometro
float readResult;

void setup() {
  pinMode(PIN, INPUT);
  Serial.begin(9600);
}
void loop() {
  readResult = analogRead(PIN);
  Serial.println(readResult);
  delay(100);        
}
