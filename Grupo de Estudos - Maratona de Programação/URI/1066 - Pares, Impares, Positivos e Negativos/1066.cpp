#include<bits/stdc++.h>

using namespace std;

int main(){
	int aux, pares = 0, pos = 0, neg = 0;

	for(int i = 0; i < 5; i++){
		cin >> aux;
		if(aux % 2 == 0)
			pares++;
		if(aux > 0)
			pos++;
		else if(aux < 0)
			neg++;
	}

	cout << pares << " valor(es) par(es)" << endl;
	cout << 5 - pares << " valor(es) impar(es)" << endl;
	cout << pos << " valor(es) positivo(s)" << endl;
	cout << neg << " valor(es) negativo(s)" << endl;

	return 0;
}
