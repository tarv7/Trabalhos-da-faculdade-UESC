#include<bits/stdc++.h>

using namespace std;

typedef struct{
	float x, y;
}ponto;

int main(){
	float dist;
	ponto p1, p2;

	cin >> p1.x >> p1.y;
	cin >> p2.x >> p2.y;

	dist = sqrt(((p1.x - p2.x) * (p1.x - p2.x)) + ((p1.y - p2.y) * (p1.y - p2.y)));

	cout.precision(4);
	cout << fixed << dist << endl; 

	return 0;
}
