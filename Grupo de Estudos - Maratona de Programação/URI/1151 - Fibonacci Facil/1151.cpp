#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, ant, atual;

	cin >> n;

	ant = 1;
	atual = 1;
	cout << "0";
	for(int i = 1; i < n; i++){
		cout << " " << ant;
		atual += ant;
		ant = atual - ant;
	}
	cout << endl;

	return 0;
}