#include<bits/stdc++.h>

using namespace std;

int main(){
	unsigned long long t, n;
	vector<unsigned long long> fib(70, 0);

	fib[0] = 0;
	fib[1] = 1;

	for(int i = 2; i < 70; i++)
		fib[i] = fib[i-1] + fib[i-2];
	

	cin >> t;
	while(t--){
		cin >> n;

		cout << "Fib(" << n << ") = " << fib[n] << endl;
	}

	return 0;
}