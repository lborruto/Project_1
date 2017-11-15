#include "donnees.h"

void lectureFile()
{
	FILE* csv = NULL;
	char str[TAILLE]; //Pour enregistrer une chaîne de charactère
	int i;
	char **retourChaine[i]; //Pointeurs vers des chaînes de charactères


	csv = fopen("pouls.csv", "r");


    if (csv == NULL)
    {
        printf("Impossible d'ouvrir le fichier test.txt");
        exit(1);
    }

	while (fgets(str, TAILLE, csv))
	{
		retourChaine[i]=malloc(sizeof(char)*(strlen(str)));

		if (str[strlen(str)-1]=='\n')
			{
				str[strlen(str)-1] ='\0';
			}

			strcpy(retourChaine[i],str);
			i++;
	}

	fclose(csv);

    return 0;
}
