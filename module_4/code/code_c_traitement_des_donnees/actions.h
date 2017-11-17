#ifndef ACTIONS_H//Permet d'�viter de d�finir deux fois le .h
#define ACTIONS_H

#include "donnees.h"

#include <stdio.h>
#include <stdlib.h>

#define LMAX 100

int showFile(FILE* csv);

int croissant(FILE* csv);

void triBoum(int maxTaille, donneesDuFichier pouls[]);

void triTime(int maxTaille, donneesDuFichier pouls[]);

int decroissant(FILE* csv);

void reverseTriBoum(int maxTaille, donneesDuFichier pouls[]);

void reverseTriTime(int maxTaille, donneesDuFichier pouls[]);

int poulsForTime();

int numLine(FILE* csv);

int maxPouls();

int minPouls();


#endif
