#include <stdlib.h>
#include <stdio.h>

#include "menu.h"
#include "donnees.h"

#define LMAX 100

int showFile(FILE* csv);

int croissant(FILE* csv);

void triBoum(int maxTaille, donneesDuFichier pouls[]);

int decroissant();

int poulsForTime();

int numLine(FILE* csv);

int maxPouls();

int minPouls();
