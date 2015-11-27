#include<stdio.h>
#include<stdlib.h>

int main(){
	float dist, vel, lit;
	int temp;
	
	printf("Tempo gasto na viagem: ");
	scanf("%d", &temp);
	printf("Velocidade media na viagem: ");
	scanf("%f", &vel);
	
	dist = temp * vel;
	lit = dist / 12;
	printf("Velocidade media: %.2f\n", vel);
	printf("Tempo gasto: %d\n", temp);
	printf("Distancia percorrida: %.2f\n", dist);
	printf("Quantidade de litros: %.2f\n", lit);
	
	system("pause");
	return 0;
}
