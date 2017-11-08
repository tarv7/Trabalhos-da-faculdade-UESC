#include<iostream>
#include<map>

using namespace std;

typedef struct{
	int x, y;
}tPonto;

int tri(int n);

int main(){
	int n, sum = 0, total = 0;
	tPonto p[1000];
	unsigned long long dist[1000][1000];
	map<unsigned long long, int> ocor;

	cin >> n; 

	while(n){
		total = 0;

		for (int i = 0; i < n; i++)
			cin >> p[i].x >> p[i].y;
	
		for (int i = 0; i < n; i++){
			sum = 0;
			ocor.clear();
			for (int j = 0; j < n; j++){
				dist[i][j] = ((unsigned long long)(p[i].x - p[j].x) * (p[i].x - p[j].x)) + ((unsigned long long)(p[i].y - p[j].y) * (p[i].y - p[j].y));

				sum += ocor[dist[i][j]]++;
			}

			total += sum;
		}

		cout << total << endl;

		cin >> n;
	}
    return 0;
}
