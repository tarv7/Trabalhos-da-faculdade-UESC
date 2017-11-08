#include<iostream>
#include<string>

using namespace std;

int main(){
	string str;
	bool upper;
	int i;

	while(getline(cin, str)){
		upper = true;

		for(i = 0; i < str.length(); i++){
			if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')){
				if(upper && str[i] >= 'a')
						str[i] -= 32;
				else if(!upper && str[i] <= 'Z')
						str[i] += 32;
				upper = !upper;
			}
		}

		cout << str << endl;
	}

	return 0;
}
