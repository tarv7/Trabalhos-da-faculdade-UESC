#include<iostream>

using namespace std;

int main(){
	int b, n,
		r[50],
		dev, cre, deb;

	bool inter;

	cin >> b >> n;

	do{
		inter = false;

		for(int i = 0; i < b; i++)
			cin >> r[i];

		for(int i = 0; i < n; i++){
			cin >> dev >> cre >> deb;
			r[--cre] += deb;
			r[--dev] -= deb;
		}

		for(int i = 0; i < b && !inter; i++)
			if(r[i] < 0)
				inter = true;

		if(inter)
			cout << "N" << endl;
		else
			cout << "S" << endl;

		cin >> b >> n;
	}while(b && n);

	return 0;
}
