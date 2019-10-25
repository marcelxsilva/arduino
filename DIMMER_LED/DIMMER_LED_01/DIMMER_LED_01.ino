
const int potenciometro = A0;
const int LED = 12;

int variacao = 1023;
int resultado;
int reader;

void setup(){
  pinMode(potenciometro, INPUT);
  pinMode(LED, OUTPUT);
}
void loop(){
  reader = analogRead(potenciometro);
  resultado = variacao - reader;
  digitalWrite(LED, HIGH);
  delay(resultado);
  digitalWrite(LED, LOW);
  delay(resultado);
}
