#include<bits/stdc++.h>

using namespace std;

int main(){
	int x, y;

	cin >> x >> y;

	cout << "O JOGO DUROU ";
	if(y <= x)
		y += 24;
	cout << y - x;
	cout << " HORA(S)" << endl;

	return 0;
}
