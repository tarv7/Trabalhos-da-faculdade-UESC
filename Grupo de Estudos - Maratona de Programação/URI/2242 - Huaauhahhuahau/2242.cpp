#include<bits/stdc++.h>

using namespace std;

int main(){
	string p;

	cin >> p;

	for(int i = 0, j = p.size()-1; i <= j;){
		while(p[i] != 'a' && p[i] != 'e' && p[i] != 'i' && p[i] != 'o' && p[i] != 'u' && i <= j)
			i++;
		while(p[j] != 'a' && p[j] != 'e' && p[j] != 'i' && p[j] != 'o' && p[j] != 'u' && i <= j)
			j--;

		if(i > j)
			break;

		if(p[i++] != p[j--] ){
			cout << "N" << endl;
			return 0;
		}
	}

	cout << "S" << endl;

	return 0;
}