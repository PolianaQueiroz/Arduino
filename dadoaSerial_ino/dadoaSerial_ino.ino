int recebido = 0;
int led1= LOW;
int led2= LOW;
int led3= LOW;



void setup(){
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);

  
}

void loop() {
  if(Serial.available() > 0){
    recebido =  Serial.read();
    switch(recebido){
      case '1':
        if(led1 == HIGH) {led1 = LOW;} else {led1 == HIGH;}
        digitalWrite(2, led1);
        break;
        
        case '2':
        if(led2 == HIGH) {led2 = LOW;} else {led2 == HIGH;}
        digitalWrite(3, led2);
        break;
        
        case '3':
        if(led3 == HIGH) {led3 = LOW;} else {led3 == HIGH;}
        digitalWrite(4, led3);
        break;
        
    }
  }
 
 
} 
