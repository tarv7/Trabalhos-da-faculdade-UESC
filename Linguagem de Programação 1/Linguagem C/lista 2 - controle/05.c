#include<stdio.h>
#include<stdlib.h>

int main(){
	int i;
	float n, media = 0;
	
	for(i = 1; i <= 4; i++){
		printf("Digite a %d nota: ", i);
		scanf("%f", &n);
		media += (n / 4);
	}
	
	if(media >= 7)
		printf("Media: %.2f ! Aprovado!\n", media);
	else
		printf("Media: %.2f ! Reprovado!\n", media);
		
	system("pause");
	return 0;
		
}
