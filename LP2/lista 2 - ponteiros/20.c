#include<stdio.h>
#include<stdlib.h>

int main(){
	int **A, a, b, c, l, i, j, *aux, aux2;
	char opc;

	// Obtendo numero de linhas e colunas da matriz e verificando
	printf("Numero de linhas: ");
	scanf("%d", &l);
	printf("Numero de colunas: ");
	scanf("%d", &c);
	if(l < 2 || c < 2){
		printf("Dimensoes invalidas!\n");
		exit(-1);
	}

	// Alocando matriz dinamicamente e verificando
	A = malloc(l * sizeof(int *));
	if(A == NULL){
		printf("Memoria esgotada!\n");
		exit(-1);
	}

	// Enchendo a matriz
	for(i = 0; i < l; i++){
		*(A + i) = malloc(c * sizeof(int));
		for(j = 0; j < c; j++){
			printf("A[%d][%d]: ", i, j);
			scanf("%d", &*(*(A + i) + j));
		}
	}

	// Perguntar se troca linha ou coluna e verificando
	do{
		printf("Queres trocar linha ou coluna?[l/c]: ");
		setbuf(stdin, NULL);
		opc = getchar();
	}while(opc != 'l' && opc != 'c');

	// Perguntando os indices
	printf("Digite o indice: ");
	scanf("%d", &a);

	printf("Digite outro indice: ");
	scanf("%d", &b);

	// Imprimindo a matriz normal
	printf("\nNORMAL\n");
	 for(i = 0; i < l; i++){
                for(j = 0; j < c; j++){
                        printf("% 3d", A[i][j]);
                }
                printf("\n");
        }

	// Fazendo as trocas, caso Linhas e caso Colunas
	switch(opc){
		case 'l':
			if(a >= l || a < 0 || b >= l || b < 0){
				printf("Seus indices nao existem na matriz!\n");
				exit(-1);
			}

			// Trocando os enderecos dos ponteiros
			aux = *(A + a);
			A[a] = *(A + b);
			A[b] = aux;

			break;
		case 'c':
			if(a >= c || a < 0 || b >= c || b < 0){
				printf("Seus indices nao existem na matriz!\n");
				exit(-1);
			}

			// Trocas normais dos numeros
			for(i = 0; i < l; i++){
					aux2 = *(*(A + i) + a);
					*(*(A + i) + a) = *(*(A + i) + b);
					*(*(A + i) + b) = aux2;
			}

			break;
	}

	// Imprimindo a matriz alterada
	printf("\nALTERADA\n");
	for(i = 0; i < l; i++){
		for(j = 0; j < c; j++){
			printf("% 3d", A[i][j]);
		}
		printf("\n");
		free(*(A + i));
	}

	// Liberando memoria
	free(A);

	return 0;

}
