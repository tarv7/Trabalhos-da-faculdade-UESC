#include<bits/stdc++.h>

using namespace std;

int main(){
	int seg;

	cin >> seg;

	cout << seg / (60 * 60) << ":";
	seg %= (60 * 60);
	cout << seg / 60 << ":";
	seg %= 60;
	cout << seg << endl;

	return 0;
}