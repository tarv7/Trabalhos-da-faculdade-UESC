#include<stdio.h>
#include<stdlib.h>

int main(){
	int *V, *A[2], i, j, n, *p, tam = 0, aux = 0;

	// Solicitando a dimensao do vetor
	printf("Digite a dimensao do vetor(maior que 1): ");
	scanf("%d", &n);

	// verificando tamanho do vetor
	if(n < 2)
		exit(-1);

	// Alocando dinamicamente e verificando
	V = malloc(n * sizeof(int));
	A[0] = malloc((n / 2) * sizeof(int));
	A[1] = malloc((n / 2) * sizeof(int));
	if(V == NULL || A[0] == NULL || A[1] == NULL){
		printf("Memoria esgotada!\n");
		exit(-1);
	}

	// Pedindo os valores
	for(i = 0; i < n; i++){
		printf("V[%d]: ", i);
		scanf("%d", &*(V + i));

		// Enchendo vetor dos repetidos
		for(j = 0; j < tam + 1; j++){
			if(*(V + i) == *(A[0] + j)){
				*(A[1] + j) += 1;
				if(*(V + i) == 0 && aux != 1){
					aux = 1;
					tam++;
				}
				break;
			}else if(j == tam){
				*(A[0] + j) = *(V + i);
				*(A[1] + j) += 1;
				tam++;
				break;
			}
		}
	}

	// Apresentando os resultados
	for(j = 0; j < tam; j++)
		if(*(A[1] + j) > 1)
			printf("%d se repetiu %d vezes\n", *(A[0] + j), *(A[1] + j));
		else
			printf("%d nao se repetiu\n", *(A[0] + j));

	free(V);
	free(A[0]);
	free(A[1]);

	return 0;

}
