#include<stdio.h>
#include<stdlib.h>

int main(){
	int op;
	
	printf("1 - Big Super Sanduba, 		R$8,50\n");
	printf("2 - Quase Super Sanduba, 	R$6,00\n");
	printf("3 - mirrandus Sanduba, 		R$4,00\n");
	scanf("%d", &op);
	
	switch(op){
		case 1:
			printf("2 Hamburgueres, queijo, batata frita e refrigerante.\n");
			break;
		case 2:
			printf("1 hamburguer, batata frita e refrigerante.\n");
			break;
		case 3:
			printf("1 misto quente e refrigerante.\n");
			break;
		default:
			printf("Opcao invalida!\n");
	}
	
	system("pause");
	return 0;
}
