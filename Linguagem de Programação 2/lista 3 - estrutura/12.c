#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define n 2

typedef struct{
	int dia, mes, ano;
}Tdata;

typedef struct{
	char nome[32];
	Tdata data;
}Tpessoa;

int main(){
	Tpessoa pessoa[n], *jovem;
	int i;

	for(i = 0; i < n; i++){
		printf("Nome[%d]: ", i);
		setbuf(stdin, NULL);
		fgets(pessoa[i].nome, 32, stdin);
		pessoa[i].nome[strlen(pessoa[i].nome) - 1] = '\0';
		printf("Data[%d] no formato dd/mm/aa: ", i);
		setbuf(stdin, NULL);
		scanf("%d%*c%d%*c%d", &pessoa[i].data.dia, &pessoa[i].data.mes, &pessoa[i].data.ano);
	}

	if(pessoa[0].data.ano > pessoa[1].data.ano)
		jovem = &pessoa[0];
	else if(pessoa[0].data.ano < pessoa[1].data.ano)
		jovem = &pessoa[1];
	else
		if(pessoa[0].data.mes > pessoa[1].data.mes)
			jovem = &pessoa[0];
		else if(pessoa[0].data.mes < pessoa[1].data.mes)
			jovem = &pessoa[1];
		else
			if(pessoa[0].data.dia > pessoa[1].data.dia)
				jovem = &pessoa[0];
			else if(pessoa[0].data.dia < pessoa[1].data.dia)
				jovem = &pessoa[1];
			else{
				printf("Ambas tem a mesma idade\n");
				return 0;
			}

	printf("%s eh mais jovem e nasceu em %02d/%02d/%d\n", jovem->nome, jovem->data.dia, jovem->data.mes, jovem->data.ano);

	return 0;
}
