#include<bits/stdc++.h>

using namespace std;

int main(){
	unsigned long long n, a, b, pot;

	scanf("%llu", &n);

	while(n--){
		pot = 1;

		scanf("%llu %llu", &a, &b);

		while(pot <= b)
			pot *= 10;

		if(a % pot == b)
			printf("encaixa\n");
		else
			printf("nao encaixa\n");
	}

	return 0;
}
