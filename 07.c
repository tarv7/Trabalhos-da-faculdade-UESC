#include<stdio.h>
#define l 10

int main(){
	float Kpl[l];
	int i;

	// Declarando e enchendo os vetores
	float Kms[l] = {240.5, 300.0, 189.6, 310.6, 280.7, 216.9, 199.4, 160.3, 177.4, 192.3};
	float Lts[l] = {10.3, 15.6, 8.7, 14, 16.3, 15.7, 14.9, 10.7, 8.3, 8.4};

	// Calculo com aritmetica de ponteiros
	for(i = 0; i < l; i++){
		*(Kpl + i) = *(Kms + i) / *(Lts + i);
		printf("%f\n", *(Kpl + i));
	}

	return 0;
}
