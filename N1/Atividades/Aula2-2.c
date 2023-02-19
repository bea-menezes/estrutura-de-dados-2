#include <stdio.h>
#include <time.h>

int main(){
	int i, vetA[5], vetB[5], vetNovo[5];
	
	srand(time(NULL));
	
	for(i=0; i<5;i++){
		vetA[i] = rand() % 10;
		vetB[i] = rand() % 10;
	}
	
	for(i=0;i<5;i++){
		vetNovo[i] = vetA[i] + vetB[i];
	}
	
	printf("Vetor A:\t");
	for(i=0; i<5;i++){
		printf("%d\t", vetA[i]);
	}
	printf("\n");
	
	printf("Vetor B:\t");
	for(i=0; i<5;i++){
		printf("%d\t", vetB[i]);
	}
	printf("\n");
	
	printf("Vetor Novo:\t");
	for(i=0; i<5;i++){
		printf("%d\t", vetNovo[i]);
	}
}


