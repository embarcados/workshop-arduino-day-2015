/*
  Workshop do Embarcados no Arduino Day 2015
  
  Exemplo 2 - Serial
  
  Esse programa tem a funcao de ficar piscando o LED do
  Arduino infinitamente a 1 Hz, escrevendo seu estado na
  porta serial. 
 */

void setup() {
  pinMode(13, OUTPUT); // Pino 13 ligado ao LED do Arduino como saida
  Serial.begin(9600);  // Habilita a porta serial do Arduino para 9600 bps
}

void loop() {
  int valor;
  
  digitalWrite(13, HIGH);         // Coloca o pino 13 em nivel logico alto
  Serial.println("LED aceso.");   // Escreve na porta serial
  delay(500);                     // Espera 500 ms
  
  digitalWrite(13, LOW);          // Coloca o pino 13 em nivel logico baixo
  Serial.println("LED apagado."); // Escreve na porta serial
  delay(500);                     // Espera 500 ms
}
