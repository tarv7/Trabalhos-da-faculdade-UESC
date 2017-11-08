#include<stdio.h>

int main(){
	int min, max, aux, i, soma = 0;

	scanf("%d%d", &min, &max);

	if(min > max){
		aux = min;
		min = max;
		max = aux;
	}

	for(i = min; i <= max; i++)
		if(i % 13)
			soma += i;

	printf("%d\n", soma);

	return 0;
}
