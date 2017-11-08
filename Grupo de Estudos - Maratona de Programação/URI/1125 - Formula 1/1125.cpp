#include<bits/stdc++.h>

#define h 101

using namespace std;

int main(){
	int g, p, s, k, ks[h], pil[h][h], maior, vet[h], aux;

	scanf("%d %d", &g, &p);
	while(g){

		for(int i = 1; i <= g; i++)
			for(int j = 1; j <= p; j++)
				scanf("%d", &pil[i][j]);

		scanf("%d", &s);
		for(int i = 1; i <= s; i++){
			scanf("%d", &k);
			for(int j = 1; j <= k; j++){
				scanf("%d", &ks[j]);
			}

			//Zera
			for(int j = 0; j <= p; j++)
				vet[j] = 0;

			// Monta vetor de vencedores
			maior = -1;
			for(int m = 1; m <= p; m++){
				for(int l = 1; l <= g; l++){
					if(pil[l][m] <= k)
						vet[m] += ks[pil[l][m]];
				}
				if(vet[m] > maior)
					maior = vet[m];
			}

			// Printando os vencedores
			for(aux = 1; aux <= p; aux++)
				if(vet[aux] == maior){
					printf("%d", aux++);
					break;
				}

			for(int j = aux; j <= p; j++)
				if(vet[j] == maior)
					printf(" %d", j);
			printf("\n");

		}

		scanf("%d %d", &g, &p);
	}

	return 0;
}
