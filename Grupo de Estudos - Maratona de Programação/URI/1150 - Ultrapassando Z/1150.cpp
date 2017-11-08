#include<bits/stdc++.h>

using namespace std;

int main(){
	int x, z, soma = 0, tot = 0;

	cin >> x;

	do{
		cin >> z;
	}while(z <= x);

	while(soma < z){
		soma += ++x;
		tot++;
	}

	cout << tot << endl;

	return 0;
}
