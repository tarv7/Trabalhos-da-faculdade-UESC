#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	string p;
	set<string> con;

	cin >> n;
	cin.ignore();
	while(n--){
		getline(cin, p);
		//cin >> p;
		con.insert(p);
	}

	cout << "Falta(m) " << 151 - con.size() << " pomekon(s)." << endl;

	return 0;
}
