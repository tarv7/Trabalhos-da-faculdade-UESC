#include<cstdio>

using namespace std;

int main(){
	int t, n, v[10010], tot, aux;

	scanf("%d", &t);

	while(t--){
		tot = 0;

		scanf("%d", &n);

		for(int i = 1; i <= n; i++)
			scanf("%d", &v[i]);

		for(int i = 1; i <= n;){
			if(v[i] != i){
				aux = v[v[i]];
				v[v[i]] = v[i];
				v[i] = aux;
				tot++;
			}else
				i++;
		}

		printf("%d\n", tot);
	}

	return 0;
}
