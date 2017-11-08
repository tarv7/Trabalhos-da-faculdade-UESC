#include<iostream>
#include<cmath>

using namespace std;

int main(){
	long long int a, b, c, d, n, menor = -1;
	
	cin >> a >> b >> c >> d;

	for(n = 1; n <= (int)sqrt(c) + 1; n++)
		if((n % a == 0) && (n % b != 0) && (c % n == 0) && (d % n != 0)){
			if(n < menor || menor == -1)
				menor = n;
		}else if(c % n == 0){
			if(((c / n) % a == 0) && ((c / n) % b != 0) && (c % (c / n) == 0) && (d % (c / n) != 0))
				if(n < menor || menor == -1)
					menor = c / n;
		}
	
	cout << menor << endl;
	
	return 0;
}
