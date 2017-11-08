#include<bits/stdc++.h>

using namespace std;

int main(){
	int x, y, soma = 0;

	cin >> x >> y;
	if(y < x){
		soma = x;
		x = y;
		y = soma;
	}

	soma = 0;
	for(x++; x < y; x++){
		if(x % 2 != 0)
			soma += x;
	}

	cout << soma << endl;

	return 0;
}
