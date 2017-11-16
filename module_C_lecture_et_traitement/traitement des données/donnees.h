#ifndef DONNEES_H
#define DONNEES_H


#include <stdlib.h>
#include <stdio.h>

#define TAILLE 100 //Longueur max du tableau

FILE* ouvrirFichier(); //Pour ouvrir le fichier

void lireFichier(char** retourChaine, FILE* csv);//Lit le fichier dans l'ordre

typedef struct donneesDuFichier
{
	int boum;
	int time;

}donneesDuFichier;
//Cette structure stocke s�par�ment le pouls (boum) et le temps(time)

int separationTempsEtPouls(FILE* csv);//S�pare le temps du pouls

#endif
