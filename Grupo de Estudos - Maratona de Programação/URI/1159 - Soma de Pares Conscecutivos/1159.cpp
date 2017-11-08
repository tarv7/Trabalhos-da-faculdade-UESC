#include<bits/stdc++.h>

using namespace std;

int main(){
	int x, soma;

	cin >> x;
	while(x){
		soma = 0;
		for(int i = x, j = 0; j < 5; i++){
			if(i % 2 == 0){
				soma += i;
				j++;
			}
		}

		cout << soma << endl;
		cin >> x;
	}

	return 0;
}