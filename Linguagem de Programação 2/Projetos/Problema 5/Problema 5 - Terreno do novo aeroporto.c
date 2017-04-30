#include<stdio.h>
#include<stdlib.h>

// Pega maior e menor elemento de uma area
void MaxMin(int ** , int , int , int , int );

// funcao recursiva q corta a area pra esquerda, cima, direita, baixo, respectivamente
void Recursivo(int ** , int , int , int , int , int , int *);

int compTot = 0;
int largTot = 0;
int xMaior, yMaior, xMenor, yMenor; // coordenadas
int coordix, coordfx, coordiy, coordfy;

int main(){
	int **c, **m, var, i, j, areaMaior = 0;
	float area, comp, larg;
	FILE *f;

	xMaior = xMenor = yMaior = yMenor = 0;

	f = fopen("06.in", "r");
	if(!f){
		printf("Erro ao manipular o arquivo!\n");
		exit(-1);
	}

	fscanf(f, "%d", &var);
	fscanf(f, "%f%f%f", &area, &comp, &larg);
	// comp = x coluna
	// larg = y linhas
	compTot = (comp * 10) - 1;
	largTot = (larg * 10) - 1;

	m = (int **) malloc(larg * 10 * sizeof(int *));
	if(!m){
		printf("Estouro de memoria\n");
		exit(-1);
	}

	for(i = 0; i <= largTot; i++){
		m[i] = (int *) malloc(comp * 10 * sizeof(int));
		if(!m[i]){
			printf("Estouro de memoria\n");
			exit(-1);
		}
		for(j = 0; j <= compTot; j++){
			fscanf(f, "%d", &m[i][j]);
		}
		fscanf(f, "\n");
	}

	Recursivo(m, var, 0, 0, compTot, largTot, &areaMaior);

	printf("Area maior eh: %d na variancia de %d. O pedaco area eh: \n\n", areaMaior, var);

	for(i = coordiy; i <= coordfy; i++){
		for(j = coordix; j <= coordfx; j++){
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}

	return 0;
}

void MaxMin(int **m, int ix, int iy, int fx, int fy){
	int i, j;

	xMaior = ix;
	yMaior = iy;
	xMenor = ix;
	yMenor = iy;

	printf("\n\n");

	for(i = iy; i <= fy; i++){
		for(j = ix; j <= fx; j++){
			printf("i: %d j: %d\nMaior: %d  Menor: %d\n", i, j, m[yMaior][xMaior], m[yMenor][xMenor]);
			if(m[i][j] > m[yMaior][xMaior]){
				xMaior = j;
				yMaior = i;
			}
			if(m[i][j] < m[yMenor][xMenor]){
				xMenor = j;
				yMenor = i;
			}
		}
	}
}

void Recursivo(int **m, int var, int ix, int iy, int fx, int fy, int *areaMaior){
	int sub, aux;

	MaxMin(m, ix, iy, fx, fy);

	aux = (fx - ix + 1) * (fy - iy + 1);
	if(aux <= *areaMaior)
		return ;

	if(m[yMaior][xMaior] - m[yMenor][xMenor] <= var){
		if(aux > *areaMaior){
			*areaMaior = aux;
			coordix = ix;
			coordfx = fx;
			coordiy = iy;
			coordfy = fy;
			return ;
		}
	}
	printf("Area: %d\n\n", *areaMaior);


	// X final
	if(xMaior >= xMenor)
		sub = fx - xMaior + 1;
	else
		sub = fx - xMenor + 1;

	if(ix <= fx - sub)
		Recursivo(m, var, ix, iy, fx - sub, fy, areaMaior);

	MaxMin(m, ix, iy, fx, fy);


	// Y final
	if(yMaior >= yMenor)
		sub = fy - yMaior + 1;
	else
		sub = fy - yMenor + 1;

	if(iy <= fy - sub)
		Recursivo(m, var, ix, iy, fx, fy - sub, areaMaior);

	MaxMin(m, ix, iy, fx, fy);


	// X inicial
	if(xMaior <= xMenor)
    	sub = xMaior - ix + 1;
    else
    	sub = xMenor - ix + 1;

	if(ix + sub <= fx)
		Recursivo(m, var, ix + sub, iy, fx, fy, areaMaior);

	MaxMin(m, ix, iy, fx, fy);


	// Y inicial
    if(yMaior <= yMenor)
    	sub = yMaior - iy + 1;
    else
    	sub = yMenor - iy + 1;

	if(iy + sub <= fy)
		Recursivo(m, var, ix, iy + sub, fx, fy, areaMaior);

}
