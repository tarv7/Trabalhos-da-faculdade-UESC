#include<bits/stdc++.h>

#define h 2010

using namespace std;

int main(){
	int vec[h] = {0}, aux, n;

	scanf("%d", &n);
	while(n--){
		scanf("%d", &aux);

		vec[aux]++;
	}

	for(int i = 1; i < h; i++){
		if(vec[i])
			printf("%d aparece %d vez(es)\n", i, vec[i]);
	}

	return 0;
}
