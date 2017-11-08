#include<bits/stdc++.h>
#define h 200
#define BRANCO 0
#define CINZA 1
#define PRETO 2

using namespace std;

bool m[h][h];
int cor[h];
int n, v, e, de, para;

void dfs();
void dfsVis(int , int );

int main(){
    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> v >> e;

        for(int k = 0; k < v; k++){
            for(int j = 0; j < v; j++){
                m[k][j] = false;
            }
            cor[k] = -1;
        }

        for(int j = 0; j < e; j++){
            cin >> de >> para;
            m[de][para] = true;
            cor[de] = cor[para] = BRANCO;
        }

        cout << "Caso " << i << ":" << endl;
        dfs();
    }

    return 0;
}

void dfs(){
    int loops = 1;

    for(int i = 0; i < v; i++){
        for(int j = 0; j < v; j++){
            if(m[i][j]){
                cor[j] = BRANCO;
            }
        }
    }

    for(int i = 0; i < v; i++){
        for(int j = 0; j < v; j++){
            if(cor[j] == BRANCO){
                dfsVis(j, loops);
                cout << endl;
            }
        }
    }
}

void dfsVis(int u, int loops){
    cor[u] = CINZA;

    for(int i = 0; i < v; i++){
        if(m[u][i] && cor[i] == BRANCO){
            for(int j = 0; j < loops; j++) cout << "  ";
            cout << u << "-" << i << " pathR(G," << i << ")" << endl;
            dfsVis(i, loops + 1);
        }else if(m[u][i] && (cor[i] == CINZA || cor[i] == PRETO)){
            for(int j = 0; j < loops; j++) cout << "  ";
            cout << u << "-" << i << endl;
	}
    }

    cor[u] = PRETO;
}
