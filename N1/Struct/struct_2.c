#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Estruturas preenchida com os dados do teclado

typedef struct{
	char nome[100];
	int idade;
	char sexo;
} Pessoa; 


int main(void){
	
	Pessoa pessoa;
	
	printf("Insira o seu nome: \n");
	fgets(pessoa.nome, 100, stdin); //stdin é uma constante que indica para a nossa funcao "faca a entrada padrao"
	
	printf("Insira sua idade: \n");
	scanf("%d", &pessoa.idade);
	
	scanf("%c"); // limpar o buff de memoria
	printf("Sexo M ou F: \n");
	scanf("%c", &pessoa.sexo);

	printf("Nome: %s\n", pessoa.nome);
	printf("Idade: %d\n", pessoa.idade);
	printf("Sexo: %c\n", pessoa.sexo);
	
	
	return 0;
}
