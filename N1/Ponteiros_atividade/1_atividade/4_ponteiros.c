#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	ATIVIDADE 1
	
	d) Mostre o primeiro elemento e o último elementos de uma PA de 10 elementos de razão R e primeiro elemento A1.
	
	Questão: incompleta
	
*/

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int razao, i;
	int *ponteiro;
	
	razao = 5;
	
	ponteiro = &razao;
	
//	printf("%d", *ponteiro);
	
	for(i>0;i<=10;i++){
		razao = razao + 5;
	}
	
	for(i>0;i<=10;i++){
		printf("%d\n", razao);
	}
	
	return 0;
}

