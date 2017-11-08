#include<bits/stdc++.h>

using namespace std;

int main(){
	string aux;
	int q = 0, num, tot = 0;

	while(getline(cin, aux)){
		scanf(" %d ", &num);

		tot += num;
		q++;
	}

	printf("%.1lf\n", (double) tot / q);

	return 0;
}
