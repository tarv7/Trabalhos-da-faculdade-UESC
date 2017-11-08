#include<iostream>
#include<stack>

using namespace std;

int main(){
	string equa;
	string::iterator it;
	stack<char> pilha;
	bool correct;
	
	while(getline(cin, equa)){
		correct = true;

		for(it = equa.begin(); it < equa.end() && correct; it++){
			if(*it == '(')
				pilha.push('(');
			else if(*it == ')'){
				if(pilha.empty())
					correct = false;
				else{
					if(pilha.top() == '(')
						pilha.pop();
					else
						correct = false;
				}
			}
		}
		
		if(correct && pilha.empty())
			cout << "correct" << endl;
		else
			cout << "incorrect" << endl;
			
		while(!pilha.empty())
			pilha.pop();
	}
	
	return 0;
}
