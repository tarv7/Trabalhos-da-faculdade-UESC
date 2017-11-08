#include<bits/stdc++.h>

#define MAX_N 100100

using namespace std;
int m, t;
int b[MAX_N];
string palavra, padrao, padraoConst;
char aux[2];
vector<char> seq;
map<char, int> mapa;
bool achou;

inline void altera(string &str){
	if(!strcmp(aux, "Bb") || !strcmp(aux, "A#")) str += "H";
	else if(!strcmp(aux, "Cb") || !strcmp(aux, "B")) str += "B";
	else if(!strcmp(aux, "C") || !strcmp(aux, "B#")) str += "C";
	else if(!strcmp(aux, "Db") || !strcmp(aux, "C#")) str += "I";
	else if(!strcmp(aux, "Eb") || !strcmp(aux, "D#")) str += "J";
	else if(!strcmp(aux, "E") || !strcmp(aux, "Fb")) str += "E";
	else if(!strcmp(aux, "F") || !strcmp(aux, "E#")) str += "F";
	else if(!strcmp(aux, "Gb") || !strcmp(aux, "F#")) str += "K";
	else if(!strcmp(aux, "Ab") || !strcmp(aux, "G#")) str += "L";
	else str += aux;
}

void kmpPreprocess(){
	int i = 0, j = -1; b[0] = -1;

	while(i < t){
		while(j >= 0 && padrao[i] != padrao[j])
			j = b[j];

		i++; j++;
		b[i] = j;
	}
}

void kmpSearch(){
	int i = 0, j = 0;

	while(i < m){
		while(j >= 0 && palavra[i] != padrao[j])
			j = b[j];

		i++; j++;
		if(j == t){
			printf("S\n");
			achou = true;
			return;
		}
	}
}

int main(){
	seq.push_back('A'); mapa['A'] = 0;
	seq.push_back('H'); mapa['H'] = 1;
	seq.push_back('B'); mapa['B'] = 2;
	seq.push_back('C'); mapa['C'] = 3;
	seq.push_back('I'); mapa['I'] = 4;
	seq.push_back('D'); mapa['D'] = 5;
	seq.push_back('J'); mapa['J'] = 6;
	seq.push_back('E'); mapa['E'] = 7;
	seq.push_back('F'); mapa['F'] = 8;
	seq.push_back('K'); mapa['K'] = 9;
	seq.push_back('G'); mapa['G'] = 10;
	seq.push_back('L'); mapa['L'] = 11;

	scanf("%d %d", &m, &t);
	while(m){
		palavra.clear();
		padrao.clear();
		achou = false;

		for(int i = 0; i < m; i++){
			//cin >> aux;
			scanf(" %s", aux);
			altera(palavra);
		}

		for(int i = 0; i < t; i++){
			//cin >> aux;
			scanf(" %s", aux);
			altera(padrao);
		}
		padraoConst = padrao;

		for(int i = 0; i < 12 && !achou; i++){
			kmpPreprocess();
			kmpSearch();

			for(int j = 0; j < padraoConst.size(); j++)
				padrao[j] = seq[(mapa[padraoConst[j]] + i) % 12];
		}

		//cout << endl;
		padrao = padraoConst;

		for(int i = 1; i < 12 && !achou; i++){
			for(int j = 0; j < padraoConst.size(); j++)
				padrao[j] = seq[(144 + (mapa[padraoConst[j]] - i)) % 12];

			kmpPreprocess();
			kmpSearch();
		}

		if(!achou)
			printf("N\n");

		cin >> m >> t;
		scanf("%d %d", &m, &t);
	}

	return 0;
}