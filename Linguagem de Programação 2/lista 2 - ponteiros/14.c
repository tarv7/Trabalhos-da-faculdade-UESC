#include<stdio.h>
#include<ctype.h>

#define d 50

int main(){
	char str[d], c, *p;
	int tot = 0;

	// Pedindo String e char
	printf("Digite uma String e um Caracter, respectivamente: ");
	setbuffer(stdin, NULL, d);
	fgets(str, d, stdin);
	setbuf(stdin, NULL);
	c = getchar();

	// Obtendo o endereco da String
	p = str;

	// Verificando quantos 'c' ha na String
	while(*p){
		if(tolower(*p) == tolower(c))
			tot++;
		p++;
	}

	// Saida para o usuario
	printf("%d caracter \"%c\" na string %s\n", tot, c, str);

	return 0;
}
