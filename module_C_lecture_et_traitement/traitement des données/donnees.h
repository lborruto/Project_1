#include <stdlib.h>
#include <stdio.h>

#define TAILLE 100 //Longueur max du tableau

FILE* ouvrirFichier(); //Pour ouvrir le fichier

void lireFichier(char** retourChaine, FILE* csv);//Lit le fichier dans l'ordre

typedef struct donneesDuFichier
{
	char *pouls;
	char *time;
	struct donneesDuFichier *NEXT;

}donneesDuFichier;
//Cette structure est une liste chain�e servant � stocker les valeurs du temps et du pouls s�par�ment

donneesDuFichier separationTempsEtPouls(char** retourChaine, FILE* csv);//S�pare le temps du pouls
