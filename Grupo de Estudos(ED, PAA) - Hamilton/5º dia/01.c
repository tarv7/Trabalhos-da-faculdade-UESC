#include<stdio.h>
#include<stdlib.h>
 
int main(){
	int quant, *votos, votou, ganhador = 0, i = -1, j;
 
	while(1){
		scanf("%d", &quant);
 
		if(quant == 0 && i == -1)
			exit(0);
		else if(quant == 0){
			free(votos);
			exit(0);
		}
 
		votos = (int *) malloc(quant * sizeof(int));
 
		for(i = 0; i < quant; i++){
			for(j = 0; j < quant; j++){
				scanf("%d", &votou);
				if(votou == 1)
					++votos[j];
 
				if(votos[j] > votos[ganhador])
					ganhador = j;
			}
		}
 
		printf("%d\n", votos[ganhador]);
	}
 
	return 0;
}
