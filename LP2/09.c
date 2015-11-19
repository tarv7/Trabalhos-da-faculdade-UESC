#include<stdio.h>
#include<stdlib.h>

int main(){
	int *M, *maior, *menor, n, i;
        float media;

	// Pedindo tamanho do vetor e verificando
        printf("Digite o tamanho do vetor(> 1): ");
        scanf("%d", &n);
	if(n < 1)
		exit(-1);

	// Alocando vetor dinamicamente e verificando
        M = malloc(n * sizeof(int));
        if(M == NULL){
                printf("Memoria esgotada!\n");
                exit(-1);
        }

	// Loop para encher o vetor
        for(i = 0; i < n; i++){
                printf("Digite o %d elemento: ", i+1);
                scanf("%d", &*(M + i));

		// calculo de media
                media += (float)*(M + i) / n;

		// Verificando maior e menor
                if(i == 0){
                        maior = &*(M + i);
                        menor = &*(M + i);
                }else{
                        if(*(M + i) > *maior)
                                maior = &*(M + i);
                        if(*(M + i) < *menor)
                                menor = &*(M + i);
                }
        }

	// Saida para o usuario
        printf("Media: %.2f\n", media);
        printf("Maior: %d\n", *maior);
	printf("Menor: %d\n", *menor);

	free(M);

	return 0;
}
