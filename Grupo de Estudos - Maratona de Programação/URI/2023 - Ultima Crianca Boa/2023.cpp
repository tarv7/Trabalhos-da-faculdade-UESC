#include<bits/stdc++.h>

using namespace std;

int main(){
	string nome;
	set<pair<string, string> > con;

	while(getline(cin, nome)){
		string aux = nome;
		transform(aux.begin(), aux.end(), aux.begin(), ::tolower);
		con.insert(pair<string, string>(aux, nome));
	}

	cout << con.rbegin()->second << endl;

	return 0;
}
