#include <stdio.h>

int produto(int x, int y){
	return (x*y);
}

int main(){
	
	int n1, n2, resultado;
	
	printf("Insira um numero: ");
	scanf("%d", &n1);
	printf("Insira um outro numero: ");
	scanf("%d", &n2);
	
	resultado = produto(n1,n2);
	
	printf("Resultado: %d", resultado);
}
