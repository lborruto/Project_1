#include "menu.h"
#include <stdio.h>
#include <stdlib.h>


int menu()
{
	int choix;
		printf("Choississez le mode d'affichage :\n");
		printf("1 - Allumer toutes les LEDs \n");
		printf("2 - Allumer une LED sur deux \n");
		printf("3 - Allumer une LED au hasard \n");
		scanf("%d", &choix);

		if (choix<1 || choix>4)
		{
		  printf("Le nombre choisis n'est pas valide.");
		}
		else
		{
		  printf("Le fichier param.h est prêt à être utilisé.");
		}

		return choix;
}


