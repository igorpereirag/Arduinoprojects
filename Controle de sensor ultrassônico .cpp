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
  Serial.print("Distancia:");
  Serial.println(distancia);
if(distancia > 120.00){
      digitalWrite(11, HIGH);
      digitalWrite(12, LOW);
      digitalWrite(13,LOW);
      digitalWrite(3, LOW);
    }
    if( distancia >= 60.00 and distancia <=120.00){
      digitalWrite(13, LOW);
      digitalWrite(12, HIGH);
      digitalWrite(11, LOW);
      digitalWrite(3, LOW);    
      }
        if (distancia < 60.00 ){
      digitalWrite(12, LOW);
       digitalWrite(13, HIGH);
       digitalWrite(11, LOW);      
      int volume = map(distancia,2.00,60.00, 0,255);
       analogWrite(3, volume);
       Serial.print("Distancia Critica!:");
        Serial.println(distancia);
        
        }
  
 delay(300);

}
