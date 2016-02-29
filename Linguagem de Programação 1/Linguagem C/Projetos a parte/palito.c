#include <stdio.h>
#include <stdlib.h>

int main (){
	int pal = 0, v[50], tot, jog = 1, i, j, lin, col;
	
	printf ("***********NIM***********\n");
	printf ("  O jogo dos palitos!\n");
	
	do{
		printf("Quantas linhas de palitos?");
		scanf("%d", &pal);
	}while(pal < 2 || pal > 10);

	tot = (pal + (pal * pal)) / 2;
	
	for(i = 0; i < pal; i++){
		v[i] = i + 1;
	}
	
	do{
		system("cls");
		printf ("***********NIM***********\n");
		printf ("  O jogo dos palitos!\n");
		
		printf("Jogo dos palitos!\n");
		for(i = 1; i <= pal; i++){
			printf("%d - \t", i);
			for(j = 1; j <= v[i - 1]; j++)
				printf("|");
			printf("\n");
		}
		
		do{
			printf("Jogador %d diga a linha e o numero de palitos: ", jog);
			scanf("%d %d", &lin, &col);
		}while(col > v[lin - 1] || col < 1 || lin > pal || lin < 1);
		
		v[lin - 1] -= col;
		jog = jog % 2 + 1;
		tot -= col;
		
	}while(tot > 1);
	
	if(tot == 0){
		jog = jog % 2 + 1;
		printf("O jogador %d perdeu por estupidez!\n", jog);
	}else{
		printf("O jogador %d venceu!\n", jog);
	}
	
	system ("pause");
	return 0;
}
