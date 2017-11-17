#include "donnees.h"
#include "actions.h"
#include "menu.h"

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


int separationTempsEtPouls(FILE* csv)
{
	char tab[100][28];
	int i, j;
	int boum[20];
	int temps[20];
	int max;
	int lignesMax;
	donneesDuFichier pouls[40];

	lignesMax = numLine(csv);

	for (i=0; i<lignesMax; i++)
	{
		fscanf(csv, "%s", tab[i]);

		boum[i]=atoi(strtok(tab[i],";"));
		temps[i]=atoi(strtok(NULL,";"));

		donneesDuFichier data1 = {boum[i], temps[i]};
		pouls[i]=data1;

	}

	for (j=0; j<10; j++)
	{
		printf("%i %i\n", pouls[j].boum, pouls[j].temps);
	}


	max=(sizeof(pouls)/8);
	//printf("%i", max);

	return max;
}
