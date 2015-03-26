/*
  Workshop do Embarcados no Arduino Day 2015
  Fabio Souza
  Igor Tavares
  
  Exemplo 6 - Sequencial ajsutavel
  acende segmentos externos em sentido horario com intervalo definido no potenciometro 
  segmentos
 */

const int PRIMEIRO = 8; // constante para o segmento A
const int ULTIMO = 13;  // constante para o segmento F

const int pot = A0;     //constante para o potenciometro

// configurações
void setup() {
  for (int i=PRIMEIRO; i<=ULTIMO; i++) { //varre pino i
    pinMode(i, OUTPUT);                  //configura como saida
  }
}

// loop principal
void loop() {
  for (int i=PRIMEIRO; i<=ULTIMO; i++) { //varre pino i
    digitalWrite(i, HIGH);               //liga segmento i
    delay(analogRead(pot));               //aguarda tempo ajustado no potenciometro
    digitalWrite(i, LOW);                //desliga segmento i
  }
}
