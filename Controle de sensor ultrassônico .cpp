#define echo 6
#define trig 7

unsigned long tempo;
double distancia;

void setup() {
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(3, OUTPUT);
  Serial.begin(9600);
 digitalWrite(trig, LOW);
unsigned long tempo;
double distancia;

}

void loop() {
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  tempo = pulseIn(echo, HIGH);

  distancia = tempo/58;

  Serial.println(distancia);
  
   if(distancia <= 30.00){
      digitalWrite(13, HIGH);
      
      digitalWrite(12, LOW);
      digitalWrite(11,LOW);
       

    }
    if(distancia > 30.00 || distancia <= 90.00 ){
      digitalWrite(13, LOW);
       digitalWrite(12, HIGH);
       digitalWrite(11, LOW);
       
      
       

    }if(distancia > 91.00 ){
      digitalWrite(11, HIGH);
      digitalWrite(12, LOW);
      digitalWrite(13, LOW);
     
    }
    
 delay(300);

}
