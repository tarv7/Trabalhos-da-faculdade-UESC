#include<stdio.h>
#include<stdlib.h>

int main(){
	int d, *V, i, n, tam = 0, j, k, aux;

	// Pedindo a dimensao do vetor e verificando
	printf("n(> 1): ");
	scanf("%d", &d);
	if(d < 2)
		exit(-1);

	// Alocando vetor dinamicamente e verificando
	V = malloc(d * sizeof(int));
	if(V == NULL){
		printf("Memoria esgotada!\n");
		exit(-1);
	}

	// Loop para encher o vetor
	for(i = 0; i < d; i++){
		printf("% 2dº Elemento: ", i);
		scanf("%d", &n);

		// Caso base para insercao no vetor
		if(i == 0){
			V[i] = n;
			tam++;
			printf("%d\n", V[i]);
			continue;
		}

		// loop para percorrer o vetor afim de testar o maior e ordenar
		for(j = 0; j < tam; j++){
			if(V[j] >= n){
				for(k = tam; k >= j; k--){
					V[k] = V[k - 1];
				}
				V[j] = n;
				break;
			}else if(j + 1 == tam){
				V[tam] = n;
				break;
			}
		}

		// Incrementando o tamanho do vetor
		tam++;

		// Mostrando vetor ordenado a cada nova insercao
		for(j = 0; j < tam; j++){
			if(j + 1 == tam)
				printf("%d\n", V[j]);
			else
				printf("%d, ", V[j]);
		}

	}

	return 0;

}
