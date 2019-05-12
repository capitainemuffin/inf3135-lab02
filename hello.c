#include <stdio.h>
#include <math.h>
#include <stdlib.h>


// déclaration 
double racineCarre(int x);
int boucleAvant(int x);
int boucleApres(int x);
void ligneCommande(int taille, char * arguments[]);
int somme(int taille, char * arguments[]);
int estTrie(int taille, char * arguments []);
int elementFrequent(int taille, char * arguments[]);
// main 
int main(int argc, char * argv[]){

	int chiffre = atoi(argv[1]);
	int racine = racineCarre(chiffre);
	printf("La racine de %d est %d \n", chiffre, racine);
	//boucleAvant(chiffre);
	//boucleApres(chiffre);
	//ligneCommande(argc ,argv);

	//printf("Résultat : %d", somme(argc, argv));
	//printf("%d\n", estTrie(argc, argv)); 
	//printf("Valeur récurrente : %d\n", elementFrequent(argc, argv)); 
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

int estTrie(int taille, char * tableau[]){

	for (int i = taille-1 ; i > 0 ; i--) {

		if (atoi(tableau[i]) < atoi(tableau[i-1])){

			return 1; 
		}
	}	

	return 0;

} 

int elementFrequent(int taille, char * tableau[]){

	int valeur_recurrente = atoi(tableau[1]);
	int occurence = 1;

	for (int i = 1 ; i < taille-1 ; i++ ){
	
		int tmp_occurence = 1;

		for(int j = i+1 ; j < taille ; j++) {
								
			if(atoi(tableau[i]) == atoi(tableau[j])) {
					
				tmp_occurence++;					
					
			}
			
		}

		if (tmp_occurence > occurence){

			valeur_recurrente = atoi(tableau[i]);
			occurence = tmp_occurence;
 
		}
	}

	return valeur_recurrente;

}
