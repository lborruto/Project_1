#include "cardio.h"

int valeurPouls(int lecture, unsigned long temps, unsigned long tempsPrecedent){
	//enregistre dans un tableau les valeurs du pouls prise régulièrement
	int valeurPrecedente = 0; //Initialisation de la retenue
	int seuilLimite = 650;
  unsigned long time1;
  //unsigned long tempsPrecedent;
	int pouls; //valeur du pouls à renvoyer
	
  if (lecture > seuilLimite) {
    if (valeurPrecedente <= seuilLimite){
      time1 = temps;
      if (temps > (tempsPrecedent + 200)){
        pouls = (1000.0 * 60.0) / (temps - tempsPrecedent);
        tempsPrecedent = temps; //On met à jour le temps
      }
    }
  }
  return pouls;
}
