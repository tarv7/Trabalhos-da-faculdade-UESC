#include<iostream>
#include<string>

using namespace std;

bool verifica(string , int , int );

int main(){
	string pizza("1");
	int c, n, x, retorno, corte;

	cin >> c >> n;

	for(int i = 0; i < c-1; i++)
		pizza.push_back('0');

	cin >> retorno;
	for(int i = 1; i < n; i++){
		cin >> x;
		x -= retorno;

		pizza[x] = '1';
	}

	corte = c / n;
	for(int i = 0; i < corte; i++){
		if(verifica(pizza, c, n)){
			cout << "S" << endl;
			return 0;
		}else{
			if(pizza[((n-1) * corte) + corte-1] == '1'){
				pizza.pop_back();
				pizza = '1' + pizza;
			}else{
				pizza.pop_back();
				pizza = '0' + pizza;
			}
		}
	}

	cout << "N" << endl;

	return 0;
}

bool verifica(string pizza, int c, int n){
	int sum;

	for(int i = 0; i < n; i++){
		sum = 0;
		for(int j = 0; j < c / n; j += 1){
			if(pizza[(i * c / n) + j] == '1')
				sum++;
		}
		
		if(sum != 1)
			return false;
	}

	return true;
}
