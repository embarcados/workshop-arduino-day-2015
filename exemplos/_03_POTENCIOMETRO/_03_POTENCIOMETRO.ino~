/*****************************************************************
                 Arduino Day 2015  - 28/03/15 
                    Hands ON - Arduino UNO
                 Embarcados - www.embarcados.com.br
                     Autor: Fabio Souza
*****************************************************************/

/*
  Exemplo 3 - Entrada analogica - potenciometro!!!
*/

const int pot = A0;

// configurações
void setup() {
 Serial.begin(9600); //configura comunicaçao serial
}

// loop principal
void loop() {
   int valor;              //VARIVEL AUX
  
  valor = analogRead(pot);  //LE VALOR NA ENTRADA ANALOGICA
  Serial.println(valor);    //ESCREVE VALOR NA SERIAL
  delay(500);
  
}
