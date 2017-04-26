#include<iostream>
#include<math.h>

#define h 1000001

using namespace std;

int main(){
    int n, ind = 1;
    long long soma[1000001] = {0};

	soma[0] = 0;


    for(int i = 1; i <= h; i++){
       	for(int j = i; j <= h; j += i){
			soma[j] += (long long) i;
		}
		soma[i] += soma[i-1];
    }

	cin >> n;

	while(n){
	    cout << soma[n] << endl;
	    cin >> n;
	}

    return 0;
}
