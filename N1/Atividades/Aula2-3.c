#include <stdio.h>
#include <time.h>

int main(){
	int i, j, vetA[5], aux;
	
	srand(time(NULL));
	
	for(i=0;i<5;i++){
		vetA[i] = rand() % 10;
	}
	
	printf("Vetor A:\t");
	for(i=0;i<5;i++){
		printf("%d\t", vetA[i]);
	}
	
	for(i=0;i<5;i++){
		for(j=i;j<5;j++){
			if(vetA[i] > vetA[j]){
				aux = vetA[i];
				vetA[i] = vetA[j];
				vetA[j] = aux; 
			}			
		}
	}
	
	printf("\n");
	
	printf("Vetor A ordenado:\t");
	for(j=0;j<5;j++){
		printf("%d\t", vetA[j]);
	}
}
