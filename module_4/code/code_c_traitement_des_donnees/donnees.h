#ifndef DONNEES_H//Permet d'éviter de définir deux fois le .h
#define DONNEES_H


#include <stdlib.h>
#include <stdio.h>

#define TAILLE 100 //Longueur max du tableau

FILE* ouvrirFichier(); //Pour ouvrir le fichier

void lireFichier(char** retourChaine, FILE* csv);//Lit le fichier dans l'ordre

typedef struct donneesDuFichier
{
	int boum;//pouls
	int temps;//temps

}donneesDuFichier;
//Cette structure stocke séparément le pouls (boum) et le temps(temps) dans des tableaux.

donneesDuFichier pouls[40];

int separationTempsEtPouls(FILE* csv);//Sépare le temps du pouls

#endif
