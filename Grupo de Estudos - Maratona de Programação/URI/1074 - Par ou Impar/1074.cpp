#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, x;

	cin >> n;
	while(n--){
		cin >> x;

		if(x == 0)
			cout << "NULL" << endl;
		else{
			if(x % 2 == 0)
				cout << "EVEN ";
			else
				cout << "ODD ";

			if(x > 0)
				cout << "POSITIVE";
			else
				cout << "NEGATIVE";
			cout << endl;
		}
	}

	return 0;
}
