


void setup(){
 Serial.begin(9600); //9600 e a taxa de atualizacao padrao
 
}

void loop() {
  Serial.println(analogRead(A0)); //escrever no monitor serial dados do potenciomentro pulando uma linha
  delay(200);
  
  
}

  
