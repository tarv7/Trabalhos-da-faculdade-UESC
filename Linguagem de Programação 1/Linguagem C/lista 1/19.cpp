#include<stdio.h>
#include<stdlib.h>

int main(){
	float sal = 0, val_aula, desc;
	int aulas;
	char nome[50];
	
	printf("Nome do professor: ");
	fflush(stdin);
	fgets(nome, 50, stdin);
	printf("Valor da hora/aula: ");
	scanf("%f", &val_aula);
	printf("Numero de aulas dadas no mes: ");
	scanf("%d", &aulas);
	printf("Percentual de desconto de INSS: ");
	scanf("%f", &desc);
	
	sal = (val_aula * aulas) - ((val_aula * aulas) * (desc / 100));
	printf("Valor do salario liquido: R$%.2f\n", sal);
	
	system("pause");
	return 0;
}
