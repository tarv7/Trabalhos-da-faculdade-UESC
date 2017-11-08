#include<bits/stdc++.h>

using namespace std;
typedef pair<int, char> ic;
typedef vector<ic> vic;
typedef vector<vic> vvic;

vector<bool> token;
vvic arestas;
int nos;

int tem(vic , char );
void build(string );
int consulta(string );

int main(){
	int n, tot;
	string pal;
	queue<string> fila;

	while(scanf("%d", &n) != EOF){
		while(!fila.empty())
			fila.pop();
		tot = 0;
		nos = 0;
		token.assign(1000000, false);
		arestas.assign(1000000, vic());

		for(int i = 0; i < n; i++){
			cin >> pal;

			build(pal);
			fila.push(pal);
		}

		for(int i = 0; i < n; i++){
			tot += consulta(fila.front());
			fila.pop();
		}

		printf("%.2f\n", (float)tot / n);
	}

	return 0;
}

int consulta(string pal){
	int tot = 1, no = 0;

	no = tem(arestas[no], pal[0]);
	for(int i = 1; i < pal.size(); i++){
		if(arestas[no].size() > 1 || token[no]){
			no = tem(arestas[no], pal[i]);
			tot++;
		}else{
			no = arestas[no][0].first;
		}
	}

	return tot;
}

int tem(vic aresta, char letra){
	for(int i = 0; i < aresta.size(); i++)
		if(aresta[i].second == letra)
			return aresta[i].first;
	return -1;
}

void build(string pal){
	if(nos == 0){
		for(int i = 0; i < pal.size(); i++){
			arestas[i].push_back(ic(++nos, pal[i]));
		}

		arestas[nos].clear();
		token[nos] = true;
		return;
	}

	int i = 0, j = 0;
	while(tem(arestas[i], pal[j]) != -1){
		i = tem(arestas[i], pal[j++]);
		if(j == pal.size())
			break;
	}

	if(j == pal.size()){
		token[i] = true;
		return;
	}

	for(; j < pal.size(); j++){
		arestas[i].push_back(ic(++nos, pal[j]));
		i = nos;
	}

	arestas[nos].clear();
	token[nos] = true;
}
