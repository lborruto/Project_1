//Ce fichier contient toutes les fonctions nécessaires au calcul du pouls.

void readDatas(unsigned long temps, float lecture);
/*fontion readDatas:
 * reçoit les valeurs de la carte Arduino
 * envoit la valeur
 */

int calculPouls(int lecture, temps, valeurPrecedente);
/*fonction calculPouls
 * calcul le pouls en fonction du nombre de battements
 */
