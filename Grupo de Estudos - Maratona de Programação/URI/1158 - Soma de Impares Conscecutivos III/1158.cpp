#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, x, y, soma;

	cin >> n;
	while(n--){
		soma = 0;

		cin >> x >> y;

		for(int i = x, j = 0; j < y; i++){
			if(i % 2 != 0){
				soma += i;
				j++;
			}
		}

		cout << soma << endl;
	}

	return 0;
}