#include<stdio.h>
#include<stdlib.h>

int main(){
	system("color f0");
	char nome[50];
	
	printf("Digite seu nome todo: ");
	fflush(stdin);
	fgets(nome, 50, stdin);
	printf("Seja bem vindo %s", nome);
	
	system("pause");
	return 0;
}
