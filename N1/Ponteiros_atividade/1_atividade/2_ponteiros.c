#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	ATIVIDADE 1
	
	b) Escreva um programa que contenha duas vari�veis inteiras. Leia essas vari�veis
	do teclado. Em seguida, compare seus endere�os e exiba o conte�do do maior endere�o
	
	Quest�o: completa
	
*/

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int var1, var2;
	int *ponteiro1, *ponteiro2;
	
	printf("Insira um n�mero: \n");
	scanf("%d", &var1);
	printf("Insira outro n�mero: \n");
	scanf("%d", &var2);
	
	ponteiro1 = &var1;
	ponteiro2 = &var2;
	
	printf("Endere�o do conte�do das vari�veis: \n\n");
	printf("Var1: %d\n", ponteiro1);
	printf("Var2: %d\n\n", ponteiro2);
	
	if(ponteiro1 > ponteiro2){
		printf("O maior endere�o: %d\n", ponteiro1);
	} else{
		printf("O maior endere�o:%d\n", ponteiro2);
	}
	
	return 0;
}





