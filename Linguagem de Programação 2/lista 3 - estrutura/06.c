/****
*
* Título: Questão 06
*
* Autor: Thales Augusto
*
* Data de Criação: 17/03/2016
* Última modificação: 17/03/2016
*
* Descrição: Utilize uma estrutura para representar um ponto do plano (x; y), escreva um programa que
leia um ponto do teclado e informe a que quadrante pertence (I, II, III ou IV). O programa
ficara em execucao ate que o ponto (0; 0) seja digitado. Desconsidere os pontos sobre os eixos
coordenados. Utilize a menor quantidade de comparacoes possivel. Sugestao: O problema
pode ser resolvido verificando apenas duas condicoes para cada ponto digitado.
*
*
* Entrada: 
X: 0
Y: 3
//Resposta
X: 1
Y: 0
//Resposta
*
* Saída: 
Ponto sobre os eixos!
Ponto sobre os eixos!
*
*
****/

// Declaração das bibliotecas
#include<stdio.h>
#include<stdlib.h>

// Estrutura dos pontos
typedef struct{
	float x, y;
}tPonto;

int main(){
	tPonto ponto; // Manipula a estrutura
	int quad; // guarda o quadrante do ponto

	do{
		// Solicita as coordenadas
		printf("X: ");
		scanf("%f", &ponto.x);
		printf("Y: ");
		scanf("%f", &ponto.y);

		// Verifica se as coordenadas estao sobre os eixos
		if(ponto.x == 0 || ponto.y == 0){
			printf("Ponto sobre os eixos!\n");
			continue;
		}

		// Verifica em qual quadrante esta o ponto
		if(!(ponto.x == 0 && ponto.y == 0)){
			if(ponto.y > 0)
				if(ponto.x > 0)
					quad = 1;
				else
					quad = 2;
			else
				if(ponto.x > 0)
					quad = 4;
				else
					quad = 3;

			// Saída para o usuário
			printf("O ponto (%.2f; %.2f) esta no quadrante %d\n", ponto.x, ponto.y, quad);
		}
	}while(!(ponto.x == 0 && ponto.y == 0)); // Enquanto o ponto for diferente de (0; 0)

	return 0;
}
