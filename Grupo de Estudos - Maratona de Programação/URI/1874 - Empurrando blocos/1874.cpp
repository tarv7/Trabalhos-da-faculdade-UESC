#include<bits/stdc++.h>

using namespace std;

int main(){
	int h, p, f, num, faltam;
	vector<stack<int> > pilhas;
	vector<int> esteira;

	scanf("%d %d %d", &h, &p, &f);
	while(h){
		faltam = h * p;
		esteira.clear();
		pilhas.assign(p+1, stack<int>());

		for(int i = 0; i < h; i++){
			for(int j = 0; j < p; j++){
				scanf("%d", &num);
				if(num){
					pilhas[j].push(num);
					faltam--;
				}
			}
		}

		for(int i = 0; i < f; i++){
			scanf("%d", &num);
			esteira.push_back(num);
		}
		esteira.push_back(0);

		int j = 0, i;
		for(i = p-1; i >= 0 && faltam && j < esteira.size(); i--){
			while(pilhas[i].size() < h){
				pilhas[i].push(esteira[j++]);
			}
		}
		for(; i >= 0; i--){
			while(pilhas[i].size() < h){
				pilhas[i].push(0);
			}
		}

		for(int i = 0; i < h; i++){
			for(int j = 0; j < p-1; j++){
				printf("%d ", pilhas[j].top());
				pilhas[j].pop();
			}
			printf("%d", pilhas[p-1].top());
			pilhas[p-1].pop();
			printf("\n");
		}

		scanf("%d %d %d", &h, &p, &f);
	}

	return 0;
}
