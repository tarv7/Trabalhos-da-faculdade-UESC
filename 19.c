#include<stdio.h>
#define n 80

int main(){
	char F[n], *p, i = 0;

	// Pedindo a frase
	printf("Digite uma frase: ");
	setbuf(stdin, NULL);
	fgets(F, n, stdin);

	// Obtendo endereco da frase
	p = F;

	// Desconbrindo o tamanho da frase
	while(*p){
		i++;
		p++;
	}

	// Obtendo endereco do ultimo digito da frase
	p = F + i;

	// Imprimindo em ordem reversa e maiusculo
	for(; p >= F; p--)
		if(*p >= 97 && *p <= 123)
			printf("%c", *p - 32);
		else
			printf("%c", *p);

	printf("\n");

	return 0;
}
