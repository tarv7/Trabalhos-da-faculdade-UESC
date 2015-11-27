#include<stdio.h>
#include<stdlib.h>

int main(){
	int A[10], i;
	
	for(i = 0; i < 10; i++){
		printf("Digite A[%d]: ", i);
		scanf("%d", &A[i]);
	}
	for(i = 0; i < 10; i++){
		printf("A[%d] = %d\n", i, A[i]);
	}
	
	system("pause");
	return 0;
}
