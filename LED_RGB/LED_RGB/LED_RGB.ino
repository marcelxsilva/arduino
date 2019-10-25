const int pinoLEDR = 11;
const int pinoLEDG = 10;
const int pinoLEDB = 9;

void setup()
{
  pinMode(pinoLEDR,OUTPUT);
  pinMode(pinoLEDG,OUTPUT);
  pinMode(pinoLEDB,OUTPUT);
}

void loop()
{
  analogWrite(pinoLEDR, 10);
  analogWrite(pinoLEDG, 69);
  analogWrite(pinoLEDB, 19);
}
