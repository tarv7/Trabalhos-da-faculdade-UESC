#include<iostream>
#include<algorithm>

using namespace std;

typedef struct{
	int x;
	int y;
}tCoord;

int ** aloca(tCoord *);
void desaloca(int **, tCoord *);
int soma(int **, tCoord *, tCoord *);
int rsq(int *, int);
int rsq(int *, tCoord *);
void adjust(int *, int, tCoord *, int);
void imprime(int **, tCoord *);

int main(){
	tCoord tam, c1, c2;
	int p, q, n, **campo;
	char op;

	cin >> tam.x >> tam.y >> p >> q;

	while(tam.x){
		campo = aloca(&tam);

		for(int i = 0; i < q; i++){
			cin >> op;

			if(op == 'A'){
				cin >> n >> c1.x >> c1.y;
				c1.x++; c1.y++;
				adjust(campo[c1.x], c1.y, &tam, n);
			}else if(op == 'P'){
				cin >> c1.x >> c1.y >> c2.x >> c2.y;
				c1.x++; c1.y++; c2.x++; c2.y++;
				cout << soma(campo, &c1, &c2) * p << endl;
			}

		}
		desaloca(campo, &tam);
		cin >> tam.x >> tam.y >> p >> q;
		cout << endl;
	}

	return 0;
}

void desaloca(int **campo, tCoord *tam){
	for(int i = 0; i <= tam->x; i++)
		delete[] campo[i];
	delete[] campo;
}

void imprime(int **campo, tCoord *tam){
	for(int i = 0; i <= tam->x; i++){
		for(int j = 0; j <= tam->y; j++)
			cout << campo[i][j] << " ";
		cout << endl;
	}
	cout << endl;
}

int ** aloca(tCoord *tam){
	int **campo = new int*[tam->x + 1];
	for(int i = 0; i <= tam->x; i++){
		campo[i] = new int[tam->y + 1];
		for(int j = 0; j <= tam->y; j++)
			campo[i][j] = 0;
	}

	return campo;
}

int soma(int **campo, tCoord *c1, tCoord *c2){
	int total = 0;
	tCoord interv;

	interv.x = min(c1->y, c2->y);
	interv.y = max(c1->y, c2->y);

	for(int i = min(c1->x, c2->x); i <= max(c1->x, c2->x); i++)
		total += rsq(campo[i], &interv);

	return total;
}

int rsq(int *vet, tCoord *interv){
	return rsq(vet, interv->y) - (interv->x == 1 ? 0 : rsq(vet, interv->x - 1));
}

int rsq(int *vet, int num){
	int total = 0;

	for(; num; num -= (num & (-num)))
		total += vet[num];

	return total;
}

void adjust(int *campo, int num, tCoord *tam, int v){
	for(; num <= tam->y; num += (num & (-num)))
		campo[num] += v;
}
