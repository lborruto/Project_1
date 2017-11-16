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
    char str[TAILLE]; //Pour enregistrer une cha�ne de charact�re
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
	char c;
	int i;
	int boum[20];
	int time[20];
	donneesDuFichier pouls[40];
	int max;

	for (i=0; i<2; i++)
	{
		fscanf(csv, "%s", tab[i]);

		boum[i]=atoi(strtok(tab[i], ";"));
		time[i]=atoi(strtok(NULL, ";"));

		donneesDuFichier data1 = {boum[i], time[i]};
		pouls[i]=data1;

		printf("%d\n%d\n",pouls[i].boum,pouls[i].time);
	}

	max=(sizeof(pouls)/8);
	//printf("%i", max);

	return max;
}
