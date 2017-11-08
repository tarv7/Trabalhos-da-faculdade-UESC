#include<bits/stdc++.h>

using namespace std;

int calls;
int fib(int );

int main(){
	int n, x;

	scanf("%d", &n);
	while(n--){
		scanf("%d", &x);
		calls = 0;

		printf("fib(%d) = %d calls = %d\n", x, calls, fib(x));
	}

	return 0;
}

int fib(int x){
	if(x == 0)
		return 0;
	else if(x == 1)
		return 1;
	else{
		calls += 2;
		return fib(x - 1) + fib(x - 2);
	}
}
