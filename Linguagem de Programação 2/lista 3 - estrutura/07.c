/****
*
* Título: Questão 07
*
* Autor: Thales Augusto
*
* Data de Criação: 17/03/2016
* Última modificação: 17/03/2016
*
* Descrição: Crie uma estrutura para representar um ponto no plano (x, y). Utilize a estrutura para fazer
um programa que leia tres pontos e informe se eles formam ou nao um triangulo retangulo.
*
*
* Entrada: 
X: 1
Y: 3
X: 4
Y: 5
X: 3
Y: 0
*
* Saída: 
Triangulo Retangulo!
*
*
****/

// Declração das bibliotecas
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

// Estrutura do ponto
typedef struct{
	float x, y;
}tPonto;

int main(){
	tPonto ponto[3]; // Criando os 3 vertices do triangulo
	int i;
	float a, // Distancia do ponto 0 para o ponto 1
		   b, // Distancia do ponto 0 para o ponto 2
		   c, // Distancia do ponto 1 para o ponto 2
		   maior, // Guarda a hipotenusa
		   cat1, cat2; // Os 2 catetos do triangulo

	// Solicitando os pontos
	for(i = 0; i < 3; i++){
		printf("X: ");
		scanf("%f", &ponto[i].x);
		printf("Y: ");
		scanf("%f", &ponto[i].y);
	}

	// Calculando as distancias
	a = sqrt((ponto[0].x - ponto[1].x) * (ponto[0].x - ponto[1].x) + (ponto[0].y - ponto[1].y) * (ponto[0].y - ponto[1].y));
	b = sqrt((ponto[0].x - ponto[2].x) * (ponto[0].x - ponto[2].x) + (ponto[0].y - ponto[2].y) * (ponto[0].y - ponto[2].y));
	c = sqrt((ponto[1].x - ponto[2].x) * (ponto[1].x - ponto[2].x) + (ponto[1].y - ponto[2].y) * (ponto[1].y - ponto[2].y));

	// Atribuicoes de Hipotenusa e dos catetos
	maior = a;
	cat1 = b;
	cat2 = c;
	if(b > maior){
		maior = b;
		cat1 = a;
		cat2 = c;
	}
	if(c > maior){
		maior = c;
		cat1 = a;
		cat2 = b;
	}

	// Verifica se eh um triangulo retangulo e mostra ao usuario
	if(maior * maior == (cat1 * cat1) + (cat2 * cat2))
		printf("Triangulo Retangulo!\n");
	else
		printf("NAO eh Triangulo Retangulo!\n");

	return 0;
}
