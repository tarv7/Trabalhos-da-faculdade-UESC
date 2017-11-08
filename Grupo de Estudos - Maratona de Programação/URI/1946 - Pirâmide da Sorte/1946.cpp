#include<cstdio>

#define h 2
#define g 2510

using namespace std;

int main(){
	int s, i, x;
	double mat[h][g];

	scanf("%d", &s);

	mat[0][1] = 100;

	x = (s / 2) + 1;

	for(i = 1; i < s; i++)
		for(int j = 1; j <= x; j++)
			mat[i % h][j] = (mat[(i-1) % h][j] + mat[(i-1) % h][j-1]) / 2;

	printf("%.2f\n", mat[--i % h][x]);

	return 0;
}
