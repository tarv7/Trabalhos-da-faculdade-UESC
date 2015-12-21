#include<stdio.h>
#include<stdlib.h>

typedef struct{
	int x, y, z;
}Tespaco;

int main(){
	Tespaco p;
	int a, b, c, d;

	printf("Digite x, y e z, respectivamente: ");
	scanf("%d %d %d", &p.x, &p.y, &p.z);

	printf("Digite os ceficientes A, B, C e D, respectivamente: ");
	scanf("%d %d %d %d", &a, &b, &c, &d);

	if(a * p.x + b * p.y + c * p.z == d)
		printf("Eh pertencente ao plano\n");
	else
		printf("Nao eh pertencente ao plano\n");

	return 0;
}
