/****
*
* Título: Questão 15
*
* Autor: Thales Augusto
*
* Data de Criação: 18/03/2016
* Última modificação: 18/03/2016
*
* Descrição: Modifique o programa anterior de forma que a tabela de resultados do torneio seja impressa
considerando a posicao alcancada por cada equipe.
*
*
* Entrada:
Quantidade de equipes no torneio: 2
Nome do time[0]: Fluminense
Digite, respectivemente, Jogos ganhos, Jogos empatados, Jogos perdidos, Numero de cartoes amarelos, Numero de cartoes vermelhos, Gols a favor, Gols contra: 1
2
3
4
5
6
7
Nome do time[1]: Flamengo
Digite, respectivemente, Jogos ganhos, Jogos empatados, Jogos perdidos, Numero de cartoes amarelos, Numero de cartoes vermelhos, Gols a favor, Gols contra: 7
6
5
4
3
2
1
*
* Saída:
Vencedor eh Flamengo com 27 pontos
Melhor ataque: Fluminense com 6 gols a favor
Melhor defesa: Flamengo com 1 gols contra
Time Fair Play: Fluminense com peso 14
Nome		 JG	 JE	 JP	 CA	 CV	 GF	 GC	 SG	 Pontos
---------------------------------------------------
Flamengo	 7	 6	 5	 4	 3	 2	 1	 1	 27
Fluminense	 1	 2	 3	 4	 5	 6	 7	 -1	 5
*
*
****/

// Importando as bibliotecas
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
	char nome[32];
	int Jg,		// Jogos ganhos 
		Je, 	// Jogos empatados
		Jp, 	// Jogos perdidos
		Ca, 	// Cartoes amarelos
		Cv, 	// Cartoes vermelhos
		Gf, 	// Gols a favor
		Gc, 	// Gols contras
		Sg, 	// Saldo de gols
		pontos, // Pontos no torneio
		Fp;		// Fair Play
}Ttorneio;

int main(){
	Ttorneio *time, // Manipulador de time
			 *ataque, // Apontador para time de melhor ataque
			 *defesa, // Apontador para time de melhor defesa
			 *venc, // Apontador para time vencedor
			 *FairPlay; // Apontador para time Fair Play
	int n, // Quantidade de times
		i, j, k,
		*tab, // Vetor da tabela
		tam = 1, 
		aux = 0;

	// Soliitando quantidade de times e verificando
	do{
		printf("Quantidade de equipes no torneio: ");
		scanf("%d", &n);
	}while(n < 1);

	// Alocando memoria para vetor time e tabela e verificando
	time = malloc(n * sizeof(Ttorneio));
	tab = malloc(n * sizeof(int));
	if(time == NULL || tab == NULL){
		printf("Memoria esgotada\n");
		exit(-1);
	}

	// Atribuindo o primeiro time como melhor ataque, defesa, fair play
	venc = &time[0];
	ataque = &time[0];
	defesa = &time[0];
	FairPlay = &time[0];
	tab[0] = 0;

	// Loop para solicitar os times
	for(i = 0; i < n; i++){
		printf("Nome do time[%d]: ", i);
		setbuf(stdin, NULL);
		fgets(time[i].nome, 32, stdin);
		time[i].nome[strlen(time[i].nome) - 1] = '\0';
		printf("Digite, respectivemente, Jogos ganhos, Jogos empatados, Jogos perdidos, Numero de cartoes amarelos, "
			"Numero de cartoes vermelhos, Gols a favor, Gols contra: ");
		scanf("%d %d %d %d %d %d %d", &time[i].Jg, &time[i].Je, &time[i].Jp, &time[i].Ca, &time[i].Cv, &time[i].Gf, &time[i].Gc);

		// Manipulando os dados
		time[i].Sg = time[i].Gf - time[i].Gc;
		time[i].pontos = time[i].Jg * 3;
		time[i].pontos += time[i].Je;
		time[i].Fp = time[i].Cv * 2;
		time[i].Fp += time[i].Ca;

		// Condicoes para saber melhor ataque, defesa, fair play e vencedor
		if(time[i].Gf > ataque->Gf)
			ataque = &time[i];
		if(time[i].Gc < defesa->Gc)
			defesa = &time[i];
		if(time[i].Fp > FairPlay->Fp)
			FairPlay = &time[i];
		if(time[i].pontos > venc->pontos)
			venc = &time[i];

		// Ordenando os times para a tabela
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

	// Saida para o usuario
	printf("Vencedor eh %s com %d pontos\n", venc->nome, venc->pontos);
	printf("Melhor ataque: %s com %d gols a favor\n", ataque->nome, ataque->Gf);
	printf("Melhor defesa: %s com %d gols contra\n", defesa->nome, defesa->Gc);
	printf("Time Fair Play: %s com peso %d\n", FairPlay->nome, FairPlay->Fp);

	// Saida no estilo tabela Tabela 
	printf("Nome\t\t JG\t JE\t JP\t CA\t CV\t GF\t GC\t SG\t Pontos\n");
	printf("---------------------------------------------------------------------------------------\n");
	for(i = 0; i < n; i++){
		printf("%s\t %d\t %d\t %d\t %d\t %d\t %d\t %d\t %d\t %d\n", time[tab[i]].nome, time[tab[i]].Jg, time[tab[i]].Je,
			time[tab[i]].Jp, time[tab[i]].Ca, time[tab[i]].Cv, time[tab[i]].Gf, time[tab[i]].Gc, time[tab[i]].Sg,
			time[tab[i]].pontos);
	}

	// Liberando memoria pro SO
	free(time);

	return 0;
}
