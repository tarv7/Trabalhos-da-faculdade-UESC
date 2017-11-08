#include<bits/stdc++.h>

using namespace std;

typedef struct{
	int d, h, m, s, tot;
}data;

int main(){
	data i, f, dur;
	string lixo;

	//cout << i.d << " " << i.h << " " << i.m << " " << i.s << endl;

	cin >> lixo >> i.d >> i.h >> lixo >> i.m >> lixo >> i.s;
	cin >> lixo >> f.d >> f.h >> lixo >> f.m >> lixo >> f.s;

	i.tot = (i.d * 24 * 60 * 60) + (i.h * 60 * 60) + (i.m * 60) + i.s;
	f.tot = (f.d * 24 * 60 * 60) + (f.h * 60 * 60) + (f.m * 60) + f.s;

	dur.tot = f.tot - i.tot;

	dur.d = dur.tot / (24 * 60 * 60);
	dur.tot %= (24 * 60 * 60);
	dur.h = dur.tot / (60 * 60);
	dur.tot %= (60 * 60);
	dur.m = dur.tot / 60;
	dur.tot %= 60;
	dur.s = dur.tot;
	dur.tot = 0;
	
	cout << dur.d << " dia(s)" << endl;
	cout << dur.h << " hora(s)" << endl;
	cout << dur.m << " minuto(s)" << endl;
	cout << dur.s << " segundo(s)" << endl;

	return 0;
}
