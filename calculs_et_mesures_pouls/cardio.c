#include "cardio.h"

int valeurPouls(int lecture, temps){
	//enregistre dans un tableau les valeurs du pouls prise régulièrement
	int valeurPrecedente = 0; //Initialisation de la retenue
	int seuilLimite = 650;
	long tempsPrecedent = 0; //Initialisation du temps
	int pouls = //valeur du pouls à renvoyer
	
  if (lecture > seuilLimite) {
    if (valeurPrecedente <= seuilLimite){
      temps = millis();
      if (temps > (tempsPrecedent + 200)){
        pouls = (1000.0 * 60.0) / (temps - tempsPrecedent);
        tempsPrecedent = temps; //On met à jour le temps
      }
    }
  }

}
