/****
*
* Título: Questão 04
*
* Autor: Thales Augusto
*
* Data de Criação: 17/03/2016
* Última modificação: 17/03/2016
*
* Descrição: Escreva um programa para ler e imprimir os resultados de uma turma de n alunos em
uma disciplina (matricula, nome, sobrenome, nota). O programa devera informar o melhor
estudante, o pior estudante e a media da turma. Considere n um valor informado pelo
usuario.
a) Resolva o exercicio utilizando valores inteiros para “marcar” o melhor e pior estudante.
b) Resolva o exercicio utilizando ponteiros que apontem ao melhor e pior estudante.
*
*
* Entrada: 
Digite a quantidade de estudantes da turma: 2
Digite matricula, nome, sobrenome e nota, respectivamente: 123
Thales
Augusto
10
Digite matricula, nome, sobrenome e nota, respectivamente: 321
Arthur
Ramos
9.5
*
* Saída: 
Melhor aluno: Thales Augusto com nota 10.00
Pior aluno: Arthur Ramos com nota 9.50
Media da turma: 9.75
*
*
****/

// Declaração das bibliotecas e constantes
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define c 50

// Estrutura dos Alunos
typedef struct{
	char nome[c], sobrenome[c];
	int matricula;
	float nota;
}tAluno;

int main(){
	int n = 0, // Quantidade de alunos da turma
	    i;
	float media = 0;
	tAluno *p, // Ponteiro que manipula a estrutura
	       *melhor, *pior; // Apontadores para o melhor e pior aluno, respectivamente

	// Solicitando a quantidade de alunos da turma
	do{
		printf("Digite a quantidade de estudantes da turma: ");
		scanf("%d", &n);
	}while(n < 1);

	// Alocando memoria e verificando
	p = (tAluno *) malloc(n * sizeof(tAluno));
	if(!p){
		printf("Memoria insuficiente!\n");
		exit(-1);
	}

	// Atribuindo o primeiro como melhor e pior
	melhor = &p[0];
	pior = &p[0];

	for(i = 0; i < n; i++){
		// Solicitando os dados dos alunos e tratando-os
		printf("Digite matricula, nome, sobrenome e nota, respectivamente: ");
		scanf("%d", &p[i].matricula);

		setbuf(stdin, NULL);
		fgets(p[i].nome, c, stdin);
		p[i].nome[strlen(p[i].nome) - 1] = '\0';

		setbuf(stdin, NULL);
		fgets(p[i].sobrenome, c, stdin);
		p[i].sobrenome[strlen(p[i].sobrenome) - 1] = '\0';

		// Verificando as notas fornecidas
		do{
			scanf("%f", &p[i].nota);
		}while(p[i].nota < 0 || p[i].nota > 10);

		// Comparação de melhor e pior aluno
		if(p[i].nota > melhor->nota)
			melhor = &p[i];
		if(p[i].nota < pior->nota)
			pior = &p[i];

		// Calculando a media
		media += (p[i].nota / n);
	}

	// Saída para o usuario
	printf("Melhor aluno: %s %s com nota %.2f\n", melhor->nome, melhor->sobrenome, melhor->nota);
	printf("Pior aluno: %s %s com nota %.2f\n", pior->nome, pior->sobrenome, pior->nota);
	printf("Media da turma: %.2f\n", media);

	return 0;
}
