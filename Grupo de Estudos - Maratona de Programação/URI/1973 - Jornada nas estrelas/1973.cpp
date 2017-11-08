#include<iostream>

#define h 1000002

using namespace std;

int main(){
	int x[h], y[h], n, estAtac = 0;
	unsigned long long naoRoub = 0;

	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> x[i];
		y[i] = x[i];
	}

	for(int i = 0; i < n; i++){
		if(y[i] > 0){
			y[i]--;
			if(y[i] % 2 != 0)
				if(i > 0)
					i -= 2;
				else
					break;
		}else{
			if(i > 0)
				i -= 2;
			else
				break;
		}
	}

	for(int i = 0; i < n; i++){
		if(x[i] - y[i] > 0)
			estAtac++;

		naoRoub += y[i];
	}

	cout << estAtac << " " << naoRoub << endl;

	return 0;
}
