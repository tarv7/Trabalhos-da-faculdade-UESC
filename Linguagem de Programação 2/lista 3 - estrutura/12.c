/****
*
* Título: Questão 12
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
Digite o nome da primeira pessoa: Thales
Digite a data da primeira pessoa(dd/mm/aaaa): 3
5
2005
Digite o nome da primeira pessoa: Augusto
Digite a data da segunda pessoa(dd/mm/aaaa): 3
5
2005
*
* Saída: 
Elas tem a mesma idade!
*
*
****/

// Importando bibliotecas
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// Definindo as constantes
#define c 2 // quantidade de pessoas
#define h 50 // quantidade de digitos do nome

// Estrutura de data
typedef struct{
	int dia, mes, ano;
}tData;

// Estrutura para pessoa
typedef struct{
	char nome[h];
	tData data; // data de nascimento
}tPessoa;

int main(){
	int tot[c]; // Total de dias vividos de cada pessoa
	tPessoa pessoa[c], // dois manipulador da estrutura de pessoas
			*jovem; // apontador para pessoa mais jovem

	// Solicitando os dados da primeira pessoa e verificando-os
	printf("Digite o nome da primeira pessoa: ");
	setbuf(stdin, NULL);
	fgets(pessoa[0].nome, h, stdin);
	pessoa[0].nome[strlen(pessoa[0].nome) - 1] = '\0';

	do{
		printf("Digite a data da primeira pessoa(dd/mm/aaaa): ");
		scanf("%d %d %d", &pessoa[0].data.dia, &pessoa[0].data.mes, &pessoa[0].data.ano);
	}while((pessoa[0].data.dia < 1 || pessoa[0].data.dia > 31) || (pessoa[0].data.mes < 1 || pessoa[0].data.mes > 12) || (pessoa[0].data.ano > 2016));

	// Solicitando os dados da segunda pessoa e verificando-os
	printf("Digite o nome da segunda pessoa: ");
	setbuf(stdin, NULL);
	fgets(pessoa[1].nome, h, stdin);
	pessoa[1].nome[strlen(pessoa[1].nome) - 1] = '\0';

	do{
		printf("Digite a data da segunda pessoa(dd/mm/aaaa): ");
       	scanf("%d %d %d", &pessoa[1].data.dia, &pessoa[1].data.mes, &pessoa[1].data.ano);
	}while((pessoa[1].data.dia < 1 || pessoa[1].data.dia > 31) || (pessoa[1].data.mes < 1 || pessoa[1].data.mes > 12) || (pessoa[1].data.ano > 2016));

	// Calculando o total de dias vividos de cada pessoa
	tot[0] = (pessoa[0].data.ano * 365) + (pessoa[0].data.mes * 30) + pessoa[0].data.dia;
	tot[1] = (pessoa[1].data.ano * 365) + (pessoa[1].data.mes * 30) + pessoa[1].data.dia;

	// Comparacoes para determinar a pessoa mais jovem
	if(tot[0] > tot[1])
		jovem = &pessoa[0];
	else if(tot[0] < tot[1])
		jovem = &pessoa[1];
	else{
		printf("Elas tem a mesma idade!\n");
		return 0;
	}

	// Saida para o usuario
	printf("%s eh a pessoa mais velha!\n", jovem->nome);

	return 0;
}
