#include<bits/stdc++.h>

#define lerLinha(id){ while(linha[id] == ' ') id++; }
#define lerLinha2(id){ while(linha[id] == ' ' || linha[id] == '(' || linha[id] == ')' || (linha[id] >= 'a' && linha[id] <= 'z')) id++; }

#define h 150

using namespace std;

typedef vector<bool> vb;
typedef vector<vb> vvb;

vvb verdade;
int qLetras, qLinhas;
set<char> letras;
set<char>::iterator it;
vector<char> letras2;
vector<char>::iterator it2;
map<string, bool> prop;
string linhaOri, linha, resposta;

void contaLetras(){
	letras.clear();

	for(int i = 0; i < linha.size(); i++)
		if(linha[i] >= 'a' && linha[i] <= 'z')
			letras.insert(linha[i]);

	qLetras = letras.size();
}

void encheVerdade(){
	bool valor = false;
	int k = 1;
	letras2.clear();

	for(it = letras.begin(); it != letras.end(); ++it)
		letras2.push_back(*it);

	reverse(letras2.begin(), letras2.end());

	for(it2 = letras2.begin(); it2 != letras2.end(); ++it2, k += k){
		for(int i = 0; i < qLinhas; i += k){
			for(int j = i; j < j + k && j < qLinhas; j++)
				verdade[j][*it2] = valor;
			valor = !valor;
		}
	}
}

void encheProp(){
	prop["0&0"] = false;
	prop["0&1"] = false;
	prop["1&0"] = false;
	prop["1&1"] = true;

	prop["0|0"] = false;
	prop["0|1"] = true;
	prop["1|0"] = true;
	prop["1|1"] = true;

	prop["0-->0"] = true;
	prop["0-->1"] = true;
	prop["1-->0"] = false;
	prop["1-->1"] = true;

	prop["0<->0"] = true;
	prop["0<->1"] = false;
	prop["1<->0"] = false;
	prop["1<->1"] = true;
}

int aux;

bool recursao(int id, int numLinha){
	bool x, y;
	int indRespProp;
	string op;

	if(id >= linha.size())
		return true;

	lerLinha(id);

	if(linha[id] >= 'a' && linha[id] <= 'z'){
		resposta[id] = (verdade[numLinha][linha[id]]) ? '1' : '0';
		aux = id + 1;
		return verdade[numLinha][linha[id]];
	}

	if(linha[id] == '('){
		int aux2 = id;
		id++; lerLinha(id);
		if(linha[id] == '!'){
			bool retorno = recursao(id+1, numLinha);
			resposta[id] = (!retorno) ? '1' : '0';
			id = aux;

			return !retorno;
		}else{
			id = aux2;
			x = recursao(id+1, numLinha);
			id = aux;

			lerLinha2(id);
			if(linha[id] == '&' || linha[id] == '|'){
				op = linha[id];
				indRespProp = id++;
			}else{
				op = linha[id++];
				lerLinha(id);
				op += linha[id];
				indRespProp = id++;
				lerLinha(id);
				op += linha[id++];
			}
			
			lerLinha(id);

			y = recursao(id, numLinha);
			id = aux;

			string buscaProp = "";
			buscaProp += (x) ? '1' : '0';
			buscaProp += op;
			buscaProp += (y) ? '1' : '0';

			resposta[indRespProp] = (prop[buscaProp]) ? '1' : '0';
			aux = id + 1;
			return prop[buscaProp];
		}
	}
}

int main(){
	encheProp();

	while (getline(cin, linha)){
		contaLetras();

		qLinhas = pow(2, qLetras);
		verdade.assign(qLinhas, vb(h, false));
		encheVerdade();

		cout << linhaOri << endl;
		for(int i = 0; i < qLinhas; i++){
			aux = 0;
			resposta.assign(linha.size(), ' ');
			recursao(0, i);
			cout << resposta << endl;
		}
		cout << endl;
	}
	
	return 0;
}
