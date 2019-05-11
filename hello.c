#include <stdio.h>
#include <math.h>
#include <stdlib.h>


// déclaration 
double racineCarre(int x);
int boucleAvant(int x);
int boucleApres(int x);
void ligneCommande(int taille, char * arguments[]);
int somme(int taille, char * arguments[]);

// main 
int main(int argc, char * argv[]){

	//int chiffre = atoi(argv[1]);
	//int racine = racineCarre(chiffre);
	//printf("La racine de %d est %d \n", chiffre, racine);
	//boucleAvant(chiffre);
	//boucleApres(chiffre);
	//ligneCommande(argc ,argv);

	printf("Résultat : %d", somme(argc, argv)); 
}


//implementation
double racineCarre(int x){


	return (int) sqrt(x);

}

int boucleAvant(int x){

	for (int i = 0; i < x; i++) {

		printf("%d\n", i);
	}

	return 0;

}

int boucleApres(int x){

	for (int i = 0 ; i < x ; ++i){

		printf("%d\n", i);

	}
	return 0;
}


void ligneCommande(int taille, char * arguments[]){

	for (int i = 0; i < taille; i++){

		printf("Argument #%d : %s\n", i, arguments[i]);
	}
}

int somme(int taille, char * arguments []){

	int somme = 0; 

	for (int i = 0; i < taille; i++){

		int chiffre = atoi(arguments[i]);
		somme += chiffre;
		
	}

	return somme;

}
