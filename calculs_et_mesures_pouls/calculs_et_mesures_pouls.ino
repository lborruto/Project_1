#include "cardio.h"

const int ledInfrarouge = 8; //Numéro de la broche qui contrôle la LED infrarouge
unsigned long temps = 0; //Initialisation du temps
float lecture;//pour afficher le résultat
int valeurPrecedente;

void setup() {
  // put your setup code here, to run once:
  pinMode(LedInfrarouge, OUTPUT);
  digitalWrite(ledInfrarouge, HIGH); //Met la LED infrarouge à l'état haut (allumage de la LED)
  valeurPrecedente = 0;
}

void loop() {
  // put your main code here, to run repeatedly:
  temps = millis();//enregistrement dans "temps" de la durée d'exécution du programme en millisecondes
  lecture = analogRead(0); //Lecture de l'état du phototransistor dans la variable "lecture"
  delay(100);

  valeurPrecedente = lecture;

}
