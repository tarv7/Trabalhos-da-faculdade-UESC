#include<stdio.h>
#include<stdlib.h>

int main(){
	int A[10], B[10], i;
	
	for(i = 0; i < 10; i++){
		printf("\nDigite A no indice %d: ", i);
		scanf("%d", &A[i]);
		
		B[i] = A[i] * 5;
		printf("Matriz B no indice %d: %d", i, B[i]);
	}
	
	system("pause");
	return 0;
}
