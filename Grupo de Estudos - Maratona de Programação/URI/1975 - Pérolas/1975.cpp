#include<iostream>
#include<set>
#include<map>

using namespace std;

int main(){
	bool printou;
	int p, a, r, maior;
	string perolaA, perolaG, nome;
	set<string> perolas;
	set<string>::iterator itP;
	map<string, int> mapa;
	map<string, int>::iterator itM;

	cin >> p >> a >> r;
	cin.ignore();

	while(p){
		maior = 0;
		printou = false;

		for(int i = 0; i < p; i++){
			getline(cin, perolaG);
			perolas.insert(perolaG);
		}

		for(int i = 0; i < a; i++){
			getline(cin, nome);
			mapa.insert(pair<string, int>(nome, 0));

			for(int j = 0; j < r; j++){
				getline(cin, perolaA);

				for(itP = perolas.begin(); itP != perolas.end(); itP++)
					if(!perolaA.compare((*itP).c_str()))
						if(++mapa[nome] > maior)
							maior = mapa[nome];
			}
		}

		for(itM = mapa.begin(); itM != mapa.end(); itM++){
			if(itM->second == maior)
				if(!printou){
					cout << itM->first;
					printou = true;				
				}else
					cout << ", " << itM->first;
		}
		cout << endl;

		mapa.clear();
		perolas.clear();

		cin >> p >> a >> r;
		cin.ignore();
	}

	return 0;
}
