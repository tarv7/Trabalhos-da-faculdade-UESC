#include<iostream>

using namespace std;

int gcd(int a, int b){
	return b == 0 ? a : gcd(b, a % b);
}

int lcm(int a, int b){
	return a * (b / gcd(a, b));
}

int main(){
	int n, a, b, aux, inter, mmc;

	cin >> n >> a >> b;

	if(a < b){
		aux = a;
		a = b;
		b = aux;
	}

	while(n){
		mmc = lcm(a, b);

		inter = n / mmc;

		tot = (n / a) + (n / b) - inter;

		cout << tot << endl;

		cin >> n >> a >> b;

		if(a < b){
			aux = a;
			a = b;
			b = aux;
		}
	}

	return 0;
}
