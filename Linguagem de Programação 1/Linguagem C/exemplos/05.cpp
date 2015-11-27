#include<stdio.h>
#include<stdlib.h>

int main(){
	int a, b, c;
	
	printf("Digite os lados do triangulo: \n");
	scanf("%d %d %d", &a, &b, &c);
	
	if((a < b + c) && (b < a + c) && (c < a + b))
		if((a == b) && (b == c))
			printf("Equilatero! \n\n");
		else
			if((a != b) && (a != c) && (b != c))
				printf("Escaleno! \n\n");
			else
				printf("Isosceles");
	else
		printf("Medidas invalidas! \n\n");
}
