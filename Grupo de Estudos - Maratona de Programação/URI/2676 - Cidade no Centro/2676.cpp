#include<bits/stdc++.h>

#define h 110
#define INF 10000100

using namespace std;

int n, r;
int a, b, d;
int grafo[h][h], dist[h];

void fllod(){
    for(int k = 1; k <= n; k++)
        for(int i = 1; i <= n; i++)
            for(int j = 1; j <= n; j++)
                grafo[i][j] = min(grafo[i][j], grafo[i][k] + grafo[k][j]);
}

void menor(){
    int men = INF;

    for(int i = 1; i <= n; i++){
        dist[i] = 0;
        for(int j = 1; j <= n; j++)
            dist[i] += grafo[i][j];

        if(dist[i] < men)
            men = dist[i];
    }

    for(int i = 1; i <= n; i++)
        if(dist[i] == men)
            printf("%d ", i);

	printf("\n");
}

int main(){
    scanf("%d%d", &n, &r);
    while(n){
		for(int i = 1; i <= n; i++)
			for(int j = 1; j <= n; j++)
				grafo[i][j] = INF;

        for(int i = 0; i < r; i++){
            scanf("%d%d%d", &a, &b, &d);
            grafo[a][b] = d;
            grafo[b][a] = d;
        }

        fllod();
        menor();

        scanf("%d%d", &n, &r);
    }

    return 0;
}
