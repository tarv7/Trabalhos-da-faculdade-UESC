#include<stdio.h>
#include<stdlib.h>

int main(){
	int A[7], B[7], C[7][2], i , j;
	
	for(i = 0; i < 7; i++){
		printf("Digite A[%d]: ", i);
		scanf("%d", &A[i]);
		printf("Digite B[%d]: ", i);
		scanf("%d", &B[i]);
		C[i][0] = A[i];
		C[i][1] = B[i];
	}
	
	for(i = 0; i < 7; i++){
		for(j = 0; j < 2; j++)
			printf(" %d", C[i][j]);
			
		printf("\n");
	}
	
	system("pause");
	return 0;
}
