#include<stdio.h>
#include<stdlib.h>

int main(){
	int n, menor, maior, i;
	
	for(i = 0; i < 10; i++){
		do{
			printf("Digite o numero: ");
			scanf("%d", &n);
		}while(n % 3 != 0);
		
		if(n > maior)
			maior = n;
		if(i == 0)
			menor = n;
		else
			if(n < menor)
				menor = n;
	}
	
	printf("Maior: %d\nMenor: %d\n", maior, menor);
	
	system("pause");
	return 0;
}
