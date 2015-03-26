/*
  Workshop do Embarcados no Arduino Day 2015
  Fabio Souza
  Igor Tavares
  
  Exemplo 8 - Contador Decrescente
  Esse programa exibe a contagem decrescente de 9 a 0  no display
 */

//segmentos A,B,C,D,E,F,G,P
int display[] = {8,9,10,11,12,13,7,6};

//TABELA PARA CONVERSAO DOS NUMEROS
const int valor[] = {
  0b00111111, // 0
  0b00000110, // 1
  0b01011011, // 2
  0b01001111, // 3
  0b01100110, // 4
  0b01101101, // 5
  0b01111101, // 6
  0b00000111, // 7
  0b01111111, // 8
  0b01100111, // 9
};

//varivel para contagem
int cont = 9;

// configurações
void setup() {
  for (int i=6; i<=13; i++) {         //configura pinos de 6 a 13 como saidas
    pinMode(i, OUTPUT);               //configura como saida
  }
}

// loop principal
void loop() {
  escreve(cont);          //atualiza display
  delay(1000);            //delay de 1 seg
  cont--;                 //decrementa contador
  if(cont<0) cont = 9;    //se passou de 9 reinicia
  
}

/*
 funçao para conversao de valores no display
*/

void escreve(int x)
{
  byte numero = valor[x];      //carrega valor da tabela
  
  for(int i = 0;i<8;i++)       //varre bita
  {
    digitalWrite(display[i],bitRead(numero, i)); //liga segmento com o valor so bit
  }
}
