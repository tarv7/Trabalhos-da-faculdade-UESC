#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define n 80

int main(){
	char str[n], sub[2], *p;
	short unsigned int tot = 0, i = 0;

	// Entrada da String str
	printf("Digite a string: ");
	setbuf(stdin, NULL);
	fgets(str, n, stdin);

	// Entrada da String sub e verificando
	printf("Digite a substring(2 caracteres): ");
	setbuf(stdin, NULL);
	scanf("%s", sub);

	if(strlen(sub) != 2)
		exit(-1);

	// Obtendo endereco de str
	p = str;

	// Fazendo a verificacao
	for(i = 0; i < strlen(str) - 1; i++)
		if(*str == *(p + i)  && *(str + 1) == *(p + i + 1))
			tot++;

	// Saida para o usuario
	printf("'%s' aparece %d na frase %s", sub, tot, str);

	return 0;
}
