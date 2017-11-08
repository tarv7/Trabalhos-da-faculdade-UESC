#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	int a1, a2, b1, b2, a, b;

	cin >> a1 >> b1 >> a2 >> b2 >> a >> b;

	if (max(a1, b1) >= max(a, b) && min(a1, b1) >= min(a, b))
		cout << "S" << endl;
	else if(max(a2, b2) >= max(a, b) && min(a2, b2) >= min(a, b))
		cout << "S" << endl;
	else if(a1 + a2 >= a && min(b1, b2) >= b)
		cout << "S" << endl;
	else if(a1 + b2 >= a && min(a2, b1) >= b)
		cout << "S" << endl;
	else if(a1 + b1 >= a && min(a2, b2) >= b)
		cout << "S" << endl;
	else if(a2 + b1 >= a && min(a1, b2) >= b)
		cout << "S" << endl;
	else if(a2 + b2 >= a && min(a1, b1) >= b)
		cout << "S" << endl;
	else if(b1 + b2 >= a && min(a1, a2) >= b)
		cout << "S" << endl;
	else if(a1 + a2 >= b && min(b1, b2) >= a)
		cout << "S" << endl;
	else if(a1 + b2 >= b && min(a2, b1) >= a)
		cout << "S" << endl;
	else if(a1 + b1 >= b && min(a2, b2) >= a)
		cout << "S" << endl;
	else if(a2 + b1 >= b && min(a1, b2) >= a)
		cout << "S" << endl;
	else if(a2 + b2 >= b && min(a1, b1) >= a)
		cout << "S" << endl;
	else if(b1 + b2 >= b && min(a1, a2) >= a)
		cout << "S" << endl;
	else
		cout << "N" << endl;

	return 0;
}
