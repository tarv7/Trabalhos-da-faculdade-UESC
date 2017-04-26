#include<cstdio>

using namespace std;

int main(){
	unsigned long long p;
	
	while(scanf("%llu", &p) != EOF){
		if(p > 0 && p <= 10000000000000000000)
			printf("%llu\n", --p);
		else if(p == 0)
			printf("0\n");
	}
	
	return 0;
}
