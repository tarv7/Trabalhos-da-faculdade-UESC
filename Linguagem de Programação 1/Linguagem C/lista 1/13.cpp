#include<stdio.h>
#include<stdlib.h>

int main(){
	float base, altura, area;
	
	printf("Base: ");
	scanf("%f", &base);
	printf("Altura: ");
	scanf("%f", &altura);
	
	area = (base * altura) / 2;
	printf("Area: %.2fm\n", area);
	
	system("pause");
	return 0;
}
