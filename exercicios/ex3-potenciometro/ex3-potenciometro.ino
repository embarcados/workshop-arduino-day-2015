/*
  Workshop do Embarcados no Arduino Day 2015
  
  Exemplo 3 - Dojo - Leitura do potenciometro
  
  Esse programa tem a funcao de ficar piscando o LED do
  Arduino infinitamente a 1 Hz, lendo o valor no canal do 
  conversor A/D ligado ao potenciometro e escrevendo esse
  valor na porta serial.
 */

void setup() {
  pinMode(13, OUTPUT); // Pino 13 ligado ao LED do Arduino como saida
  Serial.begin(9600);  // Habilita a porta serial do Arduino para 9600 bps
}

void loop() {
  int valor;
  
  digitalWrite(13, HIGH);       // Coloca o pino 13 em nivel logico alto
  valor = analogRead(A0);       // Faz a leitura do conversor A/D no pino A0
  Serial.print("Valor lido: ");
  Serial.println(valor);        // Escreve na porta serial o valor lido.
  delay(500);                   // Espera 500 ms
  
  digitalWrite(13, LOW);        // Coloca o pino 13 em nivel logico baixo
  valor = analogRead(A0);       // Faz a leitura do conversor A/D no pino A0
  Serial.print("Valor lido: ");
  Serial.println(valor);        // Escreve na porta serial o valor lido.
  delay(500);                   // Espera 500 ms
}
