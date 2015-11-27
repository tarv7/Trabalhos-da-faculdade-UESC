#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	char nome[46];
	float peso, alt, imch = 0, imcm = 0, media = 0;
	
	printf("Nome de um homem: ");
	fflush(stdin);
	fgets(nome, 46, stdin);
	printf("Peso do homem: ");
	scanf("%f", &peso);
	printf("Altura do homem: ");
	scanf("%f", &alt);
	
	imch = peso / pow(alt, 2);
	printf("IMC de %5.25s = %.2f\n", nome, imch);
	
	printf("Nome de uma mulher: ");
	fflush(stdin);
	fgets(nome, 46, stdin);
	printf("Peso da mulher: ");
	scanf("%f", &peso);
	printf("Altura da mulher: ");
	scanf("%f", &alt);
	
	imcm = peso / pow(alt, 2);
	printf("IMC de %5.25s = %.2f\n", nome, imcm);
	
	media = ((imch * 6) + (imcm * 4)) / 10;
	printf("Média de IMC = %.2f\n", media);
	
	system("pause");
	return 0;
}
