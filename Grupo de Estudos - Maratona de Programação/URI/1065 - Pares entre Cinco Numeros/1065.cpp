#include<bits/stdc++.h>

using namespace std;

int main(){
	int pares = 0, aux;

	for(int i = 0; i < 5; i++){
		cin >> aux;
		if(aux % 2 == 0)
			pares++;
	}

	cout << pares << " valores pares" << endl;

	return 0;
}
