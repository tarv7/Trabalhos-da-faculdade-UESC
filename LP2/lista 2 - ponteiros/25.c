#include<ctype.h>
#include<stdio.h>
#include<string.h>

#define d 80
#define n 10

int main(){
	char str[d], sub[n], *p, *o;
	int tot = 0, aux = 0, i = 0;

	// Pedindo String e Sentenca
	printf("String: ");
	setbuffer(stdin, NULL, d);
	fgets(str, d, stdin);


	printf("Sentenca: ");
	setbuffer(stdin, NULL, n);
	fgets(sub, n, stdin);

	// Verificando se a Sentenca eh maior que a String
	if(strlen(str) < strlen(sub)){
		printf("'%s' aparece 0 vezes em '%s'", sub, str);
		return 0;
	}

	// Fechando as Strings
	p = sub;
	*(p + strlen(sub) - 1) = '\0';
	p = str;
	*(p + strlen(str) - 1) = '\0';

	// Percorrendo a String
	while(*p){
		// Verificando a sentenca por bloco de String
		for(o = p, i = 0, aux = 0; i < strlen(sub); i++, o++)
			if(tolower(sub[i]) == tolower(*o))
				aux++;
			else
				break;
		// Contando o total
		if(aux == strlen(sub))
			tot++;
		p++;
	}

	// Saida para o usuario
	printf("'%s' apareceu %d vezes em '%s'\n", sub, tot, str);

	return 0;

}
