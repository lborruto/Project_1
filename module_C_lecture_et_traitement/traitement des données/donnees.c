#include "donnees.h"

FILE* ouvrirFichier()
{
	FILE* csv = NULL;
    csv = fopen("donnees.csv", "r");


    if (csv == NULL) //Verification de l'ouverture du fichier
    {
        printf("Impossible d'ouvrir le fichier donnees.csv");
        exit(-1);
    }

    return csv;
}


void lireFichier(char** retourChaine, FILE* csv)
{
    char str[TAILLE]; //Pour enregistrer une chaîne de charactère
    int i = 0;

    while (fgets(str, TAILLE, csv) != NULL)
    {
        retourChaine[i]=malloc(sizeof(char)*(strlen(str)));

        if (str[strlen(str)-1]=='\n')
        {
            str[strlen(str)-1] ='\0';
        }

        strcpy(retourChaine[i],str);
        printf("%s\n", retourChaine[i]);
        i++;
    }
}

donneesDuFichier separationTempsEtPouls(char** retourChaine, FILE* csv)
{
	int i = 0;
	char str[TAILLE];
	char c;



	while((c = fgetc (csv)) != EOF)
	{
		if (c == ';' || c == '\n')
		{
			c = '\0';
		}
	}
}
