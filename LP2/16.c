#include<stdio.h>
#include<ctype.h>

#define d 50

int main(){
	char str[d], *p;
	int vog[5] = {0, 0, 0, 0, 0}, dig = 0, carc = 0, j;

	// Pedindo uma String
	printf("Digite a String: ");
	setbuffer(stdin, NULL, d);
	fgets(str, d, stdin);

	// Obtendo o endereco da String
	p = str;

	// Loop para verificacao
	while(*p){

		if(tolower(*p) == 'a')
			vog[0]++;
		else if(tolower(*p) == 'e')
			vog[1]++;
		else if(tolower(*p) == 'i')
			vog[2]++;
		else if(tolower(*p) == 'o')
			vog[3]++;
		else if(tolower(*p) == 'u')
			vog[4]++;

		if(*p == ' ' || *p == '\t' || *p == '\n'){
			carc++;
			dig--;
		}

		dig++;
		p++;
	}

	// Saidas para o usuario
	printf("\nVOGAIS");
	printf("\na ");
	for(j = 0; j < vog[0]; j++)
		printf("*");

	printf("\ne ");
	for(j = 0; j < vog[1]; j++)
		printf("*");

	printf("\ni ");
	for(j = 0; j < vog[2]; j++)
		printf("*");

	printf("\no ");
	for(j = 0; j < vog[3]; j++)
		printf("*");

	printf("\nu ");
	for(j = 0; j < vog[4]; j++)
		printf("*");

	printf("\n\nDigitos: %d\n", dig);
	printf("Caracteres: %d\n", carc);

	return 0;
}
