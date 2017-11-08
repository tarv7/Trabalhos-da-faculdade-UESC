#include<iostream>
#include<iomanip>

#define h 3
#define g 2510

using namespace std;

int main(){
	int s, i, j;
	double mat[h][g];

	cin >> s;

	mat[0][1] = 100;
	mat[1][1] = mat[1][2] = 50;

	for(i = 2; i < s; i++)
		for(j = 1; j <= s/2 + 1; j++)
			mat[i % h][j] = (mat[(i-1) % h][j] + mat[(i-1) % h][j-1]) / 2;

	cout << fixed << setprecision(2) << mat[--i % h][s/2 + 1] << endl;

	return 0;
}
