#include<stdio.h>
#include<stdlib.h>

#define d 50

int main(){
	char str[d], *p;
	int tot = -1;

	// Pedindo uma String
	printf("Digite uma String: ");
	setbuffer(stdin, NULL, d);
	fgets(str, d, stdin);

	// Obtendo o endereco da String
	p = str;

	// Calculo de tamanho
	while(*p){
		tot++;
		p++;
	}

	// Saida para o usuario
	printf("%d digitos!\n", tot);

	return 0;
}
