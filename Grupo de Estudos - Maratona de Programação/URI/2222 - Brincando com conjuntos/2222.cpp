#include<cstdio>
#include<bitset>

using namespace std;

int main(){
	bitset<60> conj[10010], oper;
	int t, n, m, q, opc[3], x;

	scanf("%d", &t);

	while(t--){
	scanf("%d", &n);

		for(int i = 1; i <= n; i++){
			scanf("%d", &m);
			conj[i].reset();
			for(int j = 0; j < m; j++){
				scanf("%d", &x);
				x--;
				conj[i][x] = 1;
			}
		}

		scanf("%d", &q);
		for(int i = 0; i < q; i++){
			scanf("%d %d %d", &opc[0], &opc[1], &opc[2]);
			if(opc[0] == 1)
				oper = conj[opc[1]] & conj[opc[2]];
			else
				oper = conj[opc[1]] | conj[opc[2]];

			printf("%d\n", (int)oper.count());
		}
	}

	return 0;
}
