#include "cardio.h"
int verifcardio(int valeurActuelle, int valeurSeuil, int valeurPrecedente){
  if (valeurActuelle > valeurSeuil) {  // on est dans la zone max
    if (valeurPrecedente <= valeurSeuil) {  // est-ce qu'on vient d'y entrer?
      loop();
    }
  }
}

int calculcardio(int tempsDetection, int tempsPrecedent, int valeurSeuil){
  if (tempsDetection > (tempsPrecedent + valeurSeuil)){  // ce n'est pas seulement du bruit?
    loop();
  }
}
