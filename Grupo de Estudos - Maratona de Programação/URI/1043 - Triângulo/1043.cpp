#include<bits/stdc++.h>

using namespace std;

int main(){
	float a, b, c, area, peri;

	cin >> a >> b >> c;

	cout.precision(1);
	if(a + b > c && a + c > b && c + b > a){
		peri = a + b + c;
		cout << fixed << "Perimetro = " << peri << endl;
	}else{
		area = ((a + b) * c) / 2;
		cout << fixed << "Area = " << area << endl;
	}

	return 0;
}
