
<h1 align="center">Aprendendo Arduino</h1>
<p>
  <a href="#" target="_blank">
    <img alt="License: MIT" src="https://img.shields.io/badge/License-MIT-yellow.svg" />
  </a>
  <a href="https://twitter.com/marcelxsilva" target="_blank">
    <img alt="Twitter: marcelxsilva" src="https://img.shields.io/twitter/follow/marcelxsilva.svg?style=social" />
  </a>
</p>

> ## Temperatura e Humidade

A temperatura e humidade são coisas que fazem parte da nossa vida, analisar e definir ações a serem realizadas quando a temperatura se eleva ou quando a humidade é baixa, é fundamental em alguns projetos de automação residencial ou métodos de segurança em bibliotecas onde a humidade alta pode causar mofo estragando os materiais.

Aqui irei utilizar um DHT11, mas primeiro vamos entender como ele funciona.

É importante destacar que a constante exposição do sensor ao sol pode afetar os resultados

O sensor DHT11 é utilizado para a medição de temperatura e humidade, O componente de humidade utilizado pelo sensor é capacitivo, ele detecta vapor no ar e faz a medição elétrica entre dois eletrodos. O componente de temperatura é um termistor NTC( um sensor sensível a temperatura que tem sua resistencia diminuida com o aumento da temperatura).
Dentro do sensor existe um microcontrolador que faz as medições e transmite os valores no formato digital, podendo essa transmissão ser enviada através de um cabo de até 20 metros.

### Hardware

<img src='https://smhttp-ssl-71122.nexcesscdn.net/media/catalog/product/cache/2/thumbnail/450x450/9df78eab33525d08d6e5fb8d27136e95/d/h/dht11_pins.png' width='250'>

Na imagem esta descrito o nome de cada pinagem do DHT11

Ele utiliza apenas um fio para transmitir sinal ao arduino, alimentação é feita pelo pino VCC e GND, de acordo com a especificação do DHT11 ele possui uma margem de erro de 2% em relação á temperatura, quando o mesmo indica a temperatuca como 20 ºC a temperatura pode ser 18 ou 22 ºC, o mesmo é para humidade porem com a taxa de 5%.

## Circuito


Utilizo o Thinkercad para montar os circuitos e infelizmente na lista de componentes não havia o DHT11 para exemplificar a montagem do circuito, mas fiz uma forma que ficará facil o entendimento.

Coloquei um Interruptor DIP para se passar pelo DHT11 no circuito, vamos entender a pinagem e o que significa cada cor do jumpers do interruptor.

- Turquesa: GND
- Amarelo: NC(Não Conectado)  
- Rosa: Data
- Branco: VCC

Ja sabemos o que é o pino GND, NC é o nome dado em circuitos para Não Conectado, Data é o pino responsavel por enviar os dados ao arduino e VCC é o pino de energia o DHT11 tem capacidade de 2.5V a 5V.

## Código
Para quem já possui algum conhecimento com arduino vai entender muito bem o código, ele se auto-explica, porém antes precisamos instalar algumas bibliotecas para podermos obter algumas funções para trabalhar com nosso sensor.

- #### [Biblioteca DHT](https://github.com/adafruit/DHT-sensor-library/archive/master.zip)

- #### [Biblioteca Adafruit Sensors](https://github.com/adafruit/Adafruit_Sensor/archive/master.zip)


Após o download dos arquivos .zip, abra a IDE do arduino e siga os seguintes passos:
- Na Aba  Sketch selecione a Opção <i> Incluir Biblioteca</i> > <i>Adicionar arquivo ZIP</i>

Vá até o local onde os arquivos baixados foi salvo e clique em Ok, e verá uma mensagem informando que a biblioteca foi adicionada.

Após concluir esses passos, insirá o seguinte código na IDE.

```C++
#include "DHT.h"

const int pino_dht = 9;
float temperatura; //  armazenar temperatura
float umidade; // armazenar  umidade
DHT dht(pino_dht, DHT11); 

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

```

Bom, acredito que não vai ser necessario entrar em detalhes para explicar sobre o que esta acontecendo no código, o unico ponto que seria importante explicar seria <code>DHT dht(pino_dht, DHT11);</code> onde é definido qual será o pino de entrada do sensor e qual é o modelo do sensor utilizado. Um pouco abaixo temos um delay com 2 segundos de espera, esse valor se dá devido a documentação do DHT11 informar que existe um tempo para que o sensor obtenha os dados e os processe até ser enviado ao arduino.


[Voltar ao Início](../README.md)
<hr/>
 
 **Author - Marcelo Silva**

* Twitter: [@marcelxsilva](https://twitter.com/marcelxsilva)
* Github: [@marcelxsilva](https://github.com/marcelxsilva)
