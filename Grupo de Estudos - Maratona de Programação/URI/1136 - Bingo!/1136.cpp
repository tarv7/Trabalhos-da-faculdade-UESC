#include<bits/stdc++.h>

#define h 100

using namespace std;

int main(){
	int n, b, bi;
	int dist[h][h];
	vector<bool> globo(h, false);
	vector<bool> somas(h, false);

	for(int i = 0; i < h; i++)
		for(int j = 0; j < h; j++)
			dist[i][j] = abs(i - j);

	scanf("%d %d ", &n, &b);
	while(n){
		globo.assign(n+1, false);
		somas.assign(n+1, false);

		for(int i = 0; i < b; i++){
			scanf("%d", &bi);
			globo[bi] = true;
		}

		for(int i = 0; i <= n; i++)
			if(globo[i])
				for(int j = i; j <= n; j++)
					if(globo[j])
						somas[dist[i][j]] = true;

		int soma = 0;
		for(int i = 0; i <= n; i++)
			if(somas[i])
				soma += i;

		//cout << "soma = " << soma << endl;

		if(soma == (n * (n+1)) / 2)
			printf("Y\n");
		else
			printf("N\n");

		scanf("%d %d ", &n, &b);
	}

	return 0;
}
