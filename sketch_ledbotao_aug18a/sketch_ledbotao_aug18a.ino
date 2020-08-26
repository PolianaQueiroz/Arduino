int led = 2;
int botao = 3;
int pressionado = 0;

 void setup() {
   
   pinMode(led,OUTPUT);
   pinMode(botao, INPUT);
   
 }
 
 void loop() {
   
   pressionado = digitalRead(botao);
   if (pressionado == HIGH){
     digitalWrite(led,HIGH);
     delay(10000); /*determina quanto tempo o lede vai ficar aceso depois de apertar o botao*/
   } else{
     digitalWrite(led,LOW);
   }
 }
