/****
*
* Título: Questão 14
*
* Autor: Thales Augusto
*
* Data de Criação: 18/03/2016
* Última modificação: 18/03/2016
*
* Descrição: A seguinte estrutura representa um numero complexo
typedef {
	float Re;
	float Im;
}TNumComp;
Escreva um programa que recebe dois numeros complexos e informa os resultados da soma
e substracao desses dois numeros.
*
*
* Entrada: 
Re[1]: 3
Im[1]: 4
Re[2]: -5
Im[2]: 2
*
* Saída: 
Soma:      -2.00 + (6.00)
Subtracao: 8.00 + (2.00)
*
*
****/

// Importando as bibliotecas
#include<stdio.h>
#include<stdlib.h>

#define c 2 // Quantidade de numeros complexos

// Estrutura de um numero complexos
typedef struct{
	float re, im;
}tNumComp;

int main(){
	int i;
	tNumComp *num, // Entrada do usuario
			 res; // Resultado das operacoes

	// Aloca memoria e verifica
	num = (tNumComp *) malloc(c * sizeof(tNumComp));
	if(num == NULL){
		printf("Erro de memoria!\n");
		exit(-1);
	}

	// Solicita numeros dos usuarios
	for(i = 0; i < c; i++){
		printf("Re[%d]: ", i + 1);
		scanf("%f", &num[i].re);

		printf("Im[%d]: ", i + 1);
		scanf("%f", &num[i].im);
	}

	// Saida para o usuario
	printf("Soma:      %.2f + (%.2f)\n", num[0].re + num[1].re, num[0].im + num[1].im);
	printf("Subtracao: %.2f + (%.2f)\n", num[0].re - num[1].re, num[0].im - num[1].im);

	// Libendo memoria pro SO
	free(num);

	return 0;
}
