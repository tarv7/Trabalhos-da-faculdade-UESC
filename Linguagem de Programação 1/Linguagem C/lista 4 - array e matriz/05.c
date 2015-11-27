#include<stdio.h>
#include<stdlib.h>

int main(){
	int A[5], B[5], i, j;
	
	for(i = 0; i < 5; i++){
		printf("Digite A[%d]: ", i);
		scanf("%d", &A[i]);
		B[i] = 1;
		for(j = 1; j <= A[i]; j++){
			B[i] *= j;
		}
	}
	for(i = 0; i < 5; i++){
		printf("B[%d] = %d\n", i, B[i]);
	}
	
	system("pause");
	return 0;
}
