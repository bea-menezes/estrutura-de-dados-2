#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//De quanto de memória uma struct precisa?

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
    
    Nascimento data;

    printf("%d\n", sizeof(int)); // Para descobrir o tamanho de um inteiro
    printf("%d\n", sizeof(data)); // Tamanho do struct Nascimento: int + int + int = 12 bites
    printf("%d\n", sizeof(pessoa)); // vetor[100] + int + char + Nascimento + 3 bites de gerenciamento

    //------------------------------
	
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
