#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Estruturas em outras estruturas

//OBS: Primeiro precisa criar o tipo para depois usar, logo utiliza-se o tipo nascimento só depois de estar criado!

typedef struct {
	int dia, mes, ano;
} Nascimento;

typedef struct{
	char nome[100];
	int idade;
	char sexo;
	
	Nascimento dataNascimento;
} Pessoa; 

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
	

	printf("Nome: %s\n", pessoa.nome);
	printf("Idade: %d\n", pessoa.idade);
	printf("Sexo: %c\n", pessoa.sexo);
	printf("Data de Nascimento: %d/%d/%d\n", pessoa.dataNascimento.dia, pessoa.dataNascimento.mes, pessoa.dataNascimento.ano);
	
	return 0;
}
