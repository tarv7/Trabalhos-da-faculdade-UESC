#include<stdio.h>
#include<stdlib.h>
#include<Math.h>

int main(){
	int a, b, c;
	float x1, x2;
	
	printf("Digite A, B e C: ");
	scanf("%d %d %d", &a, &b, &c);
	
	if(a != 0){
		x1 = ( (b * -1) + sqrt(pow(b, 2) -4 * a * c) ) / (2 * a);
		x2 = ( (b * -1) - sqrt(pow(b, 2) -4 * a * c) ) / (2 * a);
		printf("X1: %.2f \nX2: %.2f \n", x1, x2);
	}else{
		printf("O A deve ser diferente de zero!\n");
	}
	
	system("pause");
	return 0;
}
