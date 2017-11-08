#include<bits/stdc++.h>

using namespace std;

int main(){
	int pa, pb, n;
	double g1, g2;

	scanf("%d", &n);
	while(n--){
		scanf("%d %d %lf %lf", &pa, &pb, &g1, &g2);

		int anos = 0;
		while(pa <= pb && anos <= 100){
			pa *= (1 + (g1 / 100));
			pb *= (1 + (g2 / 100));
			anos++;
		}

		if(anos > 100)
			printf("Mais de 1 seculo.\n");
		else
			printf("%d anos.\n", anos);
	}

	return 0;
}
