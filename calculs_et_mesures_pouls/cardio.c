#include "cardio.h"

void readDatas(unsigned long temps, float lecture){
  //lit les données reçues par l'Arduino
  calculPouls(lecture, temps);
}

int calculPouls(int lecture, temps){
	//calcul du pouls
	int i;//variables utiles
	int seuilLimite = 650;
	
  if (lecture > seuilLimite) {
    if (valeurPrecedente <= seuilLimite){
      tempsDetection = millis();
      if (tempsDetection > (tempsPrecedent + 200)){
        Serial.println( (1000.0 * 60.0) / (tempsDetection - tempsPrecedent),0);
        tempsPrecedent = tempsDetection;
      }
    }
  }

	
}
