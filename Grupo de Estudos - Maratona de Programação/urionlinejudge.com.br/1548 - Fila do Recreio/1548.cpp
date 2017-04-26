#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool comp(int i,int j){
	return i > j;
}

int main(){
	vector<int> fila(1000), filaOrd(1000);
	vector<int>::iterator it, itOrd;
	int n, m, tot;
	
	cin >> n;
	
	while(n--){
		tot = 0;
		cin >> m;
		
		for(int i = 0; i < m; i++){
			cin >> fila[i];
			filaOrd[i] = fila[i];
		}

		sort(filaOrd.begin(), filaOrd.begin()+m, comp);
		
		for(int i = 0; i < m; i++){
			if(fila[i] == filaOrd[i])
				tot++;
		}
				
		cout << tot << endl;
	}
	
	return 0;
}
