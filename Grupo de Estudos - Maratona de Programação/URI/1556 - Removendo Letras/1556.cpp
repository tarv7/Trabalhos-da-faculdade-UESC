#include<bits/stdc++.h>

using namespace std;

set<string> con;

void rec(string pal){
	string aux;
	int tam = pal.size();

	if(con.find(pal) != con.end())
		return;

	if(tam == 1){
		con.insert(pal);
		return;
	}
	for(int i = 0;  i < tam; i++){
		aux = pal;
		con.insert(aux);
		aux.erase(aux.begin() + i);
		rec(aux);
	}
}

int main(){
	string pal;

	while(cin >> pal){
		con.clear();
		rec(pal);

		for(auto &subp : con)
			cout << subp << endl;
		cout << endl;
	}

	return 0;
}
