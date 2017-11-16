#include "actions.h"

int showFile(FILE* csv)
{
    char *linesFile[LMAX];//Pour stocker les lignes du fichier

    lireFichier(linesFile, csv);

    fclose(csv);
    return 0;
}

int croissant(FILE* csv)
{
    int max;

    max = separationTempsEtPouls(csv);

    int typeDeTri;

    typeDeTri = menuTri();

    triBoum(max);

    fclose(csv);
    return 0;
}

void triBoum(int max)
{
    //int tab [6]= {0, 5, 56, 23, 1, 42, 2};
    int i;
    int j;
    int k;

    max=(sizeof(pouls)/8);

    for (i = 0; i<(max - 1); i++)
    {
        for (j=0; j<max - i - 1; j++)
        {
            if (pouls[j].boum>pouls[j+1].boum)
            {
                k=pouls[j].boum;
                pouls[j].boum=pouls[j+1].boum;
                pouls[j+1].boum=k;

            }

        }

    }
      for ( i = 0 ; i < max ; i++ )
     {printf("%d\n", pouls[i].boum);}

}

