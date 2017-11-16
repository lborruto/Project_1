#include "generationCode.h"
#include "menu.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>


int main(int argrc, char *argv[])
{
	int choix = menu();
	ecriture(choix);
	return 0;
}
