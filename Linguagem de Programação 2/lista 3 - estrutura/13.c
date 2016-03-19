/****
*
* Título: Questão 13
*
* Autor: Thales Augusto
*
* Data de Criação: 18/03/2016
* Última modificação: 18/03/2016
*
* Descrição: Um numero racional e representado pelos valores inteiros numerador e denominador, sendo
denominador = 0. Crie uma estrutura que represente um numero racional. Utilize a estrutura
em um programa que receba dois numeros racionais r 1 e r 2 , e calcule
a) r 1 + r 2
b) r 1 - r 2
c) r 1 * r 2
d) r 1 / r 2 , desconsidere a alternativa de r 2 = 0.
*
*
* Entrada: 
Numerador[1]: 1
Denominador[1]: 2
Numerador[2]: 5
Denominador[2]: 1
*
* Saída: 
Soma:          5.50
Subtracao:     -4.50
Multiplicacao: 2.50
Divisao:       0.10
*
*
****/

// Importando as bibliotecas
#include<stdio.h>
#include<stdio.h>

#define c 2 // Qunatidade de numeros racionais

// Estrutura de um numero racional
typedef struct{
	int num, // Numerador 
		den; // Denominador
	float res; // Resultado de num / den
}tRacional;

int main(){
	int i;
	tRacional rac[c]; // dois manipuladores de um numero racional

	// Loop para pedir os numeros
	for(i = 0; i < c; i++){
		printf("Numerador[%d]: ", i + 1);
		scanf("%d", &rac[i].num);

		// Solicita denominador e verifica
		do{
			printf("Denominador[%d]: ", i + 1);
			scanf("%d", &rac[i].den);
		}while(rac[i].den == 0);

		// Calcula num / den e atribui a res
		rac[i].res = (float) rac[i].num / rac[i].den;
	}

	// Saida para o usuario
	printf("Soma:          %.2f\n", rac[0].res + rac[1].res);
	printf("Subtracao:     %.2f\n", rac[0].res - rac[1].res);
	printf("Multiplicacao: %.2f\n", rac[0].res * rac[1].res);
	printf("Divisao:       %.2f\n", rac[0].res / rac[1].res);

	return 0;
}
