#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	ATIVIDADE 3
	
	Entenda o que est� acontecendo no programa e comente
	
	Quest�o: incompleta
	
*/

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int ch, *vetor;
	
	int fun(int ch, int *vetor){ // funcao com parametro uma variavel inteiro e um vetor inteiro
		int n = 7; // variavel n do tipo inteira que recebe o valor 7
		int in = 0, f = n, m; // variaveis do tipo inteiro in que recebe 0, f que recebe n, m sem nada
		
		while(in <= f){ //la�o de repeti��o while( enquanto o in for menor igual a f) == (in <= 7) o programa vai continuar rodando
			m = (in + f)/2; // m recebe a opera��o de media de (in + 7)/2; a cada la�o o in aumenta 1
			if(ch == vetor[m]){ // se o ch for igual ao vetor[m] // o resultado da operacao acima � o numero do vetor
				return m; // retorna o valor de m
			} else if(ch > vetor[m]){ // se ch for maior que o vetor[m]
				in = m+1;	// o in recebe m - 1
			} else{
				f = m-1; //
			}
		}
		
		return -1;
	}
	
	fun(ch, *vetor);
	
	return 0;
}
