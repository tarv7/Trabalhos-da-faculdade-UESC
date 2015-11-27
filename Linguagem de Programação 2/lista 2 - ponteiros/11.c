#include<stdio.h>
#include<stdlib.h>

int main(){
	int **M, d, i, j, maior1, maior2, neg;
	long int prod = 1;

	// Verificando a dimensao da matriz
	do{
		printf("Digite a dimensao da matriz(numero maior que 1): ");
		scanf("%d", &d);
	}while(d < 2);

	// Alocando dinamicamente as linhas da matriz
	M = malloc(d * sizeof(int));
	if(M == NULL){
		printf("Memoria esgotada!\n");
		exit(-1);
	}

	// Enchendo a matriz
	for(i = 0; i < d; i++){
		// Alocando dinamicamente as colunas da matriz
		M[i] = malloc(d * sizeof(int));
		if(M[i] == NULL){
			printf("Memoria esgotada!\n");
			exit(-1);
		}

		for(j = 0; j < d; j++){
			printf("M[%d][%d]: ", i, j);
			scanf("%d", &M[i][j]);

			// Verificacao do negativo
			if(M[i][j] < 0)
				neg++;

			// Verificacao dos maiores
			if(i == 0 && j == 0)
				maior1 = M[i][j];
			else
				if(M[i][j] > maior1){
					maior2 = maior1;
					maior1 = M[i][j];
				}else if(i == 0 && j == 1)
					maior2 = M[i][j];
				else if(M[i][j] > maior2)
					maior2 = M[i][j];

			// Calculo do produto
			prod *= M[i][j];

		}
	}

	// Apresentando resultados
	printf("Negativos: %d\nMAior1: %d\nMaior2: %d\nProduto: %ld\n", neg, maior1, maior2, prod);

	// Liberando para o SO a memoria alocada
	for(i = 0; i < d; i++)
		free(M[i]);
	free(M);

	return 0;

}
