#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, m, aux, falsos;
	vector<int> bilhetes;

	scanf("%d %d", &n, &m);
	while(n){
		bilhetes.assign(n+1, 0);
		falsos = 0;

		while(m--){
			scanf("%d", &aux);

			if(bilhetes[aux]++ == 1)
				falsos++;
		}

		printf("%d\n", falsos);

		scanf("%d %d", &n, &m);		
	}

	return 0;
}
