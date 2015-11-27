#include<stdio.h>
#include<stdlib.h>

int main(){
	char sexo;
	
	printf("Digite o sexo: ");
	fflush(stdin);
	scanf("%c", &sexo);
	
	switch (sexo){
		case 'f':
		case 'F':
			printf("Feminino!\n");
			break;
		case 'm':
		case 'M':
			printf("Masculino!\n");
			break;
		default:
			printf("Invalido!\n");
	}
	
	system("pause");
	return 0;
}
