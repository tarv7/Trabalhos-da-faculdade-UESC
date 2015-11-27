#include<ctype.h>
#include<stdio.h>
#include<string.h>
#define d 20

int main(){
	char A[d], *p, *o, c;
	int i = 1;

	// Pedindo String
	printf("Digite uma String: ");
	setbuffer(stdin, NULL, d);
	fgets(A, d, stdin);

	// Pedindo Caracter
	printf("Digite um caracter: ");
	setbuf(stdin, NULL);
	c = getchar();

	// Inicializando p com endereco de A
	p = A;

	//*(p + strlen(A) - 1) = '\0';

	while(*p){
		// Verificando se os caracters sao iguais
		if(tolower(*p) == tolower(c)){
			for(o = p; o < A + strlen(A) - i; o++)
				*o = *(o + 1);
			i++;
		}
		p++;
	}

	// Fechando String
	*(p - i) = '\0';

	// Mostrando String
	puts(A);

	return 0;
}
