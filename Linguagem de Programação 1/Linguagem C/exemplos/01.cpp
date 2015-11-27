#include<stdio.h>
#include<stdlib.h>
int
main(){
	system("color 0f");
	
	int n1, n2, soma;
	soma = 0;
	
	printf("Digite n1: ");
	scanf("%d", &n1);
	printf("Digite n2: ");
	scanf("%d", &n2);
	
	soma = n1 + n2;
	
	printf("Soma = %d", soma);
	
	system("pause");
	return 0;
}
