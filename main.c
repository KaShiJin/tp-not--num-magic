#include <stdlib.h> //Contient les fonctions basiques générales pour la bibliotèque standard (comme le calcul, les valeurs arythmétiques etc...)
#include <stdio.h> //Contient les commandes de bases pour faire fonctionner le code (printf, scanf...)
#include <time.h> //Librarie relatif au temps, durée, date, heure etc... -> Source: google (Aucune connaissance de cette bibliothèque avant...)
int main()
{
		srand(time(NULL));
	int random_number = rand() % 100 + 1;
	int insert_number;
	double nb_de_coup = 1;
	int crack = 505;
	printf("          Projet noté: Le numéro magique !\n\nRègle: Veuillez saisir un nombre entre 1 et 100.\nCondition de victoire: Trouvez le bon nombre, bonne chance :) !\n\nVeuillez saisir votre nombre: ");
	scanf("%d", &insert_number);
	int num_dis = random_number - insert_number;
	time_t debut = time(NULL);

	while(insert_number == 0 || insert_number > 100 || insert_number == crack)
	{
		if(insert_number == crack)
		{
			printf("Le numéro que vous cherchez est %d, mais chut ne le dites pas !\nVeuillez saisir votre nombre:", random_number);
			scanf("%d", &insert_number);
			num_dis = random_number - insert_number;
		}
		else if(insert_number == 0 || insert_number > 100 )
		{
			printf("Saisie incorrect, veuillez resaisir votre nombre (entre 1 et 100):");
			scanf("%d", &insert_number);
			nb_de_coup = nb_de_coup +1;		
		}
	}	
	if(insert_number>0 && insert_number <=100)
	{
		while(insert_number != random_number)
		{
			if(insert_number < random_number && abs(num_dis) >= 80) 
			{
				printf("La lune est si belle vue de la terre... mais tu y es presque... tu devrais essayer un peu plus haut !\n\nRéessaye ! :");
				scanf("%d", &insert_number);
				num_dis = random_number - insert_number;
				nb_de_coup = nb_de_coup +1;	
			}
			else if(insert_number < random_number && abs(num_dis) >= 50 && abs(num_dis) < 80 ) //google -> abs() pour vérifier la commande
			{	
				printf("Le nombre cherché est beaucoup plus grand ! Et malheureusement pour toi tu es fort fort lointain de lui haha, merci l'Âne !\n\nRéessaye :) :");
				scanf("%d", &insert_number);
				num_dis = random_number - insert_number;			
				nb_de_coup = nb_de_coup +1;		
			}
			else if(insert_number< random_number && abs(num_dis) >=30 && abs(num_dis) < 50)
			{
				printf("Le nombre cherché est plus grand ! Mais tu n'es pas si loin ! Courage !\n\nRéessaye ! :");
				scanf("%d", &insert_number);
				num_dis = random_number - insert_number;			
				nb_de_coup = nb_de_coup  +1;	
			}
			else if(insert_number < random_number && abs(num_dis) >= 15 && abs(num_dis) < 30)
			{
				printf("Tu te réchauffes ! Quelle belle journée ensoleillée ! Il faudrait que tu montes plus en degré ;)\n\nRéesaye ! :");
				scanf("%d", &insert_number);
				num_dis = random_number - insert_number;
				nb_de_coup = nb_de_coup +1;	
			}
			else if(insert_number < random_number && abs(num_dis) >= 5 && abs(num_dis) < 15)
			{
				printf("C'est le sauna ici ! t'y es presque ! encore un peu plus chaud et c'est parfait !\n\nRéessaye ! :");
				scanf("%d", &insert_number);
				num_dis = random_number - insert_number;			
				nb_de_coup = nb_de_coup +1;	
			}
			else if(insert_number < random_number && abs(num_dis) >= 1 && abs(num_dis) < 5)
			{
				printf("Même Escanor aurait chaud... Quelques centimètre plus haut et tu touches le soleil !\n\nRéessaye ! :");
				scanf("%d", &insert_number);
				num_dis = random_number - insert_number;	
				nb_de_coup = nb_de_coup  +1;	
			}
			else if(insert_number > random_number && abs(num_dis) >= 80)
			{
				printf("La terre est bleu ? Vu de l'espace c'est pas trop ça... mais tu y es presque... tu devrais essayer un peu plus bas !\n\nRéessaye ! :");
				scanf("%d", &insert_number);
				num_dis = random_number - insert_number;	
				nb_de_coup = nb_de_coup +1;	
			}
			else if(insert_number > random_number && abs(num_dis) >= 50 && abs(num_dis) < 80 ) //google -> abs() pour vérifier la commande
			{
				printf("Le nombre cherché est beaucoup plus petit ! Et malheureusement pour toi tu es fort fort lointain de lui haha, merci l'Âne !\n\nRéessaye :) :");
				scanf("%d", &insert_number);
				num_dis = random_number - insert_number;
				nb_de_coup = nb_de_coup +1;	
			}
			else if(insert_number > random_number && abs(num_dis) >=30 && abs(num_dis) < 50)
			{
				printf("Le nombre cherché est plus petit ! Mais tu n'es pas si loin ! Courage !\n\nRéessaye ! :");
				scanf("%d", &insert_number);
				num_dis = random_number - insert_number;		
				nb_de_coup = nb_de_coup +1;	
			}
			else if(insert_number > random_number && abs(num_dis) >= 15 && abs(num_dis) < 30)
			{
				printf("Tu te réchauffes ! Le noyau de la terre n'est plus très loin, descends encore plus en profondeur ! ;)\n\nRéesaye ! :");
				scanf("%d", &insert_number);
				num_dis = random_number - insert_number;			
				nb_de_coup = nb_de_coup +1;
			}
			else if(insert_number > random_number && abs(num_dis) >= 5 && abs(num_dis) < 15)
			{
				printf("C'est le sauna ici ! t'y es presque ! Le noyau est tout proche !\n\nRéessaye ! :");
				scanf("%d", &insert_number);
				num_dis = random_number - insert_number;
				nb_de_coup = nb_de_coup +1;		
			}
			else if(insert_number > random_number && abs(num_dis) >= 1 && abs(num_dis) < 5)
			{
				printf("Même Escanor aurait chaud... Quelques centimètre plus bas et le noyau est à portée de main !\n\nRéessaye ! :");
				scanf("%d", &insert_number);
				num_dis = random_number - insert_number;	
				nb_de_coup = nb_de_coup +1;		
			}
		}
	}
		time_t fin = time(NULL);
		double temps_ecoule = difftime(fin, debut );
		printf("Bravo ! Tu trouvé le nombre magique en %.0f coup(s) et %.0f secondes !\n", nb_de_coup, temps_ecoule);
		exit(0);
}	

