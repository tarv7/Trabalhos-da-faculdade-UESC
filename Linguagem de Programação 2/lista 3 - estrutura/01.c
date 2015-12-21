/*
Escreva um programa que leia os dados de um aluno e os imprima na tela. Considere os
dados (nome, sobrenome, idade, telefone, sexo, email). Utilize o operador de ponto para
manipular a estrutura.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define n 32
#define s 64
#define e 40

typedef struct{
	char nome[n], sobrenome[s], email[e], sexo;
	int idade;
	int telefone;
}Talunos;

int main(){
	Talunos aluno;

	printf("Nome: ");
	fgets(aluno.nome, n, stdin);
	aluno.nome[strlen(aluno.nome) - 1] = '\0';

	printf("Sobrenome: ");
	fgets(aluno.sobrenome, s, stdin);
	aluno.sobrenome[strlen(aluno.sobrenome) - 1] = '\0';

	printf("Email: ");
	fgets(aluno.email, e, stdin);
	aluno.email[strlen(aluno.email) - 1] = '\0';

	printf("Sexo: ");
	aluno.sexo = getchar();

	printf("Idade: ");
	scanf("%d", &aluno.idade);

	printf("Telefone: ");
	scanf("%d", &aluno.telefone);

	printf("\n\nNome: %s %s\n", aluno.nome, aluno.sobrenome);
	printf("Email: %s\n", aluno.email);
	printf("Sexo: %c\n", aluno.sexo);
	printf("Idade: %d\n", aluno.idade);
	printf("Telefone: %d\n", aluno.telefone);

	return 0;
}
