#include<bits/stdc++.h>

using namespace std;

typedef struct{
	int jog, xy;
	char lc[1];
}cel;

int main(){
	int n, m, k, jog[4];
	set<int> l, c;
	cel rod[500001];
	char aux;

	scanf("%d %d %d", &n, &m, &k);

	for(int i = 0; i < 4; i++)
		jog[i] = 0;

	for(int i = k-1; i >= 0; i--){
		scanf("%s %d", &rod[i].lc, &rod[i].xy);
		rod[i].jog = ((k-1) - i) % 4;
	}

	for(int i = 0; i < k; i++){
		if(rod[i].lc[0] == 'C'){
			if(c.find(rod[i].xy) == c.end()){
				jog[rod[i].jog] += (n - l.size());
				c.insert(rod[i].xy);
			}
		}else{
			if(l.find(rod[i].xy) == l.end()){
				jog[rod[i].jog] += (m - c.size());
				l.insert(rod[i].xy);
			}
		}
	}

	printf("R%d H%d C%d P%d\n", jog[0], jog[1], jog[2], jog[3]);

	return 0;
}
