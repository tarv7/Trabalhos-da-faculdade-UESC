#include<stdio.h>

int main(){
	float n, *p;

	// Solicitando entrada
	printf("Digite um numero float: ");
	scanf("%f", &n);

	// Obtendo endereco de n
	p = &n;

	// Saida para usuario
	printf("Referencia direta:   %.2f\n", n);
	printf("Referencia indireta: %.2f\n", *p);
	printf("Endereco da variavel: %p\n", p);

	return 0;
}
