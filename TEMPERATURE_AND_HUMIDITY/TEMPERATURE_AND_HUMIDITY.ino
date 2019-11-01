#include "DHT.h"

const int pino_dht = 9;
float temperatura; //  armazenar temperatura
float umidade; // armazenar  umidade
DHT dht(pino_dht, DHT11); // define o pino como DHT

void setup() {
  Serial.begin(9600); 
  dht.begin(); // inicializa o sensor
}

void loop() {
  delay(2000); // 2 segundos 

  temperatura = dht.readTemperature(); // lê a temperatura 
  umidade = dht.readHumidity(); // lê a umidade

    // verifica se houve alguma falha
  if (isnan(umidade) || isnan(temperatura)) {
    Serial.println("Erro na leitura");
  }
  else { 
    Serial.print("Temperatura: ");
    Serial.print(temperatura);
    Serial.print(" *C ");
    
    Serial.print("\t"); 
  
    Serial.print("Umidade: ");
    Serial.print(umidade);
    Serial.print(" %\t"); 
    Serial.println(); 
  }
}
