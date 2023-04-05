#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	ATIVIDADE 1
	
	a) Crie duas variáveis inteiras e atribua valores. Com cada ponteiro específico
	para cada variável aponte para seus respectivos endereços. Apresente em tela o
	endereço das variáveis e em seguida o conteúdo de cada ponteiro.
	
	Questão: completa
	
*/

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int var1, var2;
	int *ponteiro1, *ponteiro2;
	
	var1 = 5;
	var2 = 2;
	
	ponteiro1 = &var1;
	ponteiro2 = &var2;
	
	printf("Endereço das variáveis: \n");
	printf("%d\n", ponteiro1);
	printf("%d\n\n", ponteiro2);
	
	printf("Conteúdo dos ponteiros: \n");
	printf("%d\n", *ponteiro1);
	printf("%d\n", *ponteiro2);
	
	return 0;
}
