/*
 Based on open-source code  Blink
*/

void setup() {
  // initialize the digital pin as an output.
  // Pin 13, 12, 8 and 7  has an LED connected on most Arduino boards:
  pinMode(13, OUTPUT);

  pinMode(12, OUTPUT);

  pinMode(8, OUTPUT);

  pinMode(7, OUTPUT);

  pinMode(3, INPUT);
}

boolean apagar=false;
int botonState=0;

//Principal loop main:
void loop() {

  //digitalWrite(7,HIGH);


  digitalWrite(7, HIGH);
  delay(10000);
  digitalWrite(8, HIGH);
  delay(10000);
  digitalWrite(12, HIGH);
  delay(10000);
  digitalWrite(13, HIGH);
  delay(10000);

  do{

    delay(100);
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
    delay(100);
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(13,HIGH);

    botonState=digitalRead(3);

  }while(botonState==LOW);

  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  digitalWrite(12,LOW);
  digitalWrite(13,LOW);
  delay(500);

}
