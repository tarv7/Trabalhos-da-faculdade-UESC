#include<stdio.h>
#include<stdlib.h>

int main(){
	int n1, n2, n3, n4, media;
	
	printf("N1: ");
	scanf("%d", &n1);
	printf("N2: ");
	scanf("%d", &n2);
	printf("N3: ");
	scanf("%d", &n3);
	printf("N4: ");
	scanf("%d", &n4);
	
	media = (n1 + (n2 * 2) + (n3 * 3) + (n4 * 4)) / 10;
	printf("Media ponderada: %d \n", media);
	
	system("pause");
	return 0;
}
