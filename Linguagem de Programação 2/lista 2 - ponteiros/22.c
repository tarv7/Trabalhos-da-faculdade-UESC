#include<ctype.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define d 50

int main(){
	char F[d], *p, *o;

	// Pedindo a frase
	printf("Digite uma frase: ");
	setbuffer(stdin, NULL, d);
	fgets(F, d, stdin);

	// Inicializando os ponteiros
	p = F;
	o = F + strlen(F) - 2;

	// pegando os caracteres equidistantes
	while(o > p){
		// Verificando se sao diferentes
		if(tolower(*p) != tolower(*o)){
			printf("Nao eh palindromo!\n");
			exit(-1);
		}

		p++;
		o--;
	}

	// Resultado
	printf("Eh palindromo\n");

	return 0;
}
