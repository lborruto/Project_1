#include "donnees.h"

void lectureFile()
{
	FILE* csv;
	char chaine[TAILLE]; //Pour enregistrer une chaîne de charactère
	int i;
	char **retourChaine[i]; //Pointeurs vers des chaînes de charactères


	csv = fopen("pouls.csv", "r+");


    if (csv == NULL)
    {
        printf("Impossible d'ouvrir le fichier test.txt");
        exit(1);
    }

	while (fgets(chaine, TAILLE, csv))
	{
		retourChaine[i]=malloc(sizeof(char)*(strlen(chaine)));

		if (chaine[strlen(chaine)-1]=='\n')
			{
				chaine[strlen(chaine)-1] ='\0';
			}

			strcpy(retourChaine[i],chaine);

			i++;
	}

    return 0;
}
