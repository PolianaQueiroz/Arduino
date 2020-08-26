


int buzzer = 10;


void setup(){
pinMode(buzzer,OUTPUT);  
 
}

void loop(){
  tone(buzzer,1500); //primeiro parametro e o pino, o segundo a frenquencia e o terceiroa duracao do som
  delay(200);
  
  tone(buzzer,2000);
  delay(200);
  
  //noTone(buzzer);
}

