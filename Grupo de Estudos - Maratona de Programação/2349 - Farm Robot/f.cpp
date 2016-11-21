#include<iostream>

using namespace std;

int main(){
	int n, c, s, it = 0, tot = 0, aux;
	
	cin >> n >> c >> s;
	
	if(s == 1)
		tot++;
	
	for(int i = 0; i < c; i++){
		cin >> aux;
		
		it = (it + aux + n) % n;
		
		if(it == s-1)
			tot++;
	}
	
	cout << tot << endl;
	
	return 0;
}
