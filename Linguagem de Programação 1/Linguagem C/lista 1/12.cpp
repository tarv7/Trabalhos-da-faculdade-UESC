#include<stdio.h>
#include<stdlib.h>

int main(){
	float real, dolar, cot;
	
	printf("Real: R$");
	scanf("%f", &real);
	printf("Cotação atual do dolar: ");
	scanf("%f", &cot);
	
	dolar = real * cot;
	printf("Dolar: U$%.2f", dolar);
	
	system("pause");
	return 0;
}
