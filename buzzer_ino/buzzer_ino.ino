
int buzzer = 10;


void setup(){
pinMode(buzzer,OUTPUT);  
 
}

void loop(){
  digitalWrite(buzzer,HIGH); //ligando meu buzzermandando valor alto
  delay(150); //aqui estou esperando 150 segundos
  digitalWrite(buzzer,LOW);// aqui eu to desligando
  delay(2000);//esperando 2000 milisegundos
  
  
}

