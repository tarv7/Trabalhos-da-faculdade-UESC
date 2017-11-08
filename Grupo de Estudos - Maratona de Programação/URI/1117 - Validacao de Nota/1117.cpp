#include<bits/stdc++.h>

using namespace std;

int main(){
	float n, media;
	int tot = 0;

	while(tot < 2){
		cin >> n;

		if(n >= 0 && n <= 10){
			media += n;
			tot++;
		}else{
			cout << "nota invalida" << endl;
		}
	}

	cout.precision(2);
	cout << fixed << "media = " << media / 2.0 << endl;

	return 0;
}
