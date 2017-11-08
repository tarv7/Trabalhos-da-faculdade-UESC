#include<bits/stdc++.h>

using namespace std;

int main(){
	vector<int> ori(3, 0), ord(3, 0);

	for(int i = 0; i < 3; i++){
		cin >> ord[i];
		ori[i] = ord[i];
	}

	sort(ord.begin(), ord.end());
	for(int i = 0; i < 3; i++)
		cout << ord[i] << endl;
	cout << endl;

	for(int i = 0; i < 3; i++)
		cout << ori[i] << endl;

	return 0;
}
