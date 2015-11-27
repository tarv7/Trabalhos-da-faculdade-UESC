#include<stdio.h>
#include<stdlib.h>

int main(){
	int n1, n2;
	float res;
	
	printf("Digite N1 e N2: ");
	scanf("%d %d", &n1, &n2);
	res = n1 + n2;
	printf("Adicao: %.2f\n", res);
	res = n1 - n2;
	printf("Subtracao: %.2f\n", res);
	res = n1 * n2;
	printf("Multiplicacao: %.2f\n", res);
	res = n1 / n2;
	printf("Divisao: %.2f\n", res);
	
	system("pause");
	return 0;
}
