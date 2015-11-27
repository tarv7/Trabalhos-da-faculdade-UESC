#include<stdio.h>
#include<stdlib.h>

int main(){
	int i;
	float soma = 0, medtur, media[8];
	
	printf("\n Digite 8 medias: ");
	for(i = 0; i < 8; i++){
		printf("\n Digite a media %d: ", i + 1);
		scanf("%f", &media[i]);
		soma += media[i];
	}
	
	medtur = soma / 8;
	printf("\n Media da Turma = %.2f \n\n", medtur);
	
	system("pause");
	return 0;
}
