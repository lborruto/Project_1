#include <stdlib.h>
#include <stdio.h>
#include "donnees.h"

int lectureFile()
{
	FILE* csv;
	csv = fopen("pouls.csv", "r+");


    if (csv == NULL)
    {
        printf("Impossible d'ouvrir le fichier test.txt");
    }

    return 0;
}
