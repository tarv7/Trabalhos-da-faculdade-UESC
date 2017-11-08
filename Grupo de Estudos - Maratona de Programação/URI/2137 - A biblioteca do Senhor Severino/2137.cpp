#include<bits/stdc++.h>

using namespace std;

int main(){
	string x;
	set<string> con;
	int n;

	while(cin >> n){
		con.clear();
		while(n--){
			cin >> x;
			con.insert(x);
		}

		for(auto &aux : con)
			cout << aux << endl;
	}

	return 0;
}
