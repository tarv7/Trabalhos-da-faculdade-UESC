#include<stdio.h>
#include<math.h>

int main(){
	int n, i, primo;
	long x, j;

	scanf("%d", &n);

	for(i = 0; i < n; i++){
		scanf("%ld", &x);

		if(x == 2)
			printf("Prime\n");
		else if(x % 2 == 0)
			printf("Not Prime\n");
		else{
			primo = 0;
			for(j = 3; j*j <= x;)
				if(x % j == 0){
					printf("Not Prime\n");
					primo = 1;
					break;
				}else
					j += 2;

			if(primo != 1)
				printf("Prime\n");
		}
	}

	return 0;
}
