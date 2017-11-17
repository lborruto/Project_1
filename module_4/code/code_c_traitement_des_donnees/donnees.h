#ifndef DONNEES_H//Permet d'�viter de d�finir deux fois le .h
#define DONNEES_H


#include <stdlib.h>
#include <stdio.h>

#define TAILLE 100 //Longueur max du tableau

FILE* ouvrirFichier(); //Pour ouvrir le fichier

void lireFichier(char** retourChaine, FILE* csv);//Lit le fichier dans l'ordre

typedef struct donneesDuFichier
{
	int boum;//pouls
	int time;//temps

}donneesDuFichier;
//Cette structure stocke s�par�ment le pouls (boum) et le temps(time) dans des tableaux.

donneesDuFichier pouls[10];

int separationTempsEtPouls(FILE* csv);//S�pare le temps du pouls

#endif
