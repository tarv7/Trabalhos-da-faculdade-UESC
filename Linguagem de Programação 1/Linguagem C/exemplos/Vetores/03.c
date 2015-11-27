#include<stdio.h>
#include<stdlib.h>

int main(){
	int A[5][3], B[5][3], C[5][3], i, j;
	
	for(i = 0; i < 5; i++)
		for(j = 0; j < 3; j++){
			printf("\nDigite A[%d][%d]: ", i, j);
			scanf("%d", &A[i][j]);
		}
	
	for(i = 0; i < 5; i++)
		for(j = 0; j < 3; j++){
			printf("\nDigite B[%d][%d]: ", i, j);
			scanf("%d", &B[i][j]);
		}
			
	for(i = 0; i < 5; i++)
		for(j = 0; j < 3; j++){
			C[i][j] = A[i][j] + B[i][j];
			printf("\n\nMatriz C[%d][%d]: %d\n", i, j, C[i][j]);
		}
	
	system("pause");
	return 0;
}
