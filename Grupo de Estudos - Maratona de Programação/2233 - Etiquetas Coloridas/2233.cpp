#include<iostream>

using namespace std;

int main(){
	long long int r, g, b, tot, totR, totG, totB;
	
	cin >> hex >> r >> g >> b;	
	
	totR = 1;
	totG = ((r/g) * (r/g));
	totB = ((g/b) * (g/b));
	totB *= totG;
	
	tot = totR + totG + totB;
	
	cout << hex << tot << endl;
		
	return 0;
}
