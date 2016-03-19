/****
*
* Título: Questão 02
*
* Autor: Thales Augusto
*
* Data de Criação: 17/03/2016
* Última modificação: 17/03/2016
*
* Descrição: Reescreva o programa anterior utilizando um ponteiro para manipular a estrutura.
*
*
* Entrada: 
Thales
Augusto
7381283929
m
thallles.ramos@gmail.com 

*
* Saída: 
Nome: Thales Augusto
Telefone: 7381283929
Sexo: m
Email: thallles.ramos@gmail.com
*
*
****/

// Declaração das bibliotecas
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

// Struct dos Alunos
typedef struct{
	char nome[50], sobrenome[50], telefone[13], sexo, email[25];
}tAluno;

int main(){
	tAluno aluno,
		*p; // ponteiro para maniupular a estrutura

	p = &aluno;

	// Pedindo dados dos alunos e tratando-os
	printf("Digite Nome, Sobrenome, telefone, email, sexo(M/F) e email, respectivamente: \n");

	setbuf(stdin, NULL);
	fgets(p->nome, 50, stdin);
	p->nome[strlen(p->nome) - 1] = '\0';

	setbuf(stdin, NULL);
	fgets(p->sobrenome, 50, stdin);
	p->sobrenome[strlen(p->sobrenome) - 1] = '\0';

	setbuf(stdin, NULL);
	fgets(p->telefone, 13, stdin);
	p->telefone[strlen(p->telefone) - 1] = '\0';

	do{
		setbuf(stdin, NULL);
		p->sexo = getchar();
		getchar();
	}while(tolower(p->sexo) != 'f' && tolower(p->sexo) != 'm');

	setbuf(stdin, NULL);
	fgets(p->email, 25, stdin);
	p->email[strlen(p->email) - 1] = '\0';

	// Saída para o usuário
	printf("Nome: %s %s\nTelefone: %s\nSexo: %c\nEmail: %s\n", p->nome, p->sobrenome, p->telefone, p->sexo, p->email);

	return 0;
}
