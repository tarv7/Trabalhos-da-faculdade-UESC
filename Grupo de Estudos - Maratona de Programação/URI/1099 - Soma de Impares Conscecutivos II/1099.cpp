#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, x, y, aux;

	cin >> n;
	while(n--){
		cin >> x >> y;
		if(x > y){
			aux = x;
			x = y;
			y = aux;
		}

		x++;
		if(x % 2 == 0)
			x++;

		aux = 0;
		for(; x < y; x += 2)
			aux += x;

		cout << aux << endl;
	}

	return 0;
}
