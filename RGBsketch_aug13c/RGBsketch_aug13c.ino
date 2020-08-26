

boolean anodo_comum = true;

//variaveis do tipo inteiro
int pinoR = 11;
int pinoG = 10;
int pinoB = 9;

void setup () {
  
 pinMode(pinoR, OUTPUT);
 pinMode(pinoG, OUTPUT);
 pinMode(pinoB, OUTPUT);
   
}

void loop() {
  
  setCor(255,255,0);
 
}

//criando uma funçao

void setCor(int vermelho, int verde, int azul){
  if(anodo_comum == true){
    vermelho = 255 - vermelho;
    verde = 255 - verde;
    azul = 255 - azul;
  }
  analogWrite(pinoR,vermelho);
  analogWrite(pinoG,verde);
  analogWrite(pinoB, azul);
}


  


