#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, media = 0, q = 0;

	cin >> n;
	while(n >= 0){
		media += n;
		q++;

		cin >> n;
	}

	cout.precision(2);
	cout << fixed << media / (float)q << endl;

	return 0;
}