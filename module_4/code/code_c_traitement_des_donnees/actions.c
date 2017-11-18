#include "actions.h"
#include "menu.h"
#include "donnees.h"

int showFile(FILE* csv)
{
    char *linesFile[LMAX];//Pour stocker les lignes du fichier

    lireFichier(linesFile, csv);

    fclose(csv);
    return 0;
}

int croissant(FILE* csv)
{
    int maxTaille;

    maxTaille = separationTempsEtPouls(csv);
    //printf("maxTaille =%i", maxTaille);

    int typeDeTri;

    typeDeTri = menuTri();

    switch (typeDeTri)
    {
    case 1:
        triBoum(maxTaille, 1);
        break;

    case 2:
        triTime(maxTaille);
        break;

    default:
        printf("Erreur fatale !\n");
        exit(-2);
    }

    fclose(csv);
    return 0;
}

void triBoum(int maxTaille, int print)
{
    int i;
    int j;
    donneesDuFichier k;

    maxTaille=(sizeof(pouls)/8);
    //printf("Premier boum = %d\n", pouls[0].boum);
    for (i = 0; i<(maxTaille - 1); i++)
    {
        for (j=0; j<maxTaille - i - 1; j++)
        {
            if (pouls[j].boum>pouls[j+1].boum)
            {
                k=pouls[j];
                pouls[j]=pouls[j+1];
                pouls[j+1]=k;

            }

        }

    }

    if (print == 1)
	{
	for ( i = 0 ; i < maxTaille ; i++ )
    {
        if (pouls[i].boum > 0)
        {
            printf("pouls = %d pour %d millisecondes\n", pouls[i].boum, pouls[i].temps);
        }

    }
	}

}

void triTime(int maxTaille)
{
    int i;
    int j;
    donneesDuFichier k;

    maxTaille=(sizeof(pouls)/8);
    //printf("%d\n", pouls[1].temps);
    for (i = 0; i<(maxTaille - 1); i++)
    {
        for (j=0; j<maxTaille - i - 1; j++)
        {
            if (pouls[j].temps>pouls[j+1].temps)
            {
                k=pouls[j];
                pouls[j]=pouls[j+1];
                pouls[j+1]=k;

            }

        }

    }
    for ( i = 0 ; i < maxTaille ; i++ )
    {
        if (pouls[i].boum > 0)
        {
            printf("temps = %d. Son pouls correspondant est %d\n", pouls[i].temps, pouls[i].boum);
        }
    }
}

int decroissant(FILE* csv)
{
    int maxTaille;

    maxTaille = separationTempsEtPouls(csv);

    int typeDeTri;

    typeDeTri = menuTri();

    switch (typeDeTri)
    {
    case 1:
        reverseTriBoum(maxTaille);
        break;

    case 2:
        reverseTriTime(maxTaille);
        break;

    default:
        printf("Erreur fatale !\n");
        exit(-2);
    }

    fclose(csv);
    return 0;
}

void reverseTriBoum(int maxTaille)
{
    int i;
    int j;
    donneesDuFichier k;

    maxTaille=(sizeof(pouls)/8);
    //printf("%d\n", pouls[1].boum);
    for (i = 0; i>(maxTaille - 1); i++)
    {
        for (j=0; j>maxTaille - i - 1; j++)
        {
            if (pouls[j].boum<pouls[j+1].boum)
            {
                k=pouls[j];
                pouls[j]=pouls[j+1];
                pouls[j+1]=k;

            }

        }

    }
    for ( i = 0 ; i < maxTaille ; i++ )
    {
        if (pouls[i].boum > 0)
        {
            printf("pouls = %d\n pour %d\n millisecondes\n", pouls[i].boum, pouls[i].temps);
        }

    }
}

void reverseTriTime(int maxTaille)
{
    int i;
    int j;
    donneesDuFichier k;

    maxTaille=(sizeof(pouls)/8);
    //printf("%d\n", pouls[1].temps);
    for (i = 0; i>(maxTaille - 1); i++)
    {
        for (j=0; j>maxTaille - i - 1; j++)
        {
            if (pouls[j].temps<pouls[j+1].temps)
            {
                k=pouls[j];
                pouls[j]=pouls[j+1];
                pouls[j+1]=k;

            }

        }

    }
    for ( i = 0 ; i < maxTaille ; i++ )
    {
        if (pouls[i].boum > 0)
        {
            printf("pouls = %d pour %d millisecondes\n", pouls[i].boum, pouls[i].temps);
        }

    }
}

int poulsForTime(FILE* csv)
{
    int tempsChoisis;
    int demi;
    int emplacement=0;
    int nbrLines;
    int rechercheTerminee = 1;

    separationTempsEtPouls(csv);

    tempsChoisis = menuPoulsTime();
    nbrLines = numLine(csv, 0);

    //Début de la recherche

    while (rechercheTerminee)
    {
        int borneSuperieure = nbrLines - 1, borneInferieure = 0;

        demi = (borneSuperieure + borneInferieure) / 2;

        if (tempsChoisis < pouls[demi].temps)
        {
            borneSuperieure = demi - 1;
        }
        else
        {
            borneInferieure = demi + 1;
        }

        if (borneSuperieure<borneInferieure || tempsChoisis == pouls[demi].temps)
        {
            rechercheTerminee = 0;
        }

        if (tempsChoisis == pouls[demi].temps)
		{
			printf("Pour le temps %d, le pouls valait %d\n", pouls[demi].temps, pouls[demi].boum);
		}
		else
		{
			printf("Le temps %d n'a pas été trouvé.\n", tempsChoisis);
			exit(50);
		}
    }

    fclose(csv);
    return 0;
}

int numLine(FILE* csv, int i)
{
    int nbrLines = 1;//Initialise le nombre de lignes
    char c;

    while ((c = getc(csv)) != EOF)
    {
        if (c == '\n')
            nbrLines++;

    }
    //Comptage des \n (nombres de lignes)

    if (i == 1)
    {
        printf("Il y a %i lignes dans le fichier .csv\n", nbrLines);
    }

    return nbrLines;
}

int maxPouls(FILE* csv)
{
    int nbrLines, maxTaille;

    maxTaille = separationTempsEtPouls(csv);

    nbrLines = numLine(csv, 0);

    triBoum(maxTaille, 0);

    printf("Le maximum de pouls est %i\n", pouls[nbrLines-1].boum);

    return 0;
}

int minPouls(FILE* csv)
{
    int maxTaille;

    maxTaille =separationTempsEtPouls(csv);

    triBoum(maxTaille, 0);

    printf("Le minimum de pouls est %i\n", pouls[0].boum);

    return 0;
}

int moyennePouls(FILE* csv)
{
	int moyenne;
	int i;
	int maxTaille = separationTempsEtPouls(csv);
	int nbrLines = numLine(csv, 0);

	moyenne = pouls[0].boum;

	for (i = 1; i<nbrLines - 1; i++)
	{
		moyenne = pouls[i].boum;
	}

	moyenne = moyenne / i;

	printf("La moyenne du pouls est de %d", moyenne);

	return 0;
}
