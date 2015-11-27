#include<stdio.h>
#include<stdlib.h>

int main(){
	float cel, fah;
	cel = 0;
	
	printf("Fahrenheit: ");
	scanf("%f", &fah);
	
	cel = (fah - 32) * 0.555;
	printf("Celsius: %.2f\n", cel);
	
	system("pause");
	return 0;
}

