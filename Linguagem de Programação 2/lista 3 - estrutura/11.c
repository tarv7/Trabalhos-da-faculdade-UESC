#include<stdio.h>
#include<stdlib.h>

typedef struct{
	int dia, mes, ano;
}Tdata;

int main(){
	Tdata *data, *jovem;
	int i, n;

	do{
		printf("Digite a quantidade de pessoas(> 0): ");
		scanf("%d", &n);
	}while(n < 0);

	data = malloc(n * sizeof(Tdata));
	if(data == NULL){
		printf("Memoria esgotada\n");
		exit(-1);
	}

	jovem = &data[0];

	for(i = 0; i < n; i++){
		printf("Data[%d] no formato dd/mm/aa: ", i);
		setbuf(stdin, NULL);
		scanf("%d%*c%d%*c%d", &data[i].dia, &data[i].mes, &data[i].ano);

		if(data[i].ano > jovem->ano)
			jovem = &data[0];
		else if(data[i].ano < jovem->ano)
			jovem = &data[1];
		else
			if(data[i].mes > jovem->mes)
				jovem = &data[0];
			else if(data[i].mes < jovem->mes)
				jovem = &data[1];
			else
				if(data[i].dia > jovem->dia)
					jovem = &data[0];
				else
					jovem = &data[1];

	}

	printf("A mais jovem tem nasceu %02d/%02d/%d\n", jovem->dia, jovem->mes, jovem->ano);

	return 0;
}
