#include "actions.h"

showFile()
{
	char *linesFile[LMAX];//Pour stocker les lignes du fichier
	FILE* csv = NULL;

	csv = ouvrirFichier();
	lireFichier(linesFile, csv);
}
