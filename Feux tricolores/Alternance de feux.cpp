// Version 2 Feux tricolores avec
// activation en alternance

#include <Arduino.h>

int currentFire = 0;

void activateFire(int i){
  digitalWrite(3+7*i,HIGH);
  digitalWrite(5+7*i,LOW);
  delay(6000);
  digitalWrite(3+7*i,LOW);
  digitalWrite(4+7*i,HIGH);
  delay(1000);
  digitalWrite(4+7*i,LOW);
  digitalWrite(5+7*i,HIGH);
}

void setup(){
  // Feu numero 1
  pinMode(3,OUTPUT); // LED verte
  pinMode(4,OUTPUT); // LED jaune
  pinMode(5,OUTPUT); // LED rouge

  // Feu numero 2
  pinMode(10,OUTPUT); // LED verte
  pinMode(11,OUTPUT); // LED jaune
  pinMode(12,OUTPUT); // LED rouge

  // Initialisation
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  digitalWrite(12,HIGH);
}

void loop(){
  activateFire(currentFire);
  delay(1000);
  currentFire = (currentFire+1)%2;
}
