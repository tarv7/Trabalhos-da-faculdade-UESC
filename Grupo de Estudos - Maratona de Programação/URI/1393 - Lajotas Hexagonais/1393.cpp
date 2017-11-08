#include<iostream>

using namespace std;

int main(){
	unsigned long long n, ant1, ant2, fib;

	while(cin >> n){
		if(n){
			ant1 = 0;
			ant2 = 1;
			fib = 0;

			for(unsigned long long i = 1; i <= n; i++){
				fib = ant1 + ant2;
				ant1 = ant2;
				ant2 = fib;
			}

			cout << fib << endl;
		}
	}

	return 0;
}
