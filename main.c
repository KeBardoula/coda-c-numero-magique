#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){
	/* codes */
	/* Variable utiliser dans le code */
	int number;
	int i = 0;

	/* Le code ci dessous permet de transmettre un nombre entier aléatoire entre 1 et 100 */
	srand(time(NULL));
	int random_number = rand() % 100 + 1;

	/* Choix du numéros magique */
	printf("Bonjour !\nQu'elle est le numéros que j'ai en tête ?\nAttention mon numéros est compris entre 1 et 100.\n");
	scanf("%d", &number);

	do{
		/* Début du jeu*/
		/* Si le numétos et différent le jeu continue */
		if(number != random_number){
			printf("Raté ! Veuillez réessayer !\n");
			scanf("%d", &number);
			i++;
		} 
		/* Le code si dessous donne un nombre d'essai maximum étant de 10 puisque i commence à 0 */
		/* Si le joueur ne trouve pas le bon numéros alors la partie prend fin */
		if (i == 9){
			printf("Dommage, vous avez perdu ! Le numéros à deviner était %d", random_number);
			exit(0);
		}
		/* Le code ci dessous permet de féliciter le joueur ci il trouve le bon numéros */
		if (number == random_number){
			printf("Bravo ! Vous avez trouver mon numéros ! Le numéros était de %d\n", random_number);
		} 
	}while(number != random_number);

	exit(0);
}

/* Code bonus
int i = 0;

i++;

if (i == 9){
printf("Dommage, vous avez perdu ! Le numéros à deviner était %d", random_number);
exit(0);
}
*/