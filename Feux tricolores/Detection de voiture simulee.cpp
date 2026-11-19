// Version Feu tricolore avec detection de voiture
// modelisee par une pression sur le bouton poussoir

#include <Arduino.h>

int switchState = 0;

void setup(){
  pinMode(2,INPUT); // bouton poussoir
  pinMode(3,OUTPUT); // LED verte
  pinMode(4,OUTPUT); // LED jaune
  pinMode(5,OUTPUT); // LED rouge
}

void loop(){
  switchState = digitalRead(2);
 
  if(switchState==LOW){ // pas de voiture detectee
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,HIGH);
  }
  else{
    delay(250); // modelise la verification des conditions
    digitalWrite(3,HIGH);
    digitalWrite(5,LOW);
    delay(6000);
    digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
    delay(1000);
  }
}
