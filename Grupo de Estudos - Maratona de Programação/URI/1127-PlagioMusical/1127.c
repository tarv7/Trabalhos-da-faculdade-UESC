#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_N 100100

int m, 		// Tamanho da palavra
	t, 		// Tamanho do padrao
	tamStr;	// Tamanho da string corrente
int b[MAX_N]; // Vetor auxiliar do KMP
char palavra[MAX_N], 	// Palavra para buscar as subtrings
	 padrao[MAX_N], 	// Substring(padrao)
	 padraoConst[MAX_N],// Substring (Padrao) constante 
	 aux[2];			// String para pegar cada nota
char seq[12];			// Sequencia de notas
int mapa[200];			// hash para achar indice de cada nota no vetor seq
int achou;				// Plagiou ou nao

// Função para padronizar qualquer tipo de entrada de notas.
// Ex.: Ab e G# esta na mesma frenquencia, entao é colocado apenas
// 		"L" de tamanho 1 para representar as duas notas
void altera(char *str){
	if(!strcmp(aux, "Bb") || !strcmp(aux, "A#")) str[tamStr] = 'H';
	else if(!strcmp(aux, "Cb") || !strcmp(aux, "B")) str[tamStr] = 'B';
	else if(!strcmp(aux, "C") || !strcmp(aux, "B#")) str[tamStr] = 'C';
	else if(!strcmp(aux, "Db") || !strcmp(aux, "C#")) str[tamStr] = 'I';
	else if(!strcmp(aux, "Eb") || !strcmp(aux, "D#")) str[tamStr] = 'J';
	else if(!strcmp(aux, "E") || !strcmp(aux, "Fb")) str[tamStr] = 'E';
	else if(!strcmp(aux, "F") || !strcmp(aux, "E#")) str[tamStr] = 'F';
	else if(!strcmp(aux, "Gb") || !strcmp(aux, "F#")) str[tamStr] = 'K';
	else if(!strcmp(aux, "Ab") || !strcmp(aux, "G#")) str[tamStr] = 'L';
	else str[tamStr] = aux[0];

	tamStr++;
}

// Função para criar um vetor de pre processamento que futuramente
// irá ser usado para encontrar as ocoorencias de  substrings na palavra
void kmpPreprocess(){
	int i = 0, j = -1; b[0] = -1;

	while(i < t){
		while(j >= 0 && padrao[i] != padrao[j])
			j = b[j];

		i++; j++;
		b[i] = j;
	}
}

// Algoritmo padrao do KMP para encotrar ocoorencia das substrings
// na palavra em O(m + t)
void kmpSearch(){
	int i = 0, j = 0;

	while(i < m){
		while(j >= 0 && palavra[i] != padrao[j])
			j = b[j];

		i++; j++;
		if(j == t){
			printf("S\n");
			achou = 1;
			return;
		}
	}
}

int main(){
	int i, j; // variaveis de loop

	// Inicializando vetor de sequencia das notas e criando o mapa de indices
	seq[0] = 'A'; mapa['A'] = 0;
	seq[1] = 'H'; mapa['H'] = 1;
	seq[2] = 'B'; mapa['B'] = 2;
	seq[3] = 'C'; mapa['C'] = 3;
	seq[4] = 'I'; mapa['I'] = 4;
	seq[5] = 'D'; mapa['D'] = 5;
	seq[6] = 'J'; mapa['J'] = 6;
	seq[7] = 'E'; mapa['E'] = 7;
	seq[8] = 'F'; mapa['F'] = 8;
	seq[9] = 'K'; mapa['K'] = 9;
	seq[10] = 'G'; mapa['G'] = 10;
	seq[11] = 'L'; mapa['L'] = 11;

	scanf("%d %d", &m, &t);
	while(m){
		// Limpando os vetores de string
		palavra[0] = '\0';
		padrao[0] = '\0';
		// Dizendo q ainda nao achou o plagio
		achou = 0;

		// Obtendo as notas e fazendo as devidas alterações
		tamStr =  0;
		for(i = 0; i < m; i++){
			scanf(" %s", aux);
			altera(palavra);
		}
		palavra[tamStr] = '\0';

		// Obtendo as notas e fazendo as devidas alterações
		tamStr =  0;
		for(i = 0; i < t; i++){
			//cin >> aux;
			scanf(" %s", aux);
			altera(padrao);
		}
		padrao[tamStr] = '\0';

		// Salvando em outra string a sequencia original do padrão
		strcpy(padraoConst, padrao);

		// Realizando verificação para strings a frente
		for(i = 0; i < 12 && !achou; i++){
			kmpPreprocess();
			kmpSearch();

			for(j = 0; j < t; j++)
				padrao[j] = seq[(mapa[padraoConst[j]] + i) % 12];
		}

		// pegando de volta o a senquecia inicial do padrão
		strcpy(padrao, padraoConst);

		// Realizando verificação para strings atrás
		for(i = 1; i < 12 && !achou; i++){
			for(j = 0; j < t; j++)
				padrao[j] = seq[(144 + (mapa[padraoConst[j]] - i)) % 12];

			kmpPreprocess();
			kmpSearch();
		}

		// Se nao encontrou, imprime "N"
		if(!achou)
			printf("N\n");

		scanf("%d %d", &m, &t);
	}

	return 0;
}
