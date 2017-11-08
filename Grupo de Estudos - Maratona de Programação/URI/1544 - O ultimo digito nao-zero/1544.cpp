#include<iostream>

using namespace std;

int main(){
	unsigned long long fat, n, m;

	while(cin >> n >> m){
			fat = 1;

		m = (n - m) + 1;

		for(; m <= n; m++){
			fat *= m;

			while(fat % (unsigned long long)10 == 0)
				fat /= (unsigned long long)10;

			fat %= (unsigned long long)100000000000;
		}

		cout << fat % (unsigned long long)10 << endl;
	}

	return 0;
}
