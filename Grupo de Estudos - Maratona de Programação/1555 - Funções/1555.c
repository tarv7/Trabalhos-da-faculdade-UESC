#include <stdio.h>

int main() {
	int i, testes;
	float a, b, R, B, C;

	scanf("%d", &testes);

	for(i = 0; i < testes; i++) {
		scanf("%f%f", &a, &b);

		R = ((3 * a) * (3 * a)) + (b * b);
		B = (2 * (a * a)) + ((5 * b) * (5 * b));
		C = (-100 * a) + (b * b * b);

		if (R >= B && R >= C)
			printf("Rafael ganhou\n");
		else{
			if(B >= C && B >= R) 
				printf("Beto ganhou\n");
			else 
				if(C >= B && C >= R) 
					printf("Carlos ganhou\n");
		}
	}
	return 0;
}
