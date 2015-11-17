#include<stdio.h>
#include<ctype.h>

#define d 50

int main(){
	char str[d], *p;
	int vog = 0, dig = 0, carc = 0;

	// Pedindo String
	printf("Digite uma String: ");
	setbuffer(stdin, NULL, d);
	fgets(str, d, stdin);

	// Obtendo o endereco da String
	p = str;

	// Loop para verificacao
	while(*p){
		if(tolower(*p) == 'a' || tolower(*p) == 'e' || tolower(*p) == 'i' || tolower(*p) == 'o' || tolower(*p) == 'u')
			vog++;
		else if(*p == ' ' || *p == '\n' || *p == '\t'){
			carc++;
			dig--;
		}
		dig++;
		p++;
	}

	// Saida para o usuario
	printf("Vogais: %d\n", vog);
	printf("Digitos: %d\n", dig);
	printf("Caracteres: %d\n", carc);

	return 0;
}
