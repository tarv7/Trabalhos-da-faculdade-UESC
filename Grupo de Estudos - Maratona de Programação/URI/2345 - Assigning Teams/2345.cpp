#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;

int main(){
	vector<int> vet(4);
	vector<int>::iterator it;
	int s1, s2;
	
	for(it = vet.begin(); it != vet.end(); it++)
		cin >> *it;
		
	sort(vet.begin(), vet.end());

	s1 = *vet.begin() + *(vet.end() - 1);
	s2 = *(vet.begin() + 1) + *(vet.end() - 2);
	
	cout << fabs(s1 - s2) << endl;

	return 0;
}
