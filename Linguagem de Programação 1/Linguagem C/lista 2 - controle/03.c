#include<stdio.h>
#include<stdlib.h>

int main(){
	float n;
	
	printf("Digite um numero: ");
	scanf("%f", &n);
	
	if((n >= 20) && (n <= 90))
		printf("Esta entre 20 e 90!\n");
	else
		printf("NAO esta entre 20 e 90!\n");
		
	system("pause");
	return 0;
}
