#include<stdio.h>
#include<stdlib.h>

int
main(){
	system("color f0");
	char nome[40];
	printf("Digite seu nome todo: ");
	fflush(stdin);
	scanf("%s", nome);
	printf("Seja bem vindo %s\n", nome);
	printf("A funcao scanf nao aceita espacos\n em branco no meio da variavel\n use a funcao fgets!\n");
	
	system("pause");
	return 0;	
}
