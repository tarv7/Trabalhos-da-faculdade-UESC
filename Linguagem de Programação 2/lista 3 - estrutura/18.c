#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct item{
	char nome[255];
	char telefone[13];
	struct item *ptr;
}Titem;

int main(){
	Titem *lista, *p;
	int n, i;

	do{
		printf("Digite a quantidade de entradas(> 1): ");
		scanf("%d", &n);
	}while(n < 1);

	lista = malloc(n * sizeof(Titem));
	if(lista == NULL){
		printf("Memoria esgotada\n");
		exit(-1);
	}

	p = lista;

	for(i = 0; i < n; i++){
		printf("Nome[%d]: ", i);
		setbuf(stdin, NULL);
		fgets(lista[i].nome, 255, stdin);
		lista[i].nome[strlen(lista[i].nome) - 1] = '\0';
		printf("Telefone[%d]: ", i);
		setbuf(stdin, NULL);
		fgets(lista[i].telefone, 13, stdin);
		lista[i].telefone[strlen(lista[i].telefone) - 1] = '\0';

		lista[i].ptr = ++p;
	}

	lista[--i].ptr = NULL;

	for(p = lista; p != NULL; p++){
		printf("Nome: %s\nTelefone: %s\n", p->nome, p->telefone);
	}

	free(lista);

	return 0;
}
