#include<stdio.h>
#include<stdlib.h>

#define pi 3.1415


int main(void){
	float raio, area;
	//const float pi = 3.1415;
	area = 0;
	
	printf("Digite o raio: ");
	scanf("%f", &raio);
	area = pi * raio * raio;
	
	printf("Area: %.2f", area);
	
	system("pause");
	return (0);
}
