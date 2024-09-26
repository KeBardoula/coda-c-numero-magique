#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){
	/* codes */
	/* Variable utiliser dans le code */
	int number;
	int i = 0;
	int recommencer;

	/* Le code ci dessous permet de transmettre un nombre entier aléatoire entre 1 et 100 */
	srand(time(NULL));
	int random_number = rand() % 100 + 1;

	/* Choix du numéros magique */
	printf("Bonjour !\nQu'elle est le numéros que j'ai en tête ?\nAttention mon numéros est compris entre 1 et 100.\n");
	scanf("%d", &number);

	do{
		/* Début du jeu*/
		/* Si le nombre est supérieur à 100 ou inférieur à 1 alors la partie prend fin */
		if((number > 100) || (number < 1)){
			printf("Le numéros saisi n'est pas valide car supérieur à 100 !\n");
			exit(0);
		} 
		/* Si le numétos et différent le jeu continue */
		if(number != random_number){
			if (number < random_number){
				printf("C'est plus !\n");
			} else if (number > random_number){
				printf("C'est moins !\n");
			}
			printf("Raté ! Veuillez réessayer !\n");
			scanf("%d", &number);
			i++;
		} 
		/* Le code si dessous donne un nombre d'essai maximum étant de 10 puisque i commence à 0 */
		/* Si le joueur ne trouve pas le bon numéros alors vous avez le choix entre continuer et recommencer */
		if (i == 9){
			printf("Dommage, vous avez perdu ! Le numéros à deviner était %d\n", random_number);
			printf("Voulez vous recommencer ? Tapez 1 si oui sinon taper 0.\n");
			scanf("%d", &recommencer);

			if(recommencer == 1){
				i = -1;
			} else if (recommencer == 0){
				exit(0);
			}
		}
		/* Le code ci dessous permet de féliciter le joueur ci il trouve le bon numéros */
		if (number == random_number){
			printf("Bravo ! Vous avez trouver mon numéros ! Le numéros était %d\n", random_number);
		} 
	}while(number != random_number);

	exit(0);
}

/* Code bonus */
/*
int i = 0;
int recommencer;

i++;

if((number > 100) || (number < 1)){
	printf("Le numéros saisi n'est pas valide car supérieur à 100 !\n");
	exit(0);
} 

if (i == 9){
	printf("Dommage, vous avez perdu ! Le numéros à deviner était %d", random_number);
	printf("Voulez vous recommencer ? Tapez 1 si oui sinon taper 0.\n");
	scanf("%d", recommencer);

	if(recommencer == 1){
		i = -1;
	} else if (recommencer == 0){
		exit(0);
	}

}
*/