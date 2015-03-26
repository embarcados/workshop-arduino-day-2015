/*
  Workshop do Embarcados no Arduino Day 2015
  Fabio Souza
  Igor Tavares
  
  Exemplo 2 - Serial
  Pisca o led ligado ao pino 13 do arduino em intervalos de 1 seg
  Exibindo o status do led na serial
 */
 
//cria uma constante para dar um nome ao pino 13 do arduino
const int LED = 13;

// configurações
void setup() {                
  // inicializa pino do que o led está ligado como saída
  pinMode(LED, OUTPUT);     
  
  //configura porta Serial
  Serial.begin(9600);  
}

// loop principal
void loop() {
  digitalWrite(LED, HIGH);       //liga led
  Serial.println("LED aceso");   //imprime status do led na serial
  delay(1000);                   // aguarda 1 seg
  digitalWrite(LED, LOW);        // desliga led
  Serial.println("LED apagado"); //imprime status do led na serial
  delay(1000);                   // aguarda 1 seg

}
