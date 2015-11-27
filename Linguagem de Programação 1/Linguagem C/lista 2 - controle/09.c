#include<stdio.h>
#include<stdlib.h>
#include<Math.h>
#define PI 3.1415

int main(){
	int op;
	float res, r, B, b, h, l1, l2;
	
	printf("1 - Circunferencia\n2 - Triangulo\n3 - Trapezio\n4 - Retangulo\n\n");
	scanf("%op", &op);
	
	switch(op){
		case 1:
			printf("Digite o raio: ");
			scanf("%f", &r);
			
			res = PI * pow(r, 2);
			break;
		case 2:
			printf("Digite B e h: ");
			scanf("%f %f", &B, &h);
			
			res = (B * h) / 2;
			break;
		case 3:
			printf("Digite B, b e h: %.2f", &res);
			scanf("%f %f %f", &B, &b, &h);
			
			res = ((B + b) * h) / 2;
			break;
		case 4:
			printf("Digite L1 e L2: ");
			scanf("%f %f", &l1, &l2);
			
			res = l1 * l2;
			break;
		default:
			printf("Opcao Invalida!");
	}
	
	printf("Area: %.2f\n", res);
	
	system("pause");
	return 0;
}
