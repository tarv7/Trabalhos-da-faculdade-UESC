#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	float x, y, z;

	cin >> n;
	while(n--){
		cin >> x >> y >> z;

		cout.precision(1);
		cout << fixed << ((x * 2) + (y * 3) + (z * 5)) / 10.0 << endl;
	}

	return 0;
}
