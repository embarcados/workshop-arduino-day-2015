/*
  Workshop do Embarcados no Arduino Day 2015
  Fabio Souza
  Igor Tavares
  
  Exemplo 4 - Entrada analogica - LDR!!!
*/

const int LDR = A1;

// configurações
void setup() {
 Serial.begin(9600); //configura comunicaçao serial
}

// loop principal
void loop() {
   int valor;              //VARIVEL AUX
  
  valor = analogRead(LDR);  //LE VALOR NA ENTRADA ANALOGICA
  Serial.println(valor);    //ESCREVE VALOR NA SERIAL
  delay(500);
  
}
