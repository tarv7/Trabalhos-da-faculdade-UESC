#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, fat = 1;

	cin >> n;

	while(n)
		fat *= n--;

	cout << fat << endl;

	return 0;
}