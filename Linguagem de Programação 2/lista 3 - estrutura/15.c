/****
*
* Título: Questão 15
*
* Autor: Thales Augusto
*
* Data de Criação: 18/03/2016
* Última modificação: 18/03/2016
*
* Descrição: A seguinte estrutura representa uma sequencia de numeros inteiros
typedef {
int *val;
int n;
int max;
int min;
float media;
}TSeq;
Escreva um programa que declare uma variavel de tipo Tseq e realize as seguintes operacoes:
a) Recebe a quantidade de elementos da sequencia n.
b) Aloca dinamicamente um vetor para armazenar os valores da seq ̈
uencia (val) e ler eles
via teclado.
c) Calcula os atributos da sequencia m ́aximo (max), minimo (min) e media (media).
d) Mostra todos os atributos da sequencia na tela.
*
*
* Entrada:
Valor do elemento 1: 7
Valor do elemento 2: 5
Valor do elemento 3: 3
Valor do elemento 4: 8
Valor do elemento 5: 4
*
* Saída:
Valor do elemento 1: 7
Valor do elemento 2: 5
Valor do elemento 3: 3
Valor do elemento 4: 8
Valor do elemento 5: 4
Maximo: 8
Minimo: 3
Media: 5.40
*
*
****/

// Importacao das bibliotecas
#include<stdio.h>
#include<stdlib.h>

// Estrutura da sequencia
typedef struct{
	int *val;
	int n;
	int max;
	int min;
	float media;
}tSeq;

int main(){
	tSeq seq; // Manipulador da sequencia
	int i;

	// Solicitando a quantidade de numeros da sequencia e verificando
	do{
		printf("Digite a quantidade de elementos da sequencia(> 0): ");
		scanf("%d", &seq.n);
	}while(seq.n < 1);

	// Alocando o vetor da sequencia dinamicamente e verificando
	seq.val = (int *) malloc(seq.n * sizeof(int));
	if(seq.val == NULL){
		printf("Erro de memoria!\n");
		exit(-1);
	}

	// Solicitando o primeiro elemento
	printf("Elemento 1: ");
	scanf("%d", &seq.val[0]);

	// Atribuindo o primeiro elemento como maximo e minimo
	seq.max = seq.min = seq.val[0];
	// Calculando a media
	seq.media = (float) seq.val[0] / seq.n;

	// Loop para solicitar todos os elementos da sequencia
	for(i = 1; i < seq.n; i++){
		// Solicitando o elemento i
		printf("Elemento %d: ", i + 1);
		scanf("%d", &seq.val[i]);

		// Condicoes para max e min
		if(seq.val[i] > seq.max)
			seq.max = seq.val[i];
		else if(seq.val[i] < seq.min)
			seq.min = seq.val[i];

		// Calculando a media
		seq.media += (float) seq.val[i] / seq.n;
	}

	// Saida para o usuario
	for(i = 0; i < seq.n; i++)
		printf("Valor do elemento %d: %d\n", i + 1, seq.val[i]);

	printf("Maximo: %d\nMinimo: %d\nMedia: %.2f\n", seq.max, seq.min, seq.media);

	return 0;
}
