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
	int typeDeTri;

	separationTempsEtPouls(csv);
	typeDeTri = menuTri();

	fclose(csv);
	return 0;
}
