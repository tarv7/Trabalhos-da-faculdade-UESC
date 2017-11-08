#include <stdio.h>

#define h 100010
#define MAX_LONG_LONG 9223372036854775807

using namespace std;

typedef struct{
	unsigned long long x, y;
}tPonto;

int main(){
    int c, t, meio, j, k;
    unsigned long long aux1, aux2, soma = 0, R[h];
    tPonto valorT[h];
    
    scanf("%d %d", &c, &t);

    for (int i = 0; i < c; i++){
		scanf("%lld", &aux1);
		R[i] = aux1 * aux1;
	}
	R[c] = MAX_LONG_LONG;

    for (int i = 0; i < t; i++){
		scanf("%lld %lld", &valorT[i].x, &valorT[i].y);
		aux2 = (valorT[i].x * valorT[i].x) + (valorT[i].y * valorT[i].y);

		j = 0;
		k = c;
		while(j <= k){
			meio = (j + k) / 2;
			if(aux2 < R[meio])
				k = meio - 1;
			else if(aux2 > R[meio])
				j = meio + 1;
			else
				break;
		}
		
		if(aux2 > R[meio] && aux2 <= R[meio+1])
			meio++;
		
		soma += c - meio;

	}

	printf("%lld\n", soma);
	
    return 0;
}
