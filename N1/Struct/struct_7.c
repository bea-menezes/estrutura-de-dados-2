#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Como criar um vetor de struct

typedef struct
{
    int dia, mes, ano;
} Nascimento;

typedef struct
{
    char nome[100];
    int idade;
    char sexo;

    Nascimento dataNascimento;
} Pessoa;

void imprimirPessoa(Pessoa pessoa)
{
    printf("\n\tNome: %s", pessoa.nome);
    printf("\tIdade: %d\n", pessoa.idade);
    printf("\tSexo: %c\n", pessoa.sexo);

    printf("\tData de nas. : %d/%d/%d\n\n", pessoa.dataNascimento.dia, pessoa.dataNascimento.mes, pessoa.dataNascimento.ano);
}

// Função que lê os dados de uma pessoa e retorna para quem chamou

Pessoa lerPessoa()
{

    Pessoa p;

    printf("\nInsira o seu nome: ");
    fgets(p.nome, 100, stdin);

    printf("Insira sua idade: ");
    scanf("%d", &p.idade);

    scanf("%c"); // limpar o buff de memoria
    printf("Sexo M ou F: ");
    scanf("%c", &p.sexo);

    printf("Data de Nascimento dd MM yyyy: ");
    scanf("%d%d%d", &p.dataNascimento.dia, &p.dataNascimento.mes, &p.dataNascimento.ano);
    scanf("%c");

    return p;
}

int main(void)
{

    int i;
    Pessoa pessoas[2];

    for (i = 0; i < 2; i++)
    {
        pessoas[i] = lerPessoa();
    }

    for (i = 0; i < 2; i++)
    {
        imprimirPessoa(pessoas[i]);
    }

    // pessoas[0] = lerPessoa(); // recebendo o retorno na main da funcao lerPessoa
    //imprimirPessoa(pessoas[0]);

    return 0;
}
