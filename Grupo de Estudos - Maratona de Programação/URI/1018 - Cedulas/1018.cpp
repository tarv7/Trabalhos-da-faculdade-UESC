#include<bits/stdc++.h>

using namespace std;

int main(){
	int num;
	int moedas[7] = {100, 50, 20, 10, 5, 2, 1};
	int res[110] = {0};
	
	cin >> num;

	cout << num << endl;
	for(int i = 0; i < 7; i++){
		res[moedas[i]] = num / moedas[i];
		num %= moedas[i];

		cout << res[moedas[i]] << " nota(s) de R$ " << moedas[i] << ",00" << endl;
	}

	return 0;
}
