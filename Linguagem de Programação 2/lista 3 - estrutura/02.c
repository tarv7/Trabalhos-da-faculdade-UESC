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
	Talunos aluno, *p;

	p = &aluno;

	printf("Nome: ");
	fgets(p->nome, n, stdin);
	p->nome[strlen(p->nome) - 1] = '\0';

	printf("Sobrenome: ");
	fgets(p->sobrenome, s, stdin);
	p->sobrenome[strlen(p->sobrenome) - 1] = '\0';

	printf("Email: ");
	fgets(p->email, e, stdin);
	p->email[strlen(p->email) - 1] = '\0';

	printf("Sexo: ");
	p->sexo = getchar();

	printf("Idade: ");
	scanf("%d", &p->idade);

	printf("Telefone: ");
	scanf("%d", &p->telefone);

	printf("\n\nNome: %s %s\n", p->nome, p->sobrenome);
	printf("Email: %s\n", p->email);
	printf("Sexo: %c\n", p->sexo);
	printf("Idade: %d\n", p->idade);
	printf("Telefone: %d\n", p->telefone);

	return 0;
}
