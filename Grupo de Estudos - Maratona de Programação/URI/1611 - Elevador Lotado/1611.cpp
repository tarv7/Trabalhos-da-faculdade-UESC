#include<bits/stdc++.h>

#define h 50010

using namespace std;

bool compara(int a, int b){ return a > b; }

int main(){
    unsigned long long t, n, c, m, tot, pes[h];

    scanf("%llu", &t);
    while(t--){
        tot = 0;

        scanf("%llu %llu %llu", &n, &c, &m);
        for(int i = 0; i < m; i++)
            scanf("%llu", &pes[i]);

        sort(pes, pes + m, compara);
        for(int i = 0; i < m; i += c)
            tot += (pes[i] * 2);

        printf("%llu\n", tot);
    }

    return 0;
}