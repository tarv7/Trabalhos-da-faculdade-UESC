#include<bits/stdc++.h>

using namespace std;

int main(){
	int x, y;

	cin >> x >> y;
	while(x != y){
		if(x < y)
			cout << "Crescente" << endl;
		else
			cout << "Decrescente" << endl;

		cin >> x >> y;
	}

	return 0;
}
