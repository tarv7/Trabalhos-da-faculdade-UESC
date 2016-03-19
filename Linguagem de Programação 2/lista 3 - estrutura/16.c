/****
*
* Título: Questão 15
*
* Autor: Thales Augusto
*
* Data de Criação: 18/03/2016
* Última modificação: 18/03/2016
*
* Descrição: Faca um programa para processar os resultados de um torneio de futebol de areia onde
participaram n equipes. Para cada equipe considere: nome da equipe, jogos ganhos, jogos
empatados, jogos perdidos, numero de cartoes amarelhos, numero de cartoes vermelhos,
goles a favor, goles em contra e saldo. Seu programa dever ́a informar:
a) Nome da equipe que ganhou o torneio (jogos ganhos = 3 pontos, jogos empatados = 1
ponto). Desconsidere o caso que duas equipes alcan ̧caram o mesmo n ́
umero de pontos.
b) Nome da equipe que teve o melhor ataque.
c) Nome da equipe que teve a melhor defesa.
d) Nome da equipe Fair Play, os cartoes vermelhos tem peso 2 e os amarelhos peso 1.
*
*
* Entrada:
Quantidade de equipes no torneio: 1
Nome do time[0]: Flamengo
Digite, respectivemente, Jogos ganhos, Jogos empatados, Jogos perdidos, Numero de cartoes amarelos, Numero de cartoes vermelhos, Gols a favor, Gols contra: 1
2
3
4
5
6
7
*
* Saída:
Vencedor eh Flamengo com 5 pontos
Melhor ataque: Flamengo com 6 gols a favor
Melhor defesa: Flamengo com 7 gols contra
Time Fair Play: Flamengo com peso 14
*
*
****/

// Importacao das bibliotecas
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// Estrutura de uma tabela de torneio
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
	
	int n, // Quantiade de times
		i;

	// Solicitando quantidade de times e verificando
	do{
		printf("Quantidade de equipes no torneio: ");
		scanf("%d", &n);
	}while(n < 1);

	// Alocando vetor de times e verificando
	time = malloc(n * sizeof(Ttorneio));
	if(time == NULL){
		printf("Memoria esgotada\n");
		exit(-1);
	}

	// Atribuindo Vencedor, fair play, melhor ataque e defesa ao primeiro time
	venc = &time[0];
	ataque = &time[0];
	defesa = &time[0];
	FairPlay = &time[0];

	// Loop para solicitar os times
	for(i = 0; i < n; i++){
		// Pedindo os dados
		printf("Nome do time[%d]: ", i);
		setbuf(stdin, NULL);
		fgets(time[i].nome, 32, stdin);
		time[i].nome[strlen(time[i].nome) - 1] = '\0';
		printf("Digite, respectivemente, Jogos ganhos, Jogos empatados, Jogos perdidos, Numero de cartoes amarelos, "
			"Numero de cartoes vermelhos, Gols a favor, Gols contra: ");
		scanf("%d %d %d %d %d %d %d", &time[i].Jg, &time[i].Je, &time[i].Jp, &time[i].Ca, &time[i].Cv, &time[i].Gf, &time[i].Gc);

		// Atribuindo os dados de cada time
		time[i].Sg = time[i].Gf - time[i].Gc;
		time[i].pontos = time[i].Jg * 3;
		time[i].pontos += time[i].Je;
		time[i].Fp = time[i].Cv * 2;
		time[i].Fp += time[i].Ca;

		// Verificando melhor ataque, defesa, fair play e vencedor
		if(time[i].Gf > ataque->Gf)
			ataque = &time[i];
		if(time[i].Gc < defesa->Gc)
			defesa = &time[i];
		if(time[i].Fp > FairPlay->Fp)
			FairPlay = &time[i];
		if(time[i].pontos > venc->pontos)
			venc = &time[i];
	}

	// Saida para o usuario
	printf("Vencedor eh %s com %d pontos\n", venc->nome, venc->pontos);
	printf("Melhor ataque: %s com %d gols a favor\n", ataque->nome, ataque->Gf);
	printf("Melhor defesa: %s com %d gols contra\n", defesa->nome, defesa->Gc);
	printf("Time Fair Play: %s com peso %d\n", FairPlay->nome, FairPlay->Fp);

	// Liberando memoria
	free(time);

	return 0;
}
