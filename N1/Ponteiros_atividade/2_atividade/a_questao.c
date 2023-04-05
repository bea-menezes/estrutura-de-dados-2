#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	ATIVIDADE 2
	
	a) Altere o código abaixo sem excluir os comandos das linhas 21, 22, 23 para apresentar a saída: [55] [60] [70]
	
	Questão: 
	
*/

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int vet[15];
	int *pt;
	
	vet[0] = 55;
	vet[1] = 60;
	vet[2] = 70;
	
	printf("[%d]", (pt));
	printf("[%d]", (pt));
	printf("[%d]", (pt));
	
	return 0;
}
