#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define n 3

typedef struct{
	int x, y;
}Tpontos;

int main(){
	Tpontos p[n];
	int i, ab, ac, bc;


	for(i = 0; i < n; i++){
		printf("X[%d]: ", i);
		scanf("%d", &p[i].x);
		printf("Y[%d]: ", i);
		scanf("%d", &p[i].y);
	}

	ab = sqrt( pow(p[0].x - p[1].x, 2) + pow(p[0].y - p[1].y, 2) );
	ac = sqrt( pow(p[0].x - p[2].x, 2) + pow(p[0].y - p[2].y, 2) );
	bc = sqrt( pow(p[1].x - p[2].x, 2) + pow(p[1].y - p[2].y, 2) );

	if(ab != ac && ac != bc)
		printf("Triangulo retangulo\n");
	else
		printf("NAO triangulo retangulo\n");

	return 0;
}
