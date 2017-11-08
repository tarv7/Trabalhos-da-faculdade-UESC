#include<iostream>
#include<cstdlib>

using namespace std;

typedef struct Tno{
	int v;
	struct Tno *ant, *prox;
}no;

typedef struct{
	no *prim, *ult;
	int tam;
}lista;

void push(lista *, int );
no * atDir(no *, int );
no * atEsq(no *, int );
void pop(lista *, no *);
void ajuda(no *, int );

int main(){
	int n, k, m;
	lista fila;
	no *dir, *esq, *auxD, *auxE;

	fila.prim = fila.ult = NULL;

	cin >> n >> k >> m;
	fila.tam  = n;

	while(n){
		for(int i = 1; i <= n; i++)
			push(&fila, i);

		dir = fila.prim;
		esq = fila.ult;

		while(fila.tam > 0){
			dir = atDir(dir, k);
			esq = atEsq(esq, m);

			if(dir->v == esq->v){
				auxD = dir;
				if(dir->v < 10)
					cout << "  ";
				else if(dir->v < 100)
					cout << " ";
				cout << auxD->v;
				dir = dir->prox;
				esq = esq->ant;
				pop(&fila, auxD);

				fila.tam -= 1;
			}else{
				auxD = dir;
				auxE = esq;
				if(dir->v < 10)
					cout << "  ";
				else if(dir->v < 100)
					cout << " ";
				cout << dir->v;
				dir = dir->prox;
				pop(&fila, auxD);
				if(esq->v < 10)
					cout << "  ";
				else if(esq->v < 100)
					cout << " ";
				cout << esq->v;
				esq = esq->ant;
				if(dir == auxE)
					dir = dir->prox;
				pop(&fila, auxE);

				fila.tam -= 2;
			}

			if(fila.tam > 0)
				cout << ",";
			else
				cout << endl;
		}

		cin >> n >> k >> m;
		fila.tam  = n;
	}

	return 0;
}

no * atDir(no *dir, int k){
	for(int i = 1; i < k; i++)
		dir = dir->prox;

	return dir;
}

no * atEsq(no *esq, int m){
	for(int i = 1; i < m; i++)
		esq = esq->ant;

	return esq;
}

void pop(lista *f, no *atual){
	if(f->prim == atual)
		f->prim = atual->prox;
	if(f->ult == atual)
		f->ult = atual->ant;
	atual->ant->prox = atual->prox;
	atual->prox->ant = atual->ant;

	free(atual);
}

void push(lista *f, int val){
	no *n;

	n = (no *) malloc(sizeof(no));
	n->v = val;

	if(f->prim == NULL){
		f->prim = n;
		f->ult = n;
		n->ant = n;
		n->prox = n;
	}else{
		n->ant = f->ult;
		n->prox = f->prim;
		f->ult->prox = n;
		f->prim->ant = n;
		f->ult = n;
	}
}
