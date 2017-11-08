#include<iostream>
#include<string>

using namespace std;

int main(){
	string str1, str2;
	int n, subN, cont = 0;
	string::iterator it;
	
	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> str1 >> subN;

		for(int j = 0; j < subN; j++){
			cin >> str2;
			cont = 0;

			for(it = str1.begin(); it < str1.end() && cont >= 0; it++){
				if(*it == str2[cont])
					cont++;
			}
			
			if(cont == (int)str2.size())
				cout << "Yes" << endl;
			else
				cout << "No" << endl;
		}
	}
	
	return 0;
}
