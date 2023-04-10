#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Como criar um procedimento que receba uma struct como parâmetro

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

int main(void){
	
	Pessoa pessoa;
    
	printf("Insira o seu nome: \n");
	fgets(pessoa.nome, 100, stdin); 
	
	printf("Insira sua idade: \n");
	scanf("%d", &pessoa.idade); 
	
	scanf("%c"); // limpar o buff de memoria
	printf("Sexo M ou F: \n");
	scanf("%c", &pessoa.sexo);
	
	printf("Data de Nascimento: dd MM yyyy\n");
	scanf("%d%d%d", &pessoa.dataNascimento.dia, &pessoa.dataNascimento.mes, &pessoa.dataNascimento.ano);
	
    imprimirPessoa(pessoa);
	
	return 0;
}
