#include<bits/stdc++.h>

using namespace std;

int main(){
	string fruta;
	int n, m, p, q;
	map<string, float> frutas;
	float valor, tot;

	scanf("%d", &n);
	while(n--){
		tot = 0;

		scanf("%d", &m);
		while(m--){
			cin >> fruta;
			scanf("%f", &valor);
			frutas[fruta] = valor;
		}

		scanf("%d", &p);
		while(p--){
			cin >> fruta;
			scanf("%d", &q);

			tot += (frutas[fruta] * q);
		}

		printf("R$ %.2f\n", tot);
	}

	return 0;
}
