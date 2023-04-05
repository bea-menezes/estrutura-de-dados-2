#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	ATIVIDADE 1
	
	e) Crie um programa que contenha um array contendo  5 elementos inteiros. Leia esse array do teclado e imprima o endereço
	
	Questão: incompleta
	
*/

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int vet[5], *ponteiro, i;
	
	ponteiro = &vet[5];
	
	for(i>0;i<5;i++){
		printf("Insira o número: \n");
		scanf("%d", &vet[i]);
	}
	
	for(i>0;i<5;i++){
		printf("d%\n", vet[i]);
	}
	
	return 0;
}
