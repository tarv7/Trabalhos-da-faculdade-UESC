#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	int x, y, quad;
	
	printf("X: ");
	scanf("%d", &x);
	printf("Y: ");
	scanf("%d", &y);
	
	quad = pow(x - y, 2);
	printf("Quadrado da diferenca: %d", quad);
}
