/****
*
* Título: Questão 08
*
* Autor: Thales Augusto
*
* Data de Criação: 18/03/2016
* Última modificação: 18/03/2016
*
* Descrição: Crie uma estrutura para representar um ponto do espa ̧co (x, y, z). Escreva um programa
que utilize a estrutura para verificar se o ponto pertence ao plano Ax + By + Cz = D onde
os coeficientes A, B, C, e D sao digitados pelo usuario.
*
*
* Entrada: 
Digite x, y e z: 1 
1
10
Digite A, B, C e D: 1
2
3
33
*
* Saída: 
Pontos pertencentes ao espaco!
*
*
****/

// Importando as bibliotecas
#include<stdio.h>
#include<stdlib.h>

// Estrutura dos pontos
typedef struct{
	float x, y, z; // variaveis
}tPonto;

int main(){
	tPonto ponto; // Maniupula ponto
	float A, B, C, D; // Coeficientes

	// Solicitando as variaveis e coeficientes
	printf("Digite x, y e z: ");
	scanf("%f %f %f", &ponto.x, &ponto.y, &ponto.z);

	printf("Digite A, B, C e D: ");
	scanf("%f %f %f %f", &A, &B, &C, &D);

	// verifica se esta no espaco ou nao
	if(A * ponto.x + B * ponto.y + C * ponto.z == D)
		printf("Pontos pertencentes ao espaco!\n");
	else
		printf("Pontos NAO pertencentes ao espaco!\n");

	return 0;
}
