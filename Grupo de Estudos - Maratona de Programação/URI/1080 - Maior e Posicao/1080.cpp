#include<bits/stdc++.h>

using namespace std;

int main(){
	int x, maior, maiorInd;

	cin >> maior;
	maiorInd = 1;
	for(int i = 2; i <= 100; i++){
		cin >> x;

		if(x > maior){
			maior = x;
			maiorInd = i;
		}
	}

	cout << maior << endl << maiorInd << endl;

	return 0;
}
