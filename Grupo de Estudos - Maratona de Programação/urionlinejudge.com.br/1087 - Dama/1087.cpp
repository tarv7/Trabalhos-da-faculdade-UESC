#include<iostream>

#define h 2

using namespace std;

int main(){
	int x[h], y[h], i;

	for(i = 0; i < h; i++)
		cin >> x[i] >> y[i];

	while(x[0]){
		if(x[0] == x[1] && y[0] == y[1])
			i = 0;
		else if(x[0] == x[1] || y[0] == y[1])
			i = 1;
		else if(x[0] - y[0] == x[1] - y[1] || x[0] + y[0] == x[1] + y[1])
			i = 1;

		cout << i << endl;

		for(i = 0; i < h; i++)
			cin >> x[i] >> y[i];
	}

	return 0;
}
