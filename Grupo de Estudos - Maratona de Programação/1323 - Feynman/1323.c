#include<stdio.h>

int main(){
	int n, tot, i;

	scanf("%d", &n);

	while(n != 0){
		tot = 0;

		for(i = 1; i <= n; i++)
			tot += (i * i);

		printf("%d\n", tot);

		scanf("%d", &n);
	}

	return 0;
}
