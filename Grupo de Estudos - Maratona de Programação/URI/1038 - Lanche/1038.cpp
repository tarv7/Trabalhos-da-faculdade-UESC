#include<bits/stdc++.h>

using namespace std;

int main(){
	int c, q;
	float vale;

	cin >> c >> q;

	if(c == 1)
		vale = 4.0;
	else if(c == 2)
		vale = 4.5;
	else if(c == 3)
		vale = 5.0;
	else if(c == 4)
		vale = 2.0;
	else
		vale = 1.5;

	cout.precision(2);
	cout << fixed << "Total: R$ " << q * vale << endl;

	return 0;
}