
/*  Busca Binária - Iterativa e Recursiva



    O vetor precisa estar ordenado

    Precisamos saber onde começa e termina

    vetor[10]: de 0 a 9                        Meio                     
                                              |
                                             \/                           novo meio
Índice       0       1       2       3       [4]       5       6       [7]       8       9
Valores      13      14      19      43      47      52      65      82      89      91

    CHAVE: 47 - o que eu estou buscando
    INICIO: 0 
    FIM: 9
    MEIO: 4      - (inicio + fim)/2 

    CHAVE: 82 - o que eu estou buscando
    INICIO: 5 (meio + 1)
    FIM: 9
    MEIO: 7     - (inicio + fim)/2

    O elemento que eu estou procurando é igual ao meio?
    O elemento que eu estou procurando é maior que o meio?
    O elemento que eu estou procurando é menor do que o elemento meio? NAO, entt significa que se o elemento estiver no vetor, ele so pode estar do indice 5 para frente

    A partir do momento que o inicio for maior que o fim, nao pertence mais ao vetor e o algoritmo pode ser encerrado.

*/

#include <stdio.h>
#include <stdlib.h>

int buscaBinariaRecursiva(int *vet, int chave, int inicio, int fim){
    int meio;

    if(inicio <= fim){
        meio = (inicio + fim)/2;

        if(chave == vet[meio]){
            return meio;
        } else{
            if(chave < vet[meio]){
                return buscaBinariaRecursiva(vet, chave, inicio, meio - 1);
            } else{
                return buscaBinariaRecursiva(vet, chave, meio + 1, meio - 1);
            }
        }
    }
    return -1;  // elemento não encontrado
}

int buscaBinariaIterativa(int *vet, int chave, int fim){
    int inicio = 0;
    int meio = (inicio + fim)/2;

    while(inicio <= fim){
        if(chave == vet[meio]){
            return meio;
        } else{
            if (chave < vet[meio])
            {
                fim = meio - 1;
            } else
            {
                inicio = meio + 1;
            }
        }
        meio = (inicio + fim)/2;
    }

    return -1;
}

int main(){
    int vet[10] = {13, 14, 19, 43, 47, 52, 65, 82, 89, 91};
    int valor, op;

    do{
        printf("Digite um valor a ser buscado: ");
        scanf("%d", &valor);
        //printf("\nResultado: %d\n", buscaBinariaRecursiva(vet, valor, 0, 9));
        printf("\nResultado: %d\n", buscaBinariaIterativa(vet, valor, 9));

        printf("\n0 - Sair\n1 - Nova busca\n");
        scanf("%d", &op);
    }while(op !=0);

    return 0;
}
