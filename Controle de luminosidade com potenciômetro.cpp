// C++ code
//
byte c = 0;// VARIAVEL DE CONTROLE
void setup()
{
 pinMode(2,OUTPUT);//FUNÇÕES DE I/O
 pinMode(3,OUTPUT);
 pinMode(4,INPUT);
 Serial.begin(9600);
}

void loop()
{
  if(digitalRead(4)){//CONDIÇÃO DE MUDANÇÃO DA VARIAVEL DE CONTROLE
    delay(40);
    c++;
  }

      if(c == 1){// QUANDO C FOR IGUAL A 1,LIGA O LED VERDE
      digitalWrite(2,HIGH);
        analogWrite(3,map(analogRead(5),0,1023,0,255));// SINCRONIZA A LEITURA DIGITAL COM A ANALOGICA
      }//SINCRONIZA O LED AMARELO COM O POTENCIOMENTRO
  
  
     if(c ==2){// QUANDO C FOR 2 C VOLTA PRA 0 E DESLIGA O SISTEMA
       c = 0;
      digitalWrite(2,LOW);
       digitalWrite(3,LOW);}

}

 //Serial.println(analogRead(5));
  //Serial.println(map(analogRead(5), 0,1023, 0,255));
