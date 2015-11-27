#include<stdio.h>
#include<stdlib.h>

int main(){
	int A[5], B[5], i;
	
	for(i = 0; i < 5; i++){
		printf("Digite A[%d]: ", i);
		scanf("%d", &A[i]);
	}
	for(i = 0; i < 5; i++){
		B[i] = pow(A[i], 2);
		printf("A[%d] = %d\tB[%d] = %d\n", i, A[i], i, B[i]);
	}
	
	system("pause");
	return 0;
}
