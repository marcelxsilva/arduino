void setup()
{
  pinMode(12,OUTPUT);
  pinMode(9, INPUT);
}

void loop()
{
  if(digitalRead(9) == HIGH){
  	digitalWrite(12, HIGH);
  }else {
  	digitalWrite(12, LOW);
  }
}