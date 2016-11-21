#include<stdio.h>

int main(){
	int n100, n50, n20, n10, n5, n2,
		c100, c50, c25, c10, c5, c1;
	long num;

	double aux;

	scanf("%lf", &aux);

	num = (int)(aux * 100);

	n100 = num / 10000;
	num %= 10000;

	n50 = num / 5000;
	num %= 5000;

	n20 = num / 2000;
	num %= 2000;

	n10 = num / 1000;
	num %= 1000;

	n5 = num / 500;
	num %= 500;

	n2 = num / 200;
	num %= 200;

	c100 = num / 100;
	num %= 100;

	c50 = num / 50;
	num %= 50;

	c25 = num / 25;
	num %= 25;

	c10 = num / 10;
	num %= 10;

	c5 = num / 5;
	num %= 5;

	c1 = num / 1;

	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n", n100);
	printf("%d nota(s) de R$ 50.00\n",  n50);
	printf("%d nota(s) de R$ 20.00\n",  n20);
	printf("%d nota(s) de R$ 10.00\n",  n10);
	printf("%d nota(s) de R$ 5.00\n",   n5);
	printf("%d nota(s) de R$ 2.00\n",   n2);

	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n", c100);
	printf("%d moeda(s) de R$ 0.50\n",  c50);
	printf("%d moeda(s) de R$ 0.25\n",  c25);
	printf("%d moeda(s) de R$ 0.10\n",  c10);
	printf("%d moeda(s) de R$ 0.05\n",   c5);
	printf("%d moeda(s) de R$ 0.01\n",   c1);

	return 0;
}
