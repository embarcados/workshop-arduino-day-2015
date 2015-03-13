/*
  Workshop do Embarcados no Arduino Day 2015
  
  Exemplo 1 - LED Blick
  
  Esse programa tem a funcao de ficar piscando o LED do
  Arduino infinitamente a 1 Hz.
 */

void setup() {
  pinMode(13, OUTPUT); // Pino 13 ligado ao LED do Arduino como saida
}

void loop() {
  digitalWrite(13, HIGH);       // Coloca o pino 13 em nivel logico alto
  delay(500);                   // Espera 500 ms
  digitalWrite(13, LOW);        // Coloca o pino 13 em nivel logico baixo
  delay(500);                   // Espera 500 ms
}
