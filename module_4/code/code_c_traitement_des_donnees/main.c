#include <stdio.h>
#include <stdlib.h>

#include "actions.h"
#include "donnees.h"
#include "menu.h"

int main(int argc, char *argv[])
{
	int traitement;
	FILE* csv;

	csv = ouvrirFichier();

	traitement = menu();//Affichage du menu et entre la valeur choisie par l'utilisateur dans "traitement"

	switch (traitement)//Lance les fonctions n�cessaires selon ce qu'a entr� l'utilisateur
	{
	case 1://Afficher les donnees telle qu'elle etait dans le fichier .csv
		showFile(csv);
		break;

	case 21://Afficher les donnees en ordre croissant
		croissant(csv);
		break;

	case 22://Afficher les donnees en ordre d�croissant
		decroissant(csv);
		break;

	case 3://Afficher des donnees pour un temps donnes
		poulsForTime(csv);
		break;

	case 4://Afficher le nombre de lignes enregistrees
		numLine(csv, 1);
		break;

	case 51://Affiche max pouls
		maxPouls(csv);
		break;

	case 52://Affiche min pouls
		minPouls(csv);
		break;

	case 6://Affiche la moyenne
		moyennePouls(csv);
		break;

	default://S�curit�
		printf("Fatal error !");
		exit(-1);
		break;
	}

	return 0;

}
