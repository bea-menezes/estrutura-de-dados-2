#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	ATIVIDADE 1
	
	a) Crie duas vari�veis inteiras e atribua valores. Com cada ponteiro espec�fico
	para cada vari�vel aponte para seus respectivos endere�os. Apresente em tela o
	endere�o das vari�veis e em seguida o conte�do de cada ponteiro.
	
	Quest�o: completa
	
*/

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int var1, var2;
	int *ponteiro1, *ponteiro2;
	
	var1 = 5;
	var2 = 2;
	
	ponteiro1 = &var1;
	ponteiro2 = &var2;
	
	printf("Endere�o das vari�veis: \n");
	printf("%d\n", ponteiro1);
	printf("%d\n\n", ponteiro2);
	
	printf("Conte�do dos ponteiros: \n");
	printf("%d\n", *ponteiro1);
	printf("%d\n", *ponteiro2);
	
	return 0;
}
