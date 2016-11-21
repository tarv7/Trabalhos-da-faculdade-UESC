#include<stdio.h>

int main(){
	int n, joao, maria, aux;

	scanf("%d", &n);

	while(n != 0){
		maria = joao = 0;
		for(; n > 0; n--){
			scanf("%d", &aux);

			if(aux)
				joao++;
			else
				maria++;
		}

		printf("Mary won %d times and John won %d times\n", maria, joao);

		scanf("%d", &n);
	}

	return 0;
}
