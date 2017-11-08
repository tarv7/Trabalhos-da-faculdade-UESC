#include<bits/stdc++.h>

#define g 40000
#define h 100000

using namespace std;

vector<set<int> > Pontos;
set<int>::iterator as[2], asf[2];
int n, x, y, maior, menor, criticos;

int intercala(int ind){
	int i, maiorTemp = 0;
	int soma = Pontos[ind-1].size() + Pontos[ind+1].size();
	set<int> onda;

	if((Pontos[ind-1].size() == 0 || Pontos[ind+1].size() == 0) || soma < criticos){
		//cout << "Nao percorreu pq nao era necessario" << endl;
		return 1;
	}

	as[0] = Pontos[ind-1].begin();
	as[1] = Pontos[ind+1].begin();
	asf[0] = Pontos[ind-1].end();
	asf[1] = Pontos[ind+1].end();
//cout << "a = " << ind - g << endl;
	if(*as[0] == *as[1]){
		for(int j = 0; j < 2; j++){
			i = j;
			onda.clear();
			as[0] = Pontos[ind-1].begin();
			as[1] = Pontos[ind+1].begin();

			while(as[i] != asf[i]){
				if(onda.size() == 0 || *onda.rbegin() < *as[i]){
					onda.insert(*as[i]);
					//cout << "(" << i << ") " << *as[i] << " -> ";
					as[i]++;
					i = (i + 1) % 2;
				}else{
					as[i]++;
				}
			}
			maiorTemp = max(maiorTemp, (int)onda.size());
//cout << "j = " << j << endl;
		}
		return maiorTemp;
	}else if(*as[0] < *as[1])
		i = 0;
	else
		i = 1;

//cout << "a = " << ind-g << endl;
	while(as[i] != asf[i]){
		if(onda.size() == 0 || *onda.rbegin() < *as[i]){
			onda.insert(*as[i]);
			//cout << "(" << i << ") " << *as[i] << " -> ";
			as[i]++;
			i = (i + 1) % 2;
		}else{
			as[i]++;
		}
	}
	//cout << endl;

	return onda.size();
}

int main(){
    while(scanf("%d ", &n) != EOF){
        menor = h;
        maior = -h;
		Pontos.assign(h, set<int>());
		criticos = 1;

        for(int i = 0; i < n; i++){
            scanf("%d %d ", &x, &y);

            Pontos[y + g].insert(x);

            maior = max(y, maior);
            menor = min(y, menor);
        }

        for(int i = menor + g + 1; i < maior + g; i++){
			int atual = intercala(i);

			if(atual > criticos)
				criticos = atual;
        }
//cout << endl;

		printf("%d\n", criticos);
    }

    return 0;
}
