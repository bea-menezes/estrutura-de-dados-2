#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Como criar uma função que retorna uma struct

typedef struct {
	int dia, mes, ano;
} Nascimento;

typedef struct{
	char nome[100];
	int idade;
	char sexo;
	
	Nascimento dataNascimento;
} Pessoa; 

void imprimirPessoa(Pessoa pessoa){
    printf("\tNome: %s\n", pessoa.nome);
    printf("\tIdade: %d\n", pessoa.idade);
    printf("\tSexo: %c\n", pessoa.sexo);

    printf("\tData de nas. : %d/%d/%d\n", pessoa.dataNascimento.dia, pessoa.dataNascimento.mes, pessoa.dataNascimento.ano);
}

// Função que lê os dados de uma pessoa e retorna para quem chamou

Pessoa lerPessoa(){

    Pessoa p;

    printf("Insira o seu nome: ");
	fgets(p.nome, 100, stdin); 
	
	printf("Insira sua idade: \n");
	scanf("%d", &p.idade); 
	
	scanf("%c"); // limpar o buff de memoria
	printf("Sexo M ou F: \n");
	scanf("%c", &p.sexo);
	
	printf("Data de Nascimento: dd MM yyyy\n");
	scanf("%d%d%d", &p.dataNascimento.dia, &p.dataNascimento.mes, &p.dataNascimento.ano);

    return p;
}

int main(void){
	
	Pessoa pessoa;

    pessoa = lerPessoa(); // recebendo o retorno na main da funcao lerPessoa
	
    imprimirPessoa(pessoa);
	
	return 0;
}
