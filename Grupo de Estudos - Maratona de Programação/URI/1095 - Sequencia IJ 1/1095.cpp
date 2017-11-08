#include<bits/stdc++.h>

using namespace std;

int main(){
	int x = 1, y = 60;

	while(y >= 0){
		cout << "I=" << x << " J=" << y << endl;

		x += 3;
		y -= 5;
	}

	return 0;
}
