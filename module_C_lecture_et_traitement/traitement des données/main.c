#include <stdio.h>
#include <stdlib.h>

#include "actions.h"
#include "donnees.h"
#include "menu.h"

//#include "donnees.csv"//Je ne pense pas que ça soit nécessaire...

int main(int argc, char *argv[])
{
	int traitement;

	traitement = menu();//Affichage du menu et entre la valeur choisie par l'utilisateur dans "traitement"

	switch (traitement)//Lance les fonctions nécessaires selon ce qu'a entré l'utilisateur
	{
	case 1://Afficher les donnees telle qu'elle etait dans le fichier .csv
		showFile();
		break;

	case 21://Afficher les donnees en ordre croissant
		croissant();
		break;

	case 22://Afficher les donnees en ordre décroissant
		//decroissant();
		break;

	case 3://Afficher des donnees pour un temps donnes
		//poulsForTime();
		break;

	case 4://Afficher le nombre de lignes enregistrees
		//numLine();
		break;

	case 51://Affiche max pouls
		//maxPouls();
		break;

	case 52://Affiche min pouls
		//minPouls();
		break;

	default://Sécurité
		printf("Fatal error !");
		exit(-1);
		break;
	}

	return 0;

}
