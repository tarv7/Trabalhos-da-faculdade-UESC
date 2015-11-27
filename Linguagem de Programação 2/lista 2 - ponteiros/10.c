#include<stdio.h>
#include<stdlib.h>

int main(){
	int **A, **B, **C, **D, i, j, l, c;

	// Entrada e verificacao da dimensao das matrizes
	printf("Digite o numero de linhas e colunas, respectivamente: ");
	scanf("%d %d", &l, &c);
	if(l < 2 || c < 2){
		printf("Dimensoes invalidas!\n");
		exit(-1);
	}

	// Alocando dinamicamente as linhas da matriz
	A = malloc(l * sizeof(int *));
	B = malloc(l * sizeof(int *));
	C = malloc(l * sizeof(int *));
	D = malloc(l * sizeof(int *));
	if(A == NULL || B == NULL || C == NULL || D == NULL){
		printf("Memoria esgotada!");
		exit(-1);
	}

	// Enchendo matriz A
	for(i = 0; i < l; i++){
		// Alocando as colunas dinamicamente
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

	printf("\n");

	// Enchendo matriz B
	for(i = 0; i < l; i++){
		// Alocando dinamicamente as colunas da matriz
                B[i] = malloc(c * sizeof(int));
		C[i] = malloc(c * sizeof(int));
		D[i] = malloc(c * sizeof(int));
		if(B[i] == NULL || C[i] == NULL D[i] == NULL){
			printf("Memoria esgotada!\n");
			exit(-1);
		}

                for(j = 0; j < c; j++){
                        printf("B[%d][%d]: ", i, j);
                        scanf("%d", &B[i][j]);

			// Enchendo matriz de soma e subtracao
			C[i][j] = A[i][j] + B[i][j];
			D[i][j] = A[i][j] - B[i][j];
                }
        }

	printf("\n***** SOMA *****\n");
	// Apresentando matriz de soma
	for(i = 0; i < l; i++){
                for(j = 0; j < c; j++){
                        printf("% 5d", C[i][j]);
                }
		printf("\n");
        }

	printf("\n***** SUBT *****\n");
	// Apresentando matriz de subtracao
	for(i = 0; i < l; i++){
                for(j = 0; j < c; j++){
                        printf("% 5d", D[i][j]);
                }
                printf("\n");
        }

	// Liberando para o SO a memoria dinamicamente alocada
	for(i = 0; i < l; i++){
		free(A[i]);
		free(B[i]);
		free(C[i]);
		free(D[i]);
	}
	free(A);
	free(B);
	free(C);
	free(D);

	return 0;

}
