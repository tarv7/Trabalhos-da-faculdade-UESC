/****
*
* Título: Matriz de Computação Gráfica
*
* Autor: Thales Augusto - tarv7
*
* Data de Criação: 16/05/2016
* Última modificação: 17/05/2016
*
* Descrição: 
*
		A Entrada
	A entrada consta de v ́arios casos de teste, cada um com múltiplas linhas. Um caso teste começa
com uma linha contendo três valores reais com três casas decimais: (X, Y, Z) que demarca a
posição inicial do objeto, em seguida uma linha com um valor inteiro 0 < N < 1000, o 
número de operações de movimento que ser a realizada sobre um objeto. Em seguida são N conjuntos
de 4 linhas, cada conjunto começa com uma linha contendo um caracter que pode ser: ′T′ ou 
'R', indicando um movimento de translação ou de rotação, se o movimento for de translação,
a seguir temos três linhas, cada uma com um valor real com três casas decimais: (Tx , Ty , Tz )
representando a translação, se o movimento for de rotação, a seguir do caracter temos três
linhas cada qual com três valores reais com três casas decimais, representando a rotação pela
sua matriz: (Rxx , Ryx , Rzx ), (Rxy , Ryy , Rzy ) e (Rxz , Ryz , Rzz ). As entradas terminam com o fim
dos casos de teste.

		A Saída
	A saída deve ser uma linha única, para cada caso de teste, com três valores reais com três
casas decimais, representando a posição final do objeto: (X, Y, Z).
*
*
* Entrada: 
*
	1.000 1.000 1.000
	3
	T
	2.000
	1.000
	-1.000
	R
	1.000 0.000 0.000
	0.000 0.866 -0.500
	0.000 0.500 0.866
	T
	-1.000
	2.000
	1.000
*
* Saída: 
*
	2.000 3.732 0.000
*
*
****/

#include<ctype.h>
#include<stdio.h>
#include<stdlib.h>

#define h 3

/****
*
* Título: Translação
*
* Autor: Thales Augusto Ramos Vieira - tarv7
*
* Data de Criação: 16/05/2016
* Última modificação: 17/05/2016
*
* Descrição: Essa é a função é responsável por realizar o movimento de translação no vetor posicao
*
* Parâmetros: Recebe o endereço de memória do vetor posicao atual(float) e um ponteiro para um arquivo
*
* Valor de retorno: A função retorna void
*
****/
void Translacao(float * , FILE * );

/****
*
* Título: Rotação
*
* Autor: Thales Augusto
*
* Data de Criação: 16/05/2016
* Última modificação: 16/05/2016
*
* Descrição: Essa é a função é responsável por realizar o movimento de rotação no vetor posicao
*
* Parâmetros: Recebe o endereço de memória do vetor posicao atual(float) e um ponteiro para um arquivo
*
* Valor de retorno: A função retorna void
*
****/
void Rotacao(float * , FILE * );

/****
*
* Título: GetVetor
*
* Autor: Thales Augusto
*
* Data de Criação: 16/05/2016
* Última modificação: 16/05/2016
*
* Descrição: Essa é a função é responsável por obter uma sequência de 3 floats do arquivo
*
* Parâmetros: Recebe um ponteiro para um arquivo
*
* Valor de retorno: A função retorna o endereço de memória de onde foi alocado os 3 floats
					obtidos do arquivo(float)
*
****/
float * GetVetor(FILE * );

int main(){
	float *posicao; // Vetor de posicao inicial
	int num, // Numero de movimentos
		i;
	char oper; // Tipo de movimento
	FILE *f; // ponteiro para arquivo

	// Abrindo o arquivo no modo leitura e verificando
	f = fopen("entrada.txt", "r");
	if(!f){
		printf("Erro ao abrir o arquivo\n");
		exit(-1);
	}

	// Pegando o vetor inicial
	posicao = GetVetor(f);

	// Quantidade de movimentos
	fscanf(f, "%d", &num);

	// Verificando se a quantidade de movimentos é válida
	if(num < 1 || num >= 1000){
		printf("Numero de operacoes invalido!\n");
		exit(-1);
	}

	for(i = 0; i < num; i++){
		// Jogando fora o \n
		fgetc(f);
		// Pegando o tipo de operacao
		oper = fgetc(f);

		// Chamando as funcoes de acordo com o tipo de movimento
		if(oper == 'R')
			Rotacao(posicao, f);
		else if(oper == 'T')
			Translacao(posicao, f);
		else{
			printf("Entrada invalida!\n");
			exit(-1);
		}
	}

	// Mostra na tela a posicao final
	for(i = 0; i < h; i++)
		printf("%.3f ", posicao[i]);

	printf("\n");
	fclose(f);

	return 0;
}

void Translacao(float *posicao, FILE *f){
	float *vetor; // Vetor do arquivo
	int i;

	// Obtendo vetor do arquivo
	vetor = GetVetor(f);

	// Realizando a soma
	for(i = 0; i < h; i++)
		posicao[i] = posicao[i] + vetor[i];
}

void Rotacao(float *posicao, FILE *f){
	float **matriz, // Matriz do arquivo
		   temp[h]; // Vetor auxiliar
	int x = 0, y = 1, z = 2, i;

	// Alocando as linhas da matriz
	matriz = (float ** ) malloc(h * sizeof(float * ));
	if(!matriz)
		exit(-1);

	// Obetendo o valor de cada linha da matriz no arquivo
	for(i = 0; i < h; i++)
		matriz[i] = GetVetor(f);

	// Realizando o produto entre a matriz e o vetor de posicao atual
	temp[x] = (matriz[x][x] * posicao[x]) + (matriz[y][x] * posicao[y]) + (matriz[z][x] * posicao[z]);
	temp[y] = (matriz[x][y] * posicao[x]) + (matriz[y][y] * posicao[y]) + (matriz[z][y] * posicao[z]);
	temp[z] = (matriz[x][z] * posicao[x]) + (matriz[y][z] * posicao[y]) + (matriz[z][z] * posicao[z]);

	// Pegando o endereco do vetor auxiliar
	posicao[x] = temp[x];
	posicao[y] = temp[y];
	posicao[z] = temp[z];
}

float * GetVetor(FILE *f){
	float *vetor; // Vetor que pega valores do arquivo
	int i;

	// Alocando o vetor e verificando
	vetor = malloc(h * sizeof(float));
	if(vetor == NULL)
		exit(-1);

	// Obtendo os valores
	for(i = 0; i < h; i++)
		fscanf(f, "%f", &vetor[i]);

	return vetor;
}
