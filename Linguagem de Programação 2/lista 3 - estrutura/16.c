#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
	char nome[32];
	int Jg, Je, Jp, Ca, Cv, Gf, Gc, Sg, pontos, Fp;
}Ttorneio;

int main(){
	Ttorneio *time, *ataque, *defesa, *venc, *FairPlay;
	int n, i;

	do{
		printf("Quantidade de equipes no torneio: ");
		scanf("%d", &n);
	}while(n < 1);

	time = malloc(n * sizeof(Ttorneio));
	if(time == NULL){
		printf("Memoria esgotada\n");
		exit(-1);
	}

	venc = &time[0];
	ataque = &time[0];
	defesa = &time[0];
	FairPlay = &time[0];

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
	}

	printf("Vencedor eh %s com %d pontos\n", venc->nome, venc->pontos);
	printf("Melhor ataque: %s com %d gols a favor\n", ataque->nome, ataque->Gf);
	printf("Melhor defesa: %s com %d gols contra\n", defesa->nome, defesa->Gc);
	printf("Time Fair Play: %s com peso %d\n", FairPlay->nome, FairPlay->Fp);

	free(time);

	return 0;
}
