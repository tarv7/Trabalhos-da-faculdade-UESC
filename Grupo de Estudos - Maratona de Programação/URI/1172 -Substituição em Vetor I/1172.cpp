#include<bits/stdc++.h>

using namespace std;

int main(){
	int  x;

	for(int i = 0; i < 10; i++){
		cin >> x;
		cout << "X[" << i << "] = ";
		if(x <= 0)
			cout << 1 << endl;
		else
			cout << x << endl;
	}

	return 0;
}