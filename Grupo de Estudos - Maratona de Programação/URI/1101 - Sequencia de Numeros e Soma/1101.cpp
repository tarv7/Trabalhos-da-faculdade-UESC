#include<bits/stdc++.h>

using namespace std;

int main(){
	int n = 1, m = 1, sum;

	cin >> n >> m;
	while(n > 0 && m > 0){
		if(n > m){
			sum = m;
			m = n;
			n = sum;
		}

		sum = 0;
		for(; n <= m; n++){
			cout << n << " ";
			sum += n;
		}
		cout << "Sum=" << sum << endl;

		cin >> n >> m;
	}

	return 0;
}
