#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	ATIVIDADE 1
	
	b) Escreva um programa que contenha duas variáveis inteiras. Leia essas variáveis
	do teclado. Em seguida, compare seus endereços e exiba o conteúdo do maior endereço
	
	Questão: completa
	
*/

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int var1, var2;
	int *ponteiro1, *ponteiro2;
	
	printf("Insira um número: \n");
	scanf("%d", &var1);
	printf("Insira outro número: \n");
	scanf("%d", &var2);
	
	ponteiro1 = &var1;
	ponteiro2 = &var2;
	
	printf("Endereço do conteúdo das variáveis: \n\n");
	printf("Var1: %d\n", ponteiro1);
	printf("Var2: %d\n\n", ponteiro2);
	
	if(ponteiro1 > ponteiro2){
		printf("O maior endereço: %d\n", ponteiro1);
	} else{
		printf("O maior endereço:%d\n", ponteiro2);
	}
	
	return 0;
}





