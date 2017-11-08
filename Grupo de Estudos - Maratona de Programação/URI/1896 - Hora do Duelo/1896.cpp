#include<bits/stdc++.h>

using namespace std;

vector<int> bin;

typedef struct{
	int a, d, h;
}carta;

int somaBin(int i){
	int j = 0;
	int uns = 0;

	while(i > 0){
		if(i % 2 == 1)
			uns++;
		bin[j++] = i % 2;
		i /= 2;
	}

	return uns;
}

int main(){
	int n;
	bool encntrou = false;
	carta pass, soma;
	vector<carta> cartas;

	scanf("%d", &n);
	scanf("%d %d %d", &pass.a, &pass.d, &pass.h);

	int eleva = pow(2, n);

	cartas.assign(n, {0, 0, 0});
	bin.assign(n, 0);

	for(int i = 0; i < n; i++){
		scanf("%d %d %d", &cartas[i].a, &cartas[i].d, &cartas[i].h);
	}
	for(int i = 1; i < eleva; i++){
		if(somaBin(i) > 1){
			carta soma = {0, 0, 0};
			for(int j = 0; j < n; j++){
				if(bin[j] == 1){
					soma.a += cartas[j].a;
					soma.d += cartas[j].d;
					soma.h += cartas[j].h;
				}
			}

			if(soma.a == pass.a && soma.d == pass.d && soma.h == pass.h){
				printf("Y\n");
				return 0;
			}
/*
			for(int j = 0; j < n; j++){
				cout << bin[j] << " ";
			}
			cout << endl;
*/
		}
	}

	printf("N\n");

	return 0;
}
