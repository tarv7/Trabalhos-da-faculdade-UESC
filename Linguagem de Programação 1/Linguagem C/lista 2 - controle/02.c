#include<stdio.h>
#include<stdlib.h>

int main(){
	int n, i;
	
	for(i = 0; i < 4; i++){
		printf("Escreva um numero: ");
		scanf("%d", &n);
		if((n % 2 == 0) || (n % 3 == 0)){
			printf("%d \n", n);
		}
	}
	
	system("pause");
	return 0;
}
