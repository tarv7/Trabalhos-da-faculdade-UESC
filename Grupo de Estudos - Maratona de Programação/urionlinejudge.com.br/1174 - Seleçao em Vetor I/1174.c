#include<stdio.h>
#include<stdlib.h>

#define h 100

int main(){
	float V[h];
	int i;

	for(i = 0; i < h; i++)
		scanf("%f", &V[i]);

	for(i = 0; i < h; i++)
		if(V[i] <= 10)
			printf("A[%d] = %.1f\n", i, V[i]);

	return 0;
}
