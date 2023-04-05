#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	ATIVIDADE 1
	
	c) Some dois números e mostre o resultado através do ponteiro
	
	Questão: completa
	
*/

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int var1, var2, soma;
	int *ponteiro1, *ponteiro2;
	
	var1 = 5;
	var2 = 6;
	
	ponteiro1 = &var1;
	ponteiro2 = &var2;
	
	soma = (*ponteiro1 + *ponteiro2);
	
	printf("Soma: de %d + %d = %d", var1, var2, soma);
	
	return 0;
}


