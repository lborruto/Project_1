#include "generationCode.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>

using namespace std;

void ecriture(int choix)
{

	fstream fichier;
	fichier.open("param.h");

	fichier << choix;

	fichier.close();

}
