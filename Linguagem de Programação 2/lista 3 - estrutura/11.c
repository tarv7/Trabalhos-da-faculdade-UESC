/****
*
* Título: Questão 11
*
* Autor: Thales Augusto
*
* Data de Criação: 18/03/2016
* Última modificação: 18/03/2016
*
* Descrição: Modifique o programa anterior para alocar as variaveis estruturas dinamicamente e utilizar
ponteiros para a manipulacao das mesmas.
*
*
* Entrada: 
Digite a data da primeira pessoa(dd/mm/aaaa): 30
12
2000
Digite a data da segunda pessoa(dd/mm/aaaa): 01
01
1999
*
* Saída: 
A segunda pessoa eh a mais velha!
*
*
****/

// Importacao das bibliotecas e declaracao da contante
#include<stdio.h>
#include<stdlib.h>

#define c 2 // quantidade de pessoas

// Estrutura para data
typedef struct{
	int dia, mes, ano;
}tData;

int main(){
	int tot[c]; // dias vividos de cada pessoas
	tData *data; // manipulador de datas

	// Alocando memoria para data e verificando
	data = (tData *) malloc(c * sizeof(tData));
	if(data == NULL){
		printf("memoria esgotada!\n");
		exit(-1);
	}

	// Solicitando as datas e conferindo
	do{
		printf("Digite a data da primeira pessoa(dd/mm/aaaa): ");
		scanf("%d %d %d", &data[0].dia, &data[0].mes, &data[0].ano);
	}while((data[0].dia < 1 || data[0].dia > 31) || (data[0].mes < 1 || data[0].mes > 12) || (data[0].ano > 2016));

	do{
		printf("Digite a data da segunda pessoa(dd/mm/aaaa): ");
       	scanf("%d %d %d", &data[1].dia, &data[1].mes, &data[1].ano);
	}while((data[1].dia < 1 || data[1].dia > 31) || (data[1].mes < 1 || data[1].mes > 12) || (data[1].ano > 2016));

	// Calculando o total de dias vividos de cada pessoa
	tot[0] = (data[0].ano * 365) + (data[0].mes * 30) + data[0].dia;
	tot[1] = (data[1].ano * 365) + (data[1].mes * 30) + data[1].dia;

	// Verificando qual eh mais jovem
	if(tot[0] > tot[1])
		printf("A primeira pessoa eh a mais jovem!\n");
	else if(tot[0] < tot[1])
		printf("A segunda pessoa eh a mais jovem!\n");
	else
		printf("Elas tem a mesma idade!\n");

	// Libendo memoria pro SO
	free(data);

	return 0;
}
