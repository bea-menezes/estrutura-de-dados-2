#include <stdio.h>

// Fatorial é vc ter um numero e ir multiplicando ele pelos numeros menores que ele 

int main()
{
    int fatorial(int x);
    int numero, resultado;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    resultado = fatorial(numero);

    printf("O fatorial eh %d", resultado);

    return 0;
}

int fatorial(int x)
{
    int resultado;

    if (x == 0)
    {
        resultado = 1;
    }
    else
    {
        resultado = x * fatorial(x - 1);
    }

    return resultado;
}