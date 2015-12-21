#include<stdio.h>
#include<stdlib.h>

#define n 2

typedef struct{
	int dia, mes, ano;
}Tdata;

int main(){
	Tdata data[n], *jovem;
	int i;

	for(i = 0; i < n; i++){
		printf("Data[%d] no formato dd/mm/aa: ", i);
		setbuf(stdin, NULL);
		scanf("%d%*c%d%*c%d", &data[i].dia, &data[i].mes, &data[i].ano);
	}

	if(data[0].ano > data[1].ano)
		jovem = &data[0];
	else if(data[0].ano < data[1].ano)
		jovem = &data[1];
	else
		if(data[0].mes > data[1].mes)
			jovem = &data[0];
		else if(data[0].mes < data[1].mes)
			jovem = &data[1];
		else
			if(data[0].dia > data[1].dia)
				jovem = &data[0];
			else if(data[0].dia < data[1].dia)
				jovem = &data[1];
			else{
				printf("Ambas tem a mesma idade\n");
				return 0;
			}

	printf("A mais jovem tem nasceu %d/%d/%d\n", jovem->dia, jovem->mes, jovem->ano);

	return 0;
}
