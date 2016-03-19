/****
*
* Título: Questão 10
*
* Autor: Thales Augusto
*
* Data de Criação: 18/03/2016
* Última modificação: 18/03/2016
*
* Descrição: Crie uma estrutura TData para representar uma data no formato dia/mes/ano. Utilize a
estrutura em um programa que receba duas datas de nascimento, e seu programa informe a
data de nascimento da pessoa mais jovem, ou se as duas pessoas tem a mesma idade.
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

// Importando as bibliotecas
#include<stdio.h>
#include<stdlib.h>

// Estrutura para data
typedef struct{
	int dia, mes, ano;
}tData;

int main(){
	int tot[2]; // soma de dias vividos
	tData data[2]; // dois manipuladores de data
	
	// Solicitando as datas e verficando
	do{
		printf("Digite a data da primeira pessoa dia, mes e ano(aaaa), respectivamente: ");
		scanf("%d %d %d", &data[0].dia, &data[0].mes, &data[0].ano);
	}while((data[0].dia < 1 || data[0].dia > 31) || (data[0].mes < 1 || data[0].mes > 12) || (data[0].ano > 2016));

	do{
		printf("Digite a data da segunda pessoa dia, mes e ano(aaaa), respectivamente: ");
       	scanf("%d %d %d", &data[1].dia, &data[1].mes, &data[1].ano);
	}while((data[1].dia < 1 || data[1].dia > 31) || (data[1].mes < 1 || data[1].mes > 12) || (data[1].ano > 2016));

	// Calculando o numero de dias vividos de cada pessoa
	tot[0] = (data[0].ano * 365) + (data[0].mes * 30) + data[0].dia;
	tot[1] = (data[1].ano * 365) + (data[1].mes * 30) + data[1].dia;

	// Verificando qual pessoa eh mais jovem
	if(tot[0] > tot[1])
		printf("A primeira pessoa eh a mais jovem!\n");
	else if(tot[0] < tot[1])
		printf("A segunda pessoa eh a mais jovem!\n");
	else
		printf("Elas tem a mesma idade!\n");

	return 0;
}
