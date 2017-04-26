#include<iostream>
#include<cmath>

using namespace std;

int * veri(int * , int );

int main(){
	int n, *p, i = 1;

	cin >> n;

	while(n){
		p = new int[5];
	
		p = veri(p, n);

		cout << "Instancia " << i++ << endl;
		if(p == NULL)
			cout << n << " nao e quadripartido";
		else
			cout << p[0] << " " << p[1] << " " << p[2] << " " << p[3] << " " << p[4];
		
		cout << endl << endl;
		cin >> n;
		delete[] p;
	}
}

int * veri(int *p, int n){
	int raiz = (int)sqrt(n) + 1;
	int soma = 0, quad;

	int m, p1, p2, p3, p4;

	for(int m = raiz; m > 0; m--){
		for(p1 = m; p1 < n; p1 += m){
			p2 = p1 + (2 * m);
			p3 = (p1 / m) + 1;
			p4 = (p1 + m) * m;
			soma = p1 + p2 + p3 + p4;
			
			if(soma == n){
				p[0] = m;
				p[1] = p1;
				p[2] = p2;
				p[3] = p3;
				p[4] = p4;					
				return p;
			}
		}
	}

	return NULL;
}
