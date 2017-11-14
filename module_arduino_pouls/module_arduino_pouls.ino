// extern "C" {
#include "cardio.h"
// }

// const int ledInfrarouge = 8; //Numéro de la broche qui contrôle la LED infrarouge
const int photo = 0; //Numéro de la broche qui reçoit les informations du phototransistor
unsigned long temps = 0; //Initialisation du temps à 0
unsigned long temps1 = 0;
unsigned long tempsPrecedent;
int lecture; //Pour afficher le résultat


void setup() {
  // put your setup code here, to run once:
  // pinMode(ledInfrarouge, OUTPUT);
  // digitalWrite(ledInfrarouge, HIGH); //Met la LED infrarouge à l'état haut (allumage de la LED)
  tempsPrecedent = 0;
 }


void loop() {
  int pouls;
  // put your main code here, to run repeatedly:
  lecture = analogRead(0); //Lecture de l'état du phototransistor dans la variable "lecture"
  temps = millis(); //Enregistrement dans "temps" de la durée d'exécution du programme en millisecondes
  temps1 = millis(); //Temps pour le calcul du pouls
  pouls = valeurPouls(lecture, temps1, tempsPrecedent); //Appel de la fonction de la lecture du pouls
  Serial.println(pouls); //Affichage des résultats sur le port série
  Serial.println(millis());
  Serial.println('\n');
  delay(200);
}
