#include<iostream>
#include<stack>

using namespace std;

int main(){
	int n, tot;
	string linha;
	stack<char> pilha;

	cin >> n;
	cin.ignore();

	for(int i = 0; i < n; i++){
		tot = 0;

		getline(cin, linha);

		for(int j = 0; j < linha.size(); j++){
			if(linha[j] == '<'){
				pilha.push(linha[j]);
//cout << '<';
			}else if(linha[j] == '>' && !pilha.empty()){
				pilha.pop();
				tot++;
//cout << '>';
			}
		}

		while(!pilha.empty())
			pilha.pop();

		cout << tot << endl;
	}

	return 0;
}
