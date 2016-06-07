#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define h 20

typedef struct{
	char nome[h];
	int quant;
}tAluno;

void Erro();

int main(){
	tAluno *aluno, *reprovado;
	int num, i, instancia = 0;

	scanf("%d", &num);
	if(num < 1 || num > 100)
		Erro();

	aluno = (tAluno *) malloc(num * sizeof(tAluno));
	if(!aluno)
		Erro();

	reprovado = &aluno[0];

	for(i = 0; i < num; i++){
		setbuf(stdin, NULL);
//		scanf("%s", aluno[i].nome);
		fgets(aluno[i].nome, h, stdin);
		aluno[i].nome[strlen(aluno[i].nome) - 1] = '\0';

		scanf("%d", &aluno[i].quant);
		if(aluno[i].quant < 0 || aluno[i].quant > 10)
			Erro();

		if(aluno[i].quant < reprovado->quant){
			reprovado = &aluno[i];
			instancia = i;
		}else if(aluno[i].quant == reprovado->quant)
			if(strcmp(aluno[i].nome, reprovado->nome) > 0){
				reprovado = &aluno[i];
				instancia = i;
			}
	}

	printf("Instancia %d\n%s\n", instancia, reprovado->nome);

	return 0;
}

void Erro(){
	printf("Erro!\n");
	exit(-1);
}
