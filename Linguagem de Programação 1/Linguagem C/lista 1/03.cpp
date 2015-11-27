#include<stdio.h>
#include<stdlib.h>

int main(){
	system("color f0");
	int a, b, aux;
	
	printf("Digite A: ");
	scanf("%d", &a);
	printf("Digite B: ");
	scanf("%d", &b);
	
	aux = a;
	a = b;
	b = aux;
	
	printf("A: %d B: %d\n", a, b);
	
	system("pause");
	return 0;
}
