#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
	char nome[32];
	int Jg, Je, Jp, Ca, Cv, Gf, Gc, Sg, pontos, Fp;
}Ttorneio;

int main(){
	Ttorneio *time, *ataque, *defesa, *venc, *FairPlay;
	int n, i, *tab, tam = 1, j, k, aux = 0;

	do{
		printf("Quantidade de equipes no torneio: ");
		scanf("%d", &n);
	}while(n < 1);

	time = malloc(n * sizeof(Ttorneio));
	tab = malloc(n * sizeof(int));
	if(time == NULL || tab == NULL){
		printf("Memoria esgotada\n");
		exit(-1);
	}

	venc = &time[0];
	ataque = &time[0];
	defesa = &time[0];
	FairPlay = &time[0];
	tab[0] = 0;

	for(i = 0; i < n; i++){
		printf("Nome do time[%d]: ", i);
		setbuf(stdin, NULL);
		fgets(time[i].nome, 32, stdin);
		time[i].nome[strlen(time[i].nome) - 1] = '\0';
		printf("Digite, respectivemente, Jogos ganhos, Jogos empatados, Jogos perdidos, Numero de cartoes amarelos, "
			"Numero de cartoes vermelhos, Gols a favor, Gols contra: ");
		scanf("%d %d %d %d %d %d %d", &time[i].Jg, &time[i].Je, &time[i].Jp, &time[i].Ca, &time[i].Cv, &time[i].Gf, &time[i].Gc);

		time[i].Sg = time[i].Gf - time[i].Gc;
		time[i].pontos = time[i].Jg * 3;
		time[i].pontos += time[i].Je;
		time[i].Fp = time[i].Cv * 2;
		time[i].Fp += time[i].Ca;

		if(time[i].Gf > ataque->Gf)
			ataque = &time[i];
		if(time[i].Gc < defesa->Gc)
			defesa = &time[i];
		if(time[i].Fp > FairPlay->Fp)
			FairPlay = &time[i];
		if(time[i].pontos > venc->pontos)
			venc = &time[i];

		for(j = 0; j < i; j++){
			if(time[i].pontos > time[tab[j]].pontos){
				for(k = tam + 1; k > j; k--){
					tab[k] = tab[k - 1];
				}
				tab[k] = i;
				aux = 1;
				break;
			}
		}

		if(aux != 1)
			tab[i] = i;
		tam++;
	}

	printf("Vencedor eh %s com %d pontos\n", venc->nome, venc->pontos);
	printf("Melhor ataque: %s com %d gols a favor\n", ataque->nome, ataque->Gf);
	printf("Melhor defesa: %s com %d gols contra\n", defesa->nome, defesa->Gc);
	printf("Time Fair Play: %s com peso %d\n", FairPlay->nome, FairPlay->Fp);

	printf("Nome\t JG\t JE\t JP\t CA\t CV\t GF\t GC\t SG\t Pontos\n");
	printf("---------------------------------------------------------------------------------\n");
	for(i = 0; i < n; i++){
		printf("%s\t %d\t %d\t %d\t %d\t %d\t %d\t %d\t %d\t %d\n", time[tab[i]].nome, time[tab[i]].Jg, time[tab[i]].Je,
			time[tab[i]].Jp, time[tab[i]].Ca, time[tab[i]].Cv, time[tab[i]].Gf, time[tab[i]].Gc, time[tab[i]].Sg,
			time[tab[i]].pontos);
	}

	free(time);

	return 0;
}
