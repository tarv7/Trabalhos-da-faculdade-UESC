#include<stdio.h>
#include<stdlib.h>

int main(){
	float valor, taxa, prest;
	int tempo;
	
	printf("Valor: ");
	scanf("%f", &valor);
	printf("Taxa: ");
	scanf("%f", &taxa);
	printf("Tempo: ");
	scanf("%d", &tempo);
	
	prest = valor + (valor * (taxa / 100) * tempo);
	printf("Prestação: %.2f", prest);
	
	system("pause");
	return 0;
}
