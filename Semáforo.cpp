void setup(){ // FUNÇÃO DE CONFIGURAÇÃO INICIL DO ARDUINO 
 // FUNÇÕES DE I\O DEFINE A FUNÇÃO DOS PINOS
  pinMode(13,OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, INPUT);
} 
void loop(){
 digitalWrite(11,HIGH);//ativa o pino 11 (liga)

  if (digitalRead(10)){ // estrutura condicional para ativa o semaforo
    delay(400);           // se o sinal de 5v for recebido no pino 10, ativa a sequencia de comandos
  digitalWrite(11,LOW);
  digitalWrite(12,HIGH);
  delay(7000);
  digitalWrite(12,LOW);
  digitalWrite(13,HIGH),
  delay(9000);
  digitalWrite(13,LOW);
    delay(1000); }
  
}
