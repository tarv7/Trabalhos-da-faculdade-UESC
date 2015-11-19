#include<stdio.h>
#include<stdlib.h>

int main(){
	int **A, *B, i, j, m, n, cont = 0;

	// Pedindo dimensoes da matriz e verificando
	printf("Numero de linhas(> 1): ");
	scanf("%d", &n);
	printf("Numero de colunas(> 1): ");
	scanf("%d", &m);
	if(n < 2 || m < 2){
		printf("Matriz invalida!\n");
		exit(-1);
	}

	// Alocando dinamicamente matriz e vetor e verificando
	A = malloc(n * sizeof(int *));
	B = malloc(n * m * sizeof(int));
	if(A == NULL || B == NULL){
		printf("Memoria esgotada!\n");
		exit(-1);
	}

	for(i = 0; i < n; i++){
		// Alocando dinamicamente as colunas da matriz e verificando
		*(A + i) = malloc(m * sizeof(int));
		if(*(A + i) == NULL){
			printf("Memoria esgotada!\n");
			exit(-1);
		}

		for(j = 0; j < m; j++){
			// Pedindo valores
			printf("A[%d][%d]: ", i, j);
			scanf("%d", (*(A + i) + j));

			// Enchendo vetor
			*(B + cont++) = *(*(A + i) + j);
		}
		// Liberando para o SO memoria das colunas da matriz
		free(*(A + i));
	}

	// Liberando para o SO as linhas da matriz
	free(A);

	// Apresentando vetor
	for(i = 0; i < (m * n); i++)
		printf("%d ", *(B + i));
	printf("\n");

	// Liberando para o SO a memoria alocada para o vetor
	free(B);

	return 0;

}
