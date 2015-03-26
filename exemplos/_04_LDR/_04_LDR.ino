/*****************************************************************
                 Arduino Day 2015  - 28/03/15 
                    Hands ON - Arduino UNO
                 Embarcados - www.embarcados.com.br
                     Autor: Fabio Souza
*****************************************************************/

/*
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