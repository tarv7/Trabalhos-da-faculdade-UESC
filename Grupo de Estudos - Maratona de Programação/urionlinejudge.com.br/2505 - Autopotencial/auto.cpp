#include<cstdio>

using namespace std;

long long rec(int n, int exp, int tot){
	long long res;
	if(exp == 1)
		return n;
	if(exp % 2 == 1){
		res = rec(n, exp/2, tot);
		return (((res * res) % tot) * n) % tot;
	}else{
		res = rec(n, exp/2, tot);
		return (res * res) % tot;
	}
}

int main(){
	long long res;
	int n, tot, aux;

	while(scanf("%d", &n) != EOF){
		aux = res = n;
		tot = 10;
		
		while(aux > 9){
			aux /= 10;
			tot *= 10;
		}

		res = rec(n, n, tot);

		if(n == (res % tot))
			printf("SIM\n");
		else
			printf("NAO\n");
	}

	return 0;
}
