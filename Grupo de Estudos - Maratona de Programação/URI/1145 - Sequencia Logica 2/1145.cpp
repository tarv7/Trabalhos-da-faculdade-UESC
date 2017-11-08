#include<bits/stdc++.h>

using namespace std;

int main(){
	int x, y;

	cin >> x >> y;

	for(int i = 1; i <= y;){
		cout << i++;
		for(int j = 1; j < x && i <= y; j++){
			cout << " " << i++;
		}
		cout << endl;
	}

	return 0;
}