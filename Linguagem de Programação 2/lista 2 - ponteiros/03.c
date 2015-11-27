#include<stdio.h>

int main(){
	int a, b, c, *p;

	// Obtendo os valores
	printf("Digite a, b e c: ");
	scanf("%d %d %d", &a, &b, &c);

	// Obtendo endereco e saida para o usuario
	p = &a;
	printf("a: %d\n", *p);
	p = &b;
	printf("b: %d\n", *p);
	p = &c;
	printf("c: %d\n", *p);

	return 0;
}
