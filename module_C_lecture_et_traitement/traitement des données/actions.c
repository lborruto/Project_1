#include "actions.h"

int showFile()
{
	FILE* csv = NULL;//Variable contenant le fichier
	char *linesFile[LMAX];//Pour stocker les lignes du fichier

	csv = ouvrirFichier();
	lireFichier(linesFile, csv);

	fclose(csv);
	return 0;
}

int croissant()
{
	FILE* csv = NULL;

	csv = ouvrirFichier();


	fclose(csv);
	return 0;
}
