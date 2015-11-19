#include<stdio.h>

int main(){
	int a, b, c, *x, *y, *z;

	// Obtendo os valores
	printf("Digite a, b e c: \n");
	scanf("%d %d %d", &a, &b, &c);

	// Obtendo os enderecos de cada variavel
	x = &a;
	y = &b;
	z = &c;

	// Saida para o usuario
	printf("a: %d\nb: %d\nc: %d\n", *x, *y, *z);

	return 0;
}
