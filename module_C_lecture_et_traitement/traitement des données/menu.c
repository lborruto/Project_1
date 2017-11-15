#include "menu.h"

int menu()
{
	int choix1, choix2; //Variable pour les choix

	printf("Que voulez-vous faire ?\n");
	printf("Selectionnez une option :\n");
	printf("1- Afficher les donnees telle qu'elle etait dans le fichier .csv.\n2- Afficher les donnees en ordre croissant / décroissant.\n3- Afficher des donnees pour un temps donnes.\n");
	printf("4- Afficher le nombre de lignes enregistrees.\n5- Afficher les extremum de pouls.\n");
	printf("6- Quitter l'application.\n");
	//Menu #1 pour afficher les donnees

	scanf("%i", &choix1);

	switch (choix1)
	{
	case 1:
		return choix1;
		break;

	case 2:
		printf("Voulez-vous : (Choisissez une valeur)\n");
		printf("1- Tri par ordre croissant\n2- Tri par ordre décroissant\n");
		//Menu #2 pour le choix de l'ordre de tri

		scanf("%d", &choix2);
		switch (choix2)
		{
		case 1:
			return 21;//Afficher les donnees en ordre croissant
			break;

		case 2:
			return 22;//Afficher les donnees en ordre décroissant
			break;

		default:
			printf("Erreur : Ce choix n'existe pas !\n");
			exit(10);
			break;
		}
		break;

		case 3:
			return choix1;
			break;

		case 4:
			return choix1;
			break;

		case 5:
			printf("Voulez-vous : (Choisissez une valeur)\n");
			printf("1- Afficher le pouls maximum\n2- Afficher le pouls minimum\n");

			scanf("%i", &choix2);
			switch (choix2)
			{
			case 1:
				return 51;//Affiche max
				break;

			case 2:
				return 52;//Affiche min
				break;

			default:
				printf("Erreur : Ce choix n'existe pas !\n");
				exit(10);
				break;
			}
			break;

			case 6:
				exit(0);

			default:
				printf("Erreur : Ce choix n'existe pas !\n");
				exit(10);
				break;
		}

}
