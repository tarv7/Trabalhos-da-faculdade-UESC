#include<bits/stdc++.h>

#define h 10001000

using namespace std;

int n, x;
bool primo;

int main(){
	int n, x;

	cin >> n;

	while(n--){
		cin >> x;

		primo = true;
		for(int j = 2; j * j <= x; j++){
			if(x % j == 0){
				primo = false;
				break;
			}
		}

		if(primo && x != 1)
			cout << x << " eh primo" << endl;
		else
			cout << x << " nao eh primo" << endl;
	}

	return 0;
}