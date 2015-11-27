#include<stdio.h>
#include<stdlib.h>

int main(){
	int A[5], B[5], C[5], i;
	
	for(i = 0; i < 5; i++){
		printf("Digite A[%d]: ", i);
		scanf("%d", &A[i]);
	}
	for(i = 0; i < 5; i++){
		printf("Digite B[%d]: ", i);
		scanf("%d", &B[i]);
		C[i] = A[i] - B[i];
	}
	for(i = 0; i < 5; i++){
		printf("C[%d] = %d\n", i, C[i]);
	}
	
	system("pause");
	return 0;
}
