/****
*
* Título: Questão 01
*
* Autor: Thales Augusto
*
* Data de Criação: 17/03/2016
* Última modificação: 17/03/2016
*
* Descrição: Escreva um programa que leia os dados de um aluno e os imprima na tela. Considere os
dados (nome, sobrenome, idade, telefone, sexo, email). Utilize o operador de ponto para
manipular a estrutura.
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
	tAluno aluno;

	// Solicitando dados dos alunos e tratando
	printf("Digite Nome, Sobrenome, telefone, email, sexo(M/F) e email, respectivamente: \n");

	setbuf(stdin, NULL);
	fgets(aluno.nome, 50, stdin);
	aluno.nome[strlen(aluno.nome) - 1] = '\0';

	setbuf(stdin, NULL);
	fgets(aluno.sobrenome, 50, stdin);
	aluno.sobrenome[strlen(aluno.sobrenome) - 1] = '\0';

	setbuf(stdin, NULL);
	fgets(aluno.telefone, 13, stdin);
	aluno.telefone[strlen(aluno.telefone) - 1] = '\0';

	do{
		setbuf(stdin, NULL);
		aluno.sexo = getchar();
		getchar();
	}while(tolower(aluno.sexo) != 'f' && tolower(aluno.sexo) != 'm');

	setbuf(stdin, NULL);
	fgets(aluno.email, 25, stdin);
	aluno.email[strlen(aluno.email) - 1] = '\0';

	// Saida para o usuario
	printf("Nome: %s %s\nTelefone: %s\nSexo: %c\nEmail: %s\n", aluno.nome, aluno.sobrenome, aluno.telefone, aluno.sexo, aluno.email);

	return 0;
}
