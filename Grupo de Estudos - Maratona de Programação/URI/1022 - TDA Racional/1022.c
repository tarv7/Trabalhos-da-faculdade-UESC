#include<stdio.h>
#include<stdlib.h>

typedef struct{
	int n, d;
}tRacional;

void Ler(tRacional * );
void Imprimir(tRacional * );
void Simplificar(tRacional * );

int main(){
	tRacional num1, num2, res;
	int i;
	char oper;

	scanf("%d", &i);

	for(; i > 0; i--){
		Ler(&num1);

		setbuf(stdin, NULL);
		getchar();
		oper = getchar();
		getchar();

		Ler(&num2);

		switch(oper){
			case '+':
				res.n = (num1.n * num2.d) + (num2.n * num1.d);
				res.d = num1.d * num2.d;
			break;
			case '-':
				res.n = (num1.n * num2.d) - (num2.n * num1.d);
				res.d = num1.d * num2.d;
			break;
			case '*':
				res.n = num1.n * num2.n;
				res.d = num1.d * num2.d;
			break;
			case '/':
				res.n = num1.n * num2.d;
				res.d = num2.n * num1.d;
			break;
			default:
				exit(0);
		}

		Imprimir(&res);
	}

	return 0;
}

void Ler(tRacional *num){
	scanf("%d", &num->n);
	setbuf(stdin, NULL);
	getchar();
	if(getchar() != '/')
		exit(0);
	getchar();
	scanf("%d", &num->d);
	if(!num->d)
		exit(0);
}

void Imprimir(tRacional *res){
	printf("%d/%d = ", res->n, res->d);
	Simplificar(res);
	printf("%d/%d\n", res->n, res->d);
}

void Simplificar(tRacional *res){
	int aux, num, den;

	num = res->n;
	den = res->d;

	while(den){
		aux = num % den;
		num = den;
		den = aux;
	}

	res->n /= num;
	res->d /= num;

	if(res->d < 0){
		res->n *= -1;
		res->d *= -1;
	}

}
