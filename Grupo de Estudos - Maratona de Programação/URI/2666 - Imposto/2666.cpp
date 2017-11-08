#include<bits/stdc++.h>

using namespace std;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vii> vvii;

int n, car, a, b, c;
int tot;
vi imposto;
vvii arvore;
vii pai;
vector<bool> token;

void visita(int no){
	if(token[no] == true)
		return;

	int tamNo = arvore[no].size();
	for(int i = 0; i < tamNo; i++)
		if(arvore[no][i].first != pai[no].first)
			visita(arvore[no][i].first);

	imposto[pai[no].first] += imposto[no];
	tot += (imposto[no] / car) * pai[no].second * 2;
	imposto[no] %= car;
	if(imposto[no] > 0)
		tot += pai[no].second * 2;

	token[no] = true;
}

void fazPai(){
	queue<int> fila;
	vector<bool> visitados;

	fila.push(1);
	visitados.assign(n+1, false);

	while(!fila.empty()){
		int num = fila.front(); fila.pop();
		visitados[num] = true;

		for(int i = 0; i < arvore[num].size(); i++){
			if(visitados[arvore[num][i].first] == false){
				pai[arvore[num][i].first] = make_pair(num, arvore[num][i].second);
				fila.push(arvore[num][i].first);
			}
		}
	}

	pai[1] = ii(1, 0);
}

int main(){
	tot = 0;

	scanf("%d %d", &n, &car);

	imposto.assign(n + 1, 0);
	for(int i = 1; i <= n; i++){
		scanf("%d", &imposto[i]);
	}

	arvore.assign(n + 1, vii());
	pai.assign(n + 1, ii());
	token.assign(n + 1, false);

	for(int i = 1; i < n; i++){
		scanf("%d %d %d", &a, &b, &c);

		arvore[a].push_back(make_pair(b, c));
		arvore[b].push_back(make_pair(a, c));
	}

	fazPai();
	visita(1);

	cout << tot << endl;

	return 0;
}
