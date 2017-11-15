#include "donnees.h"

void lectureFile()
{
	FILE* csv = NULL;
	char str[TAILLE]; //Pour enregistrer une cha�ne de charact�re
	int i;
	char **retourChaine[i]; //Pointeurs vers des cha�nes de charact�res


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
