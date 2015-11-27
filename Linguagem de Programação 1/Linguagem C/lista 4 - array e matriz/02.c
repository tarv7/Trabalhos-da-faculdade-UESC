#include<stdio.h>
#include<stdlib.h>

int main(){
	int A[8], B[8], i;
	
	for(i = 0; i < 8; i++){
		printf("Digite A[%d]: ", i);
		scanf("%d", &A[i]);
		B[i] = A[i] * 3;
	}
	for(i = 0; i < 8; i++){
		printf("B[%d] = %d\n", i, B[i]);
	}
	
	system("pause");
	return 0;
}
