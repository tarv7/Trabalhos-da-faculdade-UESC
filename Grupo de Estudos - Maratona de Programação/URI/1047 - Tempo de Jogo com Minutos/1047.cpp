#include<bits/stdc++.h>

using namespace std;

int main(){
	int hi, mi, hf, mf, minu;

	cin >> hi >> mi >> hf >> mf;

	if(hf < hi)
		hf += 24;
	else if(hf == hi && mf <= mi)
		hf += 24;

	minu = ((hf - hi) * 60) + (mf - mi);

	cout << "O JOGO DUROU " << minu / 60 << " HORA(S) E " << minu % 60 << " MINUTO(S)" << endl;

	return 0;
}
