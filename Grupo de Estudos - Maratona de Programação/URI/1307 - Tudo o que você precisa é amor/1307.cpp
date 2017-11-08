#include<iostream>

using namespace std;

int gcd(int a, int b){
	return b == 0 ? a : gcd(b, a%b);
}

int lcm(int a, int b){
	return a * (b / gcd(a, b));
}

int main(){
	int n, num1, num2, mult;
	string str1, str2;

	cin >> n;

	for(int i = 0; i < n; i++){
		mult = 1;
		num1 = num2 = 0;

		cin >> str1;
		for(int j = str1.size() - 1; j >= 0; j--){
			num1 += ((str1[j] - '0') * mult);
			mult *= 2;
		}
		mult = 1;		

		cin >> str2;
		for(int j = str2.size() - 1; j >= 0; j--){
			num2 += ((str2[j] - '0') * mult);
			mult *= 2;
		}

		if(gcd(num1, num2) != 1)
			cout << "Pair #" << i+1 << ": All you need is 
love!" << endl;
		else
			cout << "Pair #" << i+1 << ": Love is not all 
you need!" << endl;
			
	}

	return 0;
}
