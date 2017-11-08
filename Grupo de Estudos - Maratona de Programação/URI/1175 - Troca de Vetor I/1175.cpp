#include<bits/stdc++.h>

using namespace std;

int main(){
	vector<int> vet(20, 0);

	for(int i = 19; i >= 0; i--)
		cin >> vet[i];

	for(int i = 0; i < 20; i++)
		cout << "N[" << i << "] = " << vet[i] << endl;

	return 0;
}