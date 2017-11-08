#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, x, y;

	cout.precision(1);
	cin >> n;
	while(n--){
		cin >> x >> y;

		if(y == 0)
			cout << "divisao impossivel" << endl;
		else{
			cout << fixed << x / (float)y << endl;
		}
	}

	return 0;
}