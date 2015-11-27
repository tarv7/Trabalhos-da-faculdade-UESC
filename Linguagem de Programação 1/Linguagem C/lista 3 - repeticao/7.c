#include<stdio.h>
#include<stdlib.h>

int main(){
	int fib = 1, ant = 1, i;
	
	printf("1\n");
	for(i = 2; i < 15; i++){
		printf("%d\n", fib);
		fib += ant;
		ant = fib - ant;
	}
	
	system("pause");
	return 0;
}
