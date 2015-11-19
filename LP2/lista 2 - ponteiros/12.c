#include<stdio.h>
#include<stdlib.h>

int main(){
	int **A, **B, **C, i, j, l, c;

	// Solicita as dimensoes
	printf("Digite o numero da linha e da coluna das matrizes, repectivamente: ");
	scanf("%d %d", &l, &c);

	// Verifica se as matrizes sao validas
	if(l < 2 || c < 2){
		printf("Dimensoes invalidas!\n");
		exit(-1);
	}

	// Alocando dinamicamente as linhas das matrizes e verificando
	A = malloc(l * sizeof(int *));
	B = malloc(l * sizeof(int *));
	C = malloc(l * sizeof(int *));
	if(A == NULL || B == NULL || C == NULL){
		printf("Memoria esgotada!\n");
		exit(-1);
	}

	// Enchendo a matriz A
	for(i = 0; i < l; i++){
		// Alocando dinamicamente as colunas da matriz
		A[i] = malloc(c * sizeof(int));
		if(A[i] == NULL){
			printf("Memoria esgotada!\n");
			exit(-1);
		}

		for(j = 0; j < c; j++){
			printf("A[%d][%d]: ", i, j);
			scanf("%d", &A[i][j]);
		}
	}

	// Enchendo a matriz B e C
	for(i = 0; i < l; i++){
		// Alocando dinamicamente as colunas das matrizes
		B[i] = malloc(c * sizeof(int));
		C[i] = malloc(c * sizeof(int));
		if(B[i] == NULL || C[i] == NULL){
			printf("Memoria esgotada!\n");
			exit(-1);
		}

		for(j = 0; j < c; j++){
			printf("B[%d][%d]: ", i, j);
			scanf("%d", &B[i][j]);

			C[i][j] = A[i][j] * B[i][j];
		}
	}

	// Apresentando a matriz C
	for(i = 0; i < l; i++){
		for(j = 0; j < c; j++)
			printf("% 6d", C[i][j]);
		printf("\n");
	}

	// Liberando para o SO a memoria alocada dinamicamente
	for(i = 0; i < l; i++){
		free(A[i]);
		free(B[i]);
		free(C[i]);
	}
	free(A);
	free(B);
	free(C);

	return 0;
}
