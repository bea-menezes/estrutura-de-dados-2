#include <stdio.h>

/* Aula 02 - Vetores */ 

int main(){
	
	int i, j, nota[3], soma=0;
	float media=0;
	
	for(i=0;i<3;i++){
		printf("Nota %d: ", i+1);
		scanf("%d", &nota[i]);
	}
	
	for(j=0; j<3; j++){
		soma += nota[j];
	}
	
	printf("Soma: %d\n", soma);
	
	media = (soma)/3;
	printf("Media do aluno: %2.f\n", media);

}


