#include<bits/stdc++.h>

using namespace std;

int main(){
	string arvore;
	map<string, int> arvores;
	int n, tot;

	scanf("%d\n", &n);

	for(int i = 0; i < n; i++){
		arvores.clear();
		tot = 0;

		do{
			getline(cin, arvore);

			if(arvore != ""){
				arvores[arvore]++;
				tot++;
			}
		}while(arvore != "" || tot == 0);

		for(auto &arv : arvores)
			printf("%s %.4f\n", arv.first.c_str(), (100 / (float)tot) * arv.second);

		if(i < n - 1)
			printf("\n");
	}

	return 0;
}
