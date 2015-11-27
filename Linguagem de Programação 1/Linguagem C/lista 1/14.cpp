#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	int n1, n2, quad;
	
	printf("Digite n1: ");
	scanf("%d", &n1);
	printf("Digite n2: ");
	scanf("%d", &n2);
	
	quad = pow(n1, 2) - pow(n2, 2);
	printf("Diferença de quadrado: %d\n", quad);
	
	system("pause");
	return 0;
}
