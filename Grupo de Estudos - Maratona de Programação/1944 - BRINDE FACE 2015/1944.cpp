#include<iostream>
#include<stack>

using namespace std;

int main(int argc, char **args){
	stack<string> s;
	char a[4];
	int n, premio = 0;
	bool pal;

	cin >> n;
	
	for (int i = 0; i < n; i++){
		pal = true;
		
		if(s.empty())
			s.push("FACE");

		for(int j = 0; j < 4; j++)
			cin >> a[j];
			
		for(int j = 0; j < 4; j++)
			if(s.top()[j] != a[3 - j])
				pal = false;
		
		if(pal){
			premio++;
			s.pop();
		}else
			s.push(a);
	}
	
	cout << premio << endl;

	return 0;
}
