#include<stdio.h>
#include<stdlib.h>

int main(){
	int n1, n2, soma;
	
	printf("Escreva 2 numeros inteiros: \n");
	scanf("%d %d", &n1, &n2);
	soma = n1 + n2;
	
	if(soma >= 10){
		soma += 5;
	}else{
		soma -= 7;
	}

	printf("Soma: %d\n", soma);

	system("pause");
	return 0;
}
