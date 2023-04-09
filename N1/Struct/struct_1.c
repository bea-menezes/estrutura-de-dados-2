#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Struct - novo tipo de dado criado por nós
// Ex: tipo Pessoa com nome, idade e peso

//Existe tipos de sintaxe para o struct, mas é importante adotar apenas uma!
typedef struct{
	char nome[100];
	int idade;
} Pessoa; 

struct Pessoa2{
	char nome[100];
	int idade;
};

int main(void){
	
	Pessoa bea;
	//struct Pessoa2 ellen; - para a segunda forma do struct
	
	strcpy(bea.nome,"Beatriz"); //para salvar o nome na varivale bea.nome
	bea.idade = 22;

	
	printf("Nome: %s\n", bea.nome);
	printf("Idade: %d\n", bea.idade);
	
	return 0;
}
