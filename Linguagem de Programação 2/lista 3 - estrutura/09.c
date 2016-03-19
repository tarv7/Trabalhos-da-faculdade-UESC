/****
*
* Título: Questão 09
*
* Autor: Thales Augusto
*
* Data de Criação: 18/03/2016
* Última modificação: 18/03/2016
*
* Descrição: Crie uma estrutura para representar um ponto TPonto do espaco. Utilize a estrutura TPonto
para criar uma estrutura Tesfera (centro e radio). Escreva um programa usando as estru-
turas anteriores que receba uma esfera e um ponto, seu programa deve informar se o ponto
 ́e interno ou externo a esfera.
*
*
* Entrada: 
Digite X e Y do ponto, respectivamente: 1
3
Digite o centro da esfera(X e Y) e seu raio, respectivamente: 0
0
2
*
* Saída: 
O ponto (1.00; 3.00) esta fora da esfera!
*
*
****/

// Importando as bibliotecas 
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

// Estrutura dos pontos
typedef struct{
	float x, y; // variaveis
}tPonto;

// Estrutura da esfera
typedef struct{
	tPonto centro; // ponto
	float raio;
}tEsfera;

int main(){
	tPonto ponto; // manipula o ponto
	tEsfera esfera; // manipula a esfera
	float dist; // guarda a distancia entre o ponto e o centro da esfera

	// Solicitando o ponto, centro e raio
	printf("Digite X e Y do ponto, respectivamente: ");
	scanf("%f %f", &ponto.x, &ponto.y);

	printf("Digite o centro da esfera(X e Y) e seu raio, respectivamente: ");
	scanf("%f %f %f", &esfera.centro.x, &esfera.centro.y, &esfera.raio);

	// Calculando distancia entre o ponto e o centro da esfera
	dist = sqrt(((ponto.x - esfera.centro.x) * (ponto.x - esfera.centro.x)) + ((ponto.y - esfera.centro.y) * (ponto.y - esfera.centro.y)));

	// Verifica se o ponto esta dentro da esfera ou nao
	if(dist > esfera.raio)
		printf("O ponto (%.2f; %.2f) esta fora da esfera!\n", ponto.x, ponto.y);
	else
		printf("O ponto (%.2f; %.2f) esta dentro da esfera!\n", ponto.x, ponto.y);

	return 0;
}
