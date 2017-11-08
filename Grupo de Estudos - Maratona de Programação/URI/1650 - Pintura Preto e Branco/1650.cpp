#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, m, c, x;

	scanf("%d %d %d", &n, &m, &c);
	while(n){
		x = ((n - 7) * (m - 7)) / 2;

		if((n - 7) * (m - 7) % 2 == 1 && c == 1)
			x++;

		printf("%d\n", x);
		scanf("%d %d %d", &n, &m, &c);
	}

	return 0;
}
