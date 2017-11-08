#include<bits/stdc++.h>

#define h 500

using namespace std;

int main(){
	int n, v, e, uniao[h], tot;
	char de, para, aux;

	scanf("%d", &n);
	for(int caso = 1; caso <= n; caso++){
		scanf("%d %d", &v, &e);

		for(int i = 'a'; i <= 'z'; i++)
			uniao[i] = i;

		for(int i = 0; i < e; i++){
			scanf(" %c", &de);
			scanf(" %c", &para);

			aux = uniao[para];
			for(int j = 'a'; j <= 'z'; j++)
				if(uniao[j] == aux)
					uniao[j] = uniao[de];
		}

		printf("Case #%d:\n", caso);
		tot = 0;
		for(int i = 'a'; i < v + 'a'; i++){
			if(uniao[i] != -1){
				printf("%c,", i);
				for(int j = i + 1; j < v + 'a'; j++)
					if(uniao[i] == uniao[j]){
						printf("%c,", j);
						uniao[j] = -1;
					}
				uniao[i] = -1;
				printf("\n");
				tot++;
			}
		}
		printf("%d connected components\n\n", tot);
	}

	return 0;
}
