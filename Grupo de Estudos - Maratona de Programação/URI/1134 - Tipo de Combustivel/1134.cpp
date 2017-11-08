#include<bits/stdc++.h>

using namespace std;

int main(){
	int x = 1;
	int comb[5] = {0, 0, 0, 0, 0};

	//cin >> x;
	while(x != 4){
		do{
			cin >> x;
		}while(x > 4 || x < 1);

		comb[x]++;
	}

	cout << "MUITO OBRIGADO" << endl;
	cout << "Alcool: " << comb[1] << endl;
	cout << "Gasolina: " << comb[2] << endl;
	cout << "Diesel: " << comb[3] << endl;

	return 0;
}