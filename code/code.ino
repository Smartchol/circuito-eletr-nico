const int pinoFototransistor = A2; 

void setup(){
  Serial.begin(9600); 
   pinMode(pinoFototransistor, INPUT);
}
 
void loop(){
  if(analogRead(pinoFototransistor) < 800){ 
    Serial.println("Recebendo sinal infravermelho"); 
  }else{ //SENÃO, FAZ
    Serial.println("Sinal infravermelho interrompido"); 
  }
 }
