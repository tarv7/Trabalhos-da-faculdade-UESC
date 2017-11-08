#include<bits/stdc++.h>

using namespace std;

int main(){
	unsigned long long n, x, graos;

	scanf("%llu", &n);
	while(n--){
		scanf("%llu", &x);

		graos = 1;
		for(int i = 1; i <= x; i++)
			graos += graos;
		graos--;

		graos /= 12000;

		printf("%llu kg\n", graos);
	}

	return 0;
}
