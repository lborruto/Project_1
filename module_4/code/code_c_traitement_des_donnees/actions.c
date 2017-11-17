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

    int typeDeTri;

    typeDeTri = menuTri();

    switch (typeDeTri)
    {
    case 1:
        triBoum(maxTaille, pouls);
        break;

    case 2:
        triTime(maxTaille, pouls);
        break;

    default:
        printf("Erreur fatale !\n");
        exit(-2);
    }

    fclose(csv);
    return 0;
}

void triBoum(int maxTaille, donneesDuFichier pouls[])
{
    int i;
    int j;
    donneesDuFichier k;

    maxTaille=(sizeof(pouls)/8);
    printf("%d\n", pouls[1].boum);
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
    /* for ( i = 0 ; i < maxTaille ; i++ )
    {printf("%d\n", pouls[i].boum);}*/

}

void triTime(int maxTaille, donneesDuFichier pouls[])
{
    int i;
    int j;
    donneesDuFichier k;

    maxTaille=(sizeof(pouls)/8);
    printf("%d\n", pouls[1].temps);
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
    /* for ( i = 0 ; i < maxTaille ; i++ )
    {printf("%d\n", pouls[i].boum);}*/
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
        reverseTriBoum(maxTaille, pouls);
        break;

    case 2:
        reverseTriTime(maxTaille, pouls);
        break;

    default:
        printf("Erreur fatale !\n");
        exit(-2);
    }

    fclose(csv);
    return 0;
}

void reverseTriBoum(int maxTaille, donneesDuFichier pouls[])
{
    int i;
    int j;
    donneesDuFichier k;

    maxTaille=(sizeof(pouls)/8);
    printf("%d\n", pouls[1].boum);
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
    /* for ( i = 0 ; i < maxTaille ; i++ )
    {printf("%d\n", pouls[i].boum);}*/
}

void reverseTriTime(int maxTaille, donneesDuFichier pouls[])
{
    int i;
    int j;
    donneesDuFichier k;

    maxTaille=(sizeof(pouls)/8);
    printf("%d\n", pouls[1].temps);
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
    /* for ( i = 0 ; i < maxTaille ; i++ )
    {printf("%d\n", pouls[i].boum);}*/
}

int poulsForTime(FILE* csv)
{
    int tempsChoisis;
	int i;
	int emplacement=0;
	int nbrLines;

    tempsChoisis = menuPoulsTime();
    nbrLines = numLine(csv);

	//Début de la recherche

    for(i=0; i<=nbrLines-1; i++)
    {
        if(pouls[i].temps==tempsChoisis)
        {
            emplacement=i+1;
            i=2*nbrLines;
        }
    }
    if(i==2*nbrLines+1)
    {
        printf("Le pouls correspondant au temps %i est : %i\n", pouls[emplacement].temps, pouls[emplacement].boum);
    }
    else
    {
        printf("Le temps %i n'existe pas\n", tempsChoisis);
    }

    fclose(csv);
	return 0;
}

int numLine(FILE* csv)
{
    int nbrLines = 1;//Initialise le nombre de lignes
    char c;

    while ((c = getc(csv)) != EOF)
    {
        if (c == '\n')
            nbrLines++;

    }
    //Comptage des \n (nombres de lignes)

    printf("Il y a %i lignes dans le fichier .csv\n", nbrLines);

    return nbrLines;
}

int maxPouls(FILE* csv)
{
	int nbrLines;

	nbrLines = numLine(csv);

	printf("Le maximum de pouls est %i", pouls[nbrLines].boum);

	return 0;
}

int minPouls()
{
	printf("Le minimum de pouls est %i", pouls[0].boum);

	return 0;
}
