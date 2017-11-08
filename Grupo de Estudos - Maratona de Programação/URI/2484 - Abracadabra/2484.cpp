#include<bits/stdc++.h>

using namespace std;

int main(){
	string pal;
	int tam;

	while(cin >> pal){
		tam = pal.size();
		for(int i = 1; i <= tam; i++){
			for(int j = 1; j < i; j++)
				cout << " ";
			for(int j = 0; j < tam-i; j++)
				cout << pal[j] << " ";
			cout << pal[tam-i] << endl;
		}
		cout << endl;
	}

	return 0;
}
