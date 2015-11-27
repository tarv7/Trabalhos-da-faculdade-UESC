#include<stdio.h>
#include<stdlib.h>

int main(){
	int x, y;
	
	printf("X: ");
	scanf("%d", &x);
	printf("Y: ");
	scanf("%d", &y);
	
	printf("Soma: %d\n", x + y);
	printf("Multiplicacao: %d\n", x * y);
	printf("Quociente: %d\n", x / y);
	
	system("pause");
	return 0;
}
