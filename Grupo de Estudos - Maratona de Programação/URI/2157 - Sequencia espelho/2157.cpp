#include<bits/stdc++.h>

using namespace std;

int main(){
	string esp;
	int c, b, e;

	cin >> c;
	while(c--){
		cin >> b >> e;

		esp = "";
		for(; b <= e; b++)
			esp += to_string(b);

		for(int i = esp.size()-1; i >= 0; i--)
			esp += esp[i];

		cout << esp << endl;
	}

	return 0;
}
