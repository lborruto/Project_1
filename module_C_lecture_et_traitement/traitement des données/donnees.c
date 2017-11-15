#include "donnees.h"

int lectureFile()
{
	FILE* csv;
	csv = fopen("pouls.csv", "r+");


    if (csv == NULL)
    {
        printf("Impossible d'ouvrir le fichier test.txt");
        exit(1);
    }



    return 0;
}
