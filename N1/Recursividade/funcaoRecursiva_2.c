#include <stdio.h>

// Aula - 2 
// Exemplo: Imprimir todos os numeros de n ate 0

/*
    Na recursao é necessario ter um ponto de parada
    Pilha de recursao
*/

void imprimir(int x){

    if(x == 0){
        printf("%d", x);
    } else{
        printf("%d\n", x);
        imprimir(x - 1);
        //printf("%d\n", x);
    }

}

int main()
{
    int n;

    printf("Insira um numero maior que 0: \n");
    scanf("%d", &n);

    imprimir(n);
    
    return 0;
}
