#include <stdio.h>

void square(int x){
	printf("O quadrado e %d\n", x*x);
}

int main(){
	int n;
	
	printf("Informe um numero: \n");
	scanf("%d", &n);
	square(n);
	printf("Pronto!\n");
}
