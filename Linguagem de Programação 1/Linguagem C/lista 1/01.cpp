#include<stdio.h>
#include<stdlib.h>

int main(){
	float cel, fah;
	
	printf("Digite a temperatura em Celsius: ");
	scanf("%f", &cel);
	
	fah = (9 * cel + 160) / 5;
	printf("%.2f� Celsius = %.2f� Fahrenheits\n", cel, fah);
	
	system("pause");
	return 0;
}
