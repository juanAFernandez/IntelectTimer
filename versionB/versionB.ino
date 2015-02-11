/*
 Based on open-source code  Blink
*/


/*------Declaracion de variables---------*/
int ledVerdeA=6;
int ledVerdeB=9;
int ledVerdeC=10;
int ledRojo=11;

int speakerPin=5;

int botonState=0;
int i=0; //Para los bucles;

/*----Inicializacion de los pines--------*/
void setup() {                
  pinMode(ledVerdeA, OUTPUT);       
  pinMode(ledVerdeB, OUTPUT);  
  pinMode(ledVerdeC, OUTPUT);
  pinMode(ledRojo, OUTPUT);
  pinMode(speakerPin, OUTPUT);
}

void playTone(int tone, int duration){
   for(long i=0; i<duration *1000L; i+=tone * 2){
     digitalWrite(speakerPin,HIGH);
     delayMicroseconds(tone);
     digitalWrite(speakerPin,LOW);
     delayMicroseconds(tone);
   }
}


void loop() {
  playTone(1915, 1000);
 //Enciende progresivamente el led verde A durante 10 segundos.
 for(i=0; i<256; i++){
   analogWrite(ledVerdeA, i);
   delay(39.0625);
 }
 //= con el B
 for(i=0; i<256; i++){
   analogWrite(ledVerdeB, i);
   delay(39.0625);
 }
 //= con el C
 for(i=0; i<256; i++){
   analogWrite(ledVerdeC, i);
   delay(39.0625);
 }
 //= con el D
 for(i=0; i<256; i++){
   analogWrite(ledRojo, i);
   delay(39.0625);
 }
 
  //Despues de llegar a los cuarenta segundos parpadea.
  do{
    
    delay(100);
    analogWrite(ledVerdeA,0);
    analogWrite(ledVerdeB,0);
    analogWrite(ledVerdeC,0);
    analogWrite(ledRojo,0);
    delay(100);
    analogWrite(ledVerdeA,255);
    analogWrite(ledVerdeB,255);
    analogWrite(ledVerdeC,255);
    analogWrite(ledRojo,255);
     
    botonState=digitalRead(3); 
     
  //Mientras que el boton no se pulse se repite el ciclo.
  }while(botonState==LOW);
  
  analogWrite(ledVerdeA,0);
    analogWrite(ledVerdeB,0);
    analogWrite(ledVerdeC,0);
    analogWrite(ledRojo,0);
  delay(500);
  
}
