const int LDR = A0; 
int read = 0; 
float tensao = 0.0; 
const int LED = 7;

void setup() {
  Serial.begin(9600); 
  pinMode(LDR, INPUT);
}

void loop() {
  read = analogRead(LDR);
  
  if(read < 400){
    digitalWrite(LED, HIGH);
  }else {
    digitalWrite(LED, LOW);
  }

  Serial.print("read: ");
  Serial.print(read);

  tensao = read * 5.0 / 1023.0;
  Serial.print("Tensão: ");
  Serial.print(tensao);
  Serial.print("V");
  Serial.println();
}
  