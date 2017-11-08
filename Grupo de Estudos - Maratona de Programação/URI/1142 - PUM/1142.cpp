#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, i;

	cin >> n;

	i = 0;
	while(n--){
		cout << i+1 << " " << i+2 << " " << i+3 << " PUM" << endl;
		i += 4;
	}

	return 0;
}