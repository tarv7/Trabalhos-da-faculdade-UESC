#include<bits/stdc++.h>

using namespace std;

int main(){
	int i, j;

	for(i = 1; i < 10; i += 2){
		for(int j = 6 + i; j >= (4+i); j--){
			cout << "I=" << i << " J=" << j << endl;
		}
	}

	return 0;
}
