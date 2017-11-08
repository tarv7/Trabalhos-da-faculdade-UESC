#include<bits/stdc++.h>

using namespace std;

int main(){
	int x;

	cin >> x;

	for(int i = 0, j = x; i < 10; i++, j += j){
		cout << "N[" << i << "] = " << j << endl;
	}

	return 0;
}