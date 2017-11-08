#include<bits/stdc++.h>

using namespace std;

typedef struct {
    int x, y;
}par;

int n;
int l, h;
float v1, v2, v3, menor;
vector<pair<par, par> > aleta;
par com, fim;

float dist(par &a, par &b){
	return sqrt(((a.x - b.x) * (a.x - b.x)) + ((a.y - b.y) * (a.y - b.y)));
}

float calcV3(int i){
    float m, x, y, a, b, c, dist;

	m = (float)(aleta[i+1].first.y - aleta[i+1].second.y) / (aleta[i+1].first.x - aleta[i+1].second.x);

	x = aleta[i+1].second.x;
	y = aleta[i+1].second.y;

	a = -m;
	b = 1;
	c = -(-x * m) - y;

	x = aleta[i].second.x;
	y = aleta[i].second.y;
	dist = (float)abs((a * x) + (b * y) + c) / sqrt((a * a) + (b * b));

    return dist;
}

int main(){
    while(scanf("%d", &n) != EOF){
        scanf("%d %d", &l, &h);
        menor = l + 1;
        aleta.clear();

        for(int i = 0; i < n; i++){
            scanf("%d %d %d", &com.y, &fim.x, &fim.y);

            com.x = (i % 2 == 0) ? 0 : l;

            aleta.push_back(make_pair(com, fim));
        }

        for(int i = 0; i < n - 1; i++){
            if(i % 2 == 0)
                v1 = l - aleta[i].second.x;
            else
                v1 = aleta[i].second.x;

			if(i % 2 == 0){
				if(aleta[i].second.x >= aleta[i+1].second.x)
            		v3 = calcV3(i);
				else
					v3 = dist(aleta[i].second, aleta[i+1].second);
			}else{
				if(aleta[i].second.x <= aleta[i+1].second.x)
            		v3 = calcV3(i);
				else
					v3 = dist(aleta[i].second, aleta[i+1].second);
			}

            if(min(v1, v3) < menor)
                menor = min(v1, v3);
        }

        if((n-1) % 2 == 0)
            v1 = l - aleta[(n-1)].second.x;
        else
            v1 = aleta[(n-1)].second.x;

        if(v1 < menor)
            menor = v1;

        printf("%.2f\n", menor);
    }

    return 0;
}
