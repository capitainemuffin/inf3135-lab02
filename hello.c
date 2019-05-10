#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int racineCarreEntiere(int x){

	return sqrt(x);

}


void boucleAvant(int x){

	for (int i = 0; i < x; ++i){

		printf("%d\n", i);
	}

}

void boucleApres(int x){

	for (int i = 0; i < x ; i++) {

		printf("%d\n", i);

	}


}



void main (int argc, char * argv[]){


	int x = atoi(argv[1]);
	//boucleAvant(x);
	//boucleApres(x);

	printf("%f", racineCarreEntiere(x));

}
