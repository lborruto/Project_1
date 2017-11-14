#include "cardio.h"

const int ledInfrarouge = 8; //Numéro de la broche qui contrôle la LED infrarouge
const int photo = 0; //Numéro de la broche qui reçoit les informations du phototransistor
unsigned long temps = 0; //Initialisation du temps à 0
int lecture; //Pour afficher le résultat


void setup() {
  // put your setup code here, to run once:
  pinMode(ledInfrarouge, OUTPUT);
  digitalWrite(ledInfrarouge, HIGH); //Met la LED infrarouge à l'état haut (allumage de la LED) 
 }

void loop() {
  int pouls;
  // put your main code here, to run repeatedly:
  lecture = analogRead(0); //Lecture de l'état du phototransistor dans la variable "lecture"
  temps = millis(); //Enregistrement dans "temps" de la durée d'exécution du programme en millisecondes
  pouls = valeurPouls(lecture, temps); //Appel de la fonction de la lecture du pouls
  Serial.println(pouls, millis()); //Affichage des résultats sur le port série
  delay(100); //Fait une pause pour ne pas surcharger le programme

}
