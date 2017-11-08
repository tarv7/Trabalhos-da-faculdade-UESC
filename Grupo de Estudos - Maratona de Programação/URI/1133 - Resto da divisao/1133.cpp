#include<bits/stdc++.h>

using namespace std;

int main(){
	int x, y, aux;

	cin >> x >> y;

	if(x > y){
		aux = x;
		x = y;
		y = aux;
	}

	for(x++; x < y; x++){
		if(x % 5 == 2 || x % 5 == 3)
			cout << x << endl;
	}

	return 0;
}