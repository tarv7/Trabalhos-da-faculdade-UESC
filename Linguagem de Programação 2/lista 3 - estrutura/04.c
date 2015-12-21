#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
	int mat;
	char nome[32], sobrenome[32];
	float nota;
}Talunos;

int main(){
	Talunos *aluno, *melhor, *pior;
	float media = 0;
	int n, i;

	do{
		printf("Digite a quantidade de alunos: ");
		scanf("%d", &n);
	}while(n <= 0);

	aluno = malloc(n * sizeof(Talunos));
	if(aluno == NULL){
		printf("Memoria esgotada!\n");
		exit(-1);
	}

	for(i = 0; i < n; i++){
		printf("Matricula[%d]: ", i);
		scanf("%d", &aluno[i].mat);
		printf("Nome[%d]: ", i);
		setbuf(stdin, NULL);
		fgets(aluno[i].nome, 32, stdin);
		aluno[i].nome[strlen(aluno[i].nome) - 1] = '\0';
		printf("Sobrenome[%d]: ", i);
		setbuf(stdin, NULL);
		fgets(aluno[i].sobrenome, 32, stdin);
		aluno[i].sobrenome[strlen(aluno[i].sobrenome) - 1] = '\0';
		do{
			printf("Nota[%d]: ", i);
			scanf("%f", &aluno[i].nota);
		}while(aluno[i].nota < 0 || aluno[i].nota > 10);
	}

	melhor = &aluno[0];
	pior = &aluno[0];

	for(i = 0; i < n; i++){
		media += (aluno[i].nota / n);
		if(pior->nota > aluno[i].nota)
			pior = &aluno[i];
		if(melhor->nota < aluno[i].nota)
			melhor = &aluno[i];

		printf("\nMatricula[%d]: %d\nNome[%d]: %s %s\nNota[%d]: %f\n", 
			i, aluno[i].mat, i, aluno[i].nome, aluno[i].sobrenome, i, aluno[i].nota);
	}

	printf("\nMelhor: %s %s com %.2f pontos\n", melhor->nome, melhor->sobrenome, melhor->nota);
	printf("Pior:   %s %s com %.2f pontos\n", pior->nome, pior->sobrenome, pior->nota);
	printf("Media da turma: %.2f\n", media);

	free(aluno);
	return 0;
}
