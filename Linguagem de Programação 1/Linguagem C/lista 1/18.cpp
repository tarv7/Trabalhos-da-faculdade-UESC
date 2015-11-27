#include<stdio.h>
#include<stdlib.h>

int main(){
	int n1, n2, n3, num;
	
	printf("Numero: ");
	scanf("%d", &num);
	
	n1 = num / 100;
	n2 = (num % 100) / 10;
	n3 = num % 10;
	
	num = n1 + (n2 * 10) + (n3 * 100);
	printf("Numero invertido: %d \n", num);
	
	system("pause");
	return 0;
}
