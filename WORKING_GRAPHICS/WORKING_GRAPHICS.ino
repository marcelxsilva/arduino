// variavel do pino analogico
int PIN = A0;
// definindo variavel para armazenar o valor lido pelo potenciometro
float readResult;
int sum = 0;

void setup() {
  pinMode(PIN, INPUT);
  Serial.begin(9600);
}
void loop() {
  readResult = analogRead(PIN);
  Serial.print(readResult);
  Serial.print(" "); 
  
  Serial.print(readResult*90); 
  Serial.print(" "); 
  
  Serial.print(" "); 
  Serial.println(readResult*30); 
  
  delay(100);        
}
