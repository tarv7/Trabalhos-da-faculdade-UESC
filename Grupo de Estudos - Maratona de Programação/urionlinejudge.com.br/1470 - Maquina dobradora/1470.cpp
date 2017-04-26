#include<iostream>

#define h 15
#define g 300

using namespace std;

void dobra(int [] , int , int , int , int , int , int );
bool compara(int * , int , int );
void debug(int *v, int , int , int , int , int , int );

int w[h], wi[h];
bool foi;

int main(){
	int n, m, v[300];
	long long sumV, sumW;
	bool fita;

	while(cin >> n){
		sumV = sumW = 0;
		foi = false;

		for(int i = 0; i < g; i++){
			v[i] = 0;
		}

		for(int i = 140; i < 140 + n; i++){
			cin >> v[i];
			sumV += v[i];
		}

		cin >> m;
		for(int i = 0; i < m; i++){
			cin >> w[i];
			wi[m-i-1] = w[i];
			sumW += w[i];
		}

		if(sumV != sumW)
			fita = false;
		else{
			dobra(v, 0, n, m, 0, 140, 140+n-1);
			fita = foi;
		}

		if(foi)
			cout << "S" << endl;
		else
			cout << "N" << endl;
	}

	return 0;
}

void dobra(int t[g], int corte, int n, int m, int lado, int esq, int dir){
	int v[g];
	for(int j = 0; j < g; j++)
		v[j] = t[j];
	
	if(lado == 1){ // direita
		for(int i = 0; i < corte; i++){
			v[n-corte-i-1+esq] += v[n-corte+i+esq];
			v[n-corte+i+esq] = -1;
		}

		dir -= corte;
		n   -= corte;
	}else if(lado == 2){ // esquerda
		for(int i = 0; i < corte; i++){
			v[corte+i+esq] += v[corte-i-1+esq];
			v[corte-i-1+esq] = -1;
		}

		esq += corte;
		n   -= corte;
	}

	if(n == m){	
		if(compara(v, n, m)){
			foi = true;
			return;
		}else{
			return;
		}
	}

	for(int i = 1; i <= n-m; i++){
		dobra(v, i, n, m, 1, esq, dir);
		dobra(v, i, n, m, 2, esq, dir);
	}

}

bool compara(int *v, int n, int m){
	int tot1 = 0, tot2 = 0, i, j = 0;

	for(i = 0; i < g; i++)
		if(v[i] > 0){
			if(v[i] == w[j])
				tot1++;
			if(v[i] == wi[j++])
				tot2++;
		}

	if(tot1 == m || tot2 == m)
		return true;
	else
		return false;
}










