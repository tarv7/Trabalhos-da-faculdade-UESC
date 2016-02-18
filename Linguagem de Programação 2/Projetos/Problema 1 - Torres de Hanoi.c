/****
*
* Título: Torres de Hanoi
*
* Autor: Thales Augusto
*
* Data de Criação: 27/12/2015
* Última modificação: 02/01/2016
*
* Descrição: 
*
	    O problema das Torres de Hanoi é um problema clássico em Ciências da Com-
	putação, geralmente utilizado para ilustrar os conceitos de programação recursiva. O
	problema foi criado pelo matemático francês Edouard Lucas, e estabelece, que dada
	três hastes (A, B, e C), existem n discos de vários tamanhos no haste A, colocados em
	ordem decrescente segundo o tamanho. Os discos deverão ser movimentados do haste
	    A para o haste B respeitando as seguintes restrições:
	        • nunca colocar um disco maior sobre um disco menor,
	        • pode-se mover um único disco por vez,
	        • nunca colocar um disco em outro lugar que não numa das três hastes.
*
*
* Entrada: Número inteiro positivo, por exemplo, 2.
*
* Saída: 
*
	Passo: 0


	  *      |      |     
	 ***     |      |     
	--+------+------+--

	Passo: 1


	  |      |      |     
	 ***     |      *     
	--+------+------+--

	Passo: 2


	  |      |      |     
	  |     ***     *     
	--+------+------+--

	Passo: 3


	  |      *      |     
	  |     ***     |     
	--+------+------+--
*
*
****/

/* 
	Declaração de bibliotecas, structs e funções - organizadas por ordem alfabética 
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>

#define h 3

// Struct que determina cada haste da torre
typedef struct{
	char **disco;
	int tam;
}THastes;

// Struct que determina a característica da torre como um todo(contendo também as hastes)
typedef struct{
	char *base;
	int linhas, cols;
	THastes haste[h];
	FILE *f;
}TEstrutura;

/****
*
* Título: Abrir Arquivo
*
* Autor: Thales Augusto Ramos Vieira
*
* Data de Criação: 27/12/2015
* Última modificação: 16/02/2016
*
* Descrição: Abre o arquivo a ser gerado
*
* Parâmetros: Uma String de modo de abertura
*
* Valor de retorno: A função retorna um ponteiro para um arquivo
*
****/
FILE * AbrirArquivo(char * );

/****
*
* Título: Criar Base
*
* Autor: Thales Augusto Ramos Vieira
*
* Data de Criação: 27/12/2015
* Última modificação: 16/02/2016
*
* Descrição: Cria a base das torres. Ex.: --+------+------+--
*
* Parâmetros: Recebe o endereço de memória da estrutura criada
*
* Valor de retorno: A função retorna void
*
****/
void CriarBase(TEstrutura * );

/****
*
* Título: Criar Hastes
*
* Autor: Thales Augusto Ramos Vieira
*
* Data de Criação: 27/12/2015
* Última modificação: 16/02/2016
*
* Descrição: Cria o conjunto de hastes, a haste principal(com os dicos) e um vetor vazio(sem disco)
*
* Parâmetros: Recebe o endereço de memória da estrutura criada
*
* Valor de retorno: A função retorna void
*
****/
void CriarHastes(TEstrutura * );

/****
*
* Título: Haste A
*
* Autor: Thales Augusto Ramos Vieira
*
* Data de Criação: 27/12/2015
* Última modificação: 16/02/2016
*
* Descrição: Aloca a haste A(haste que contém os discos)
*
* Parâmetros: Recebe dois inteiros, o tamanho do maior disco e o tamanho da coluna que será usada
*
* Valor de retorno: A função irá retornar uma matriz de char contendo todos os discos
*
****/
char ** HasteA(int , int );

/****
*
* Título: Haste B e C
*
* Autor: Thales Augusto Ramos Vieira
*
* Data de Criação: 27/12/2015
* Última modificação: 16/02/2016
*
* Descrição: Aloca a haste B(haste vazia)
*
* Parâmetros: Recebe um inteiro, tamanho da coluna vazia
*
* Valor de retorno: A função irá retornar um vetor de char contendo espaços e um símbolo "|"
*
****/
char * HasteBC(int );

/****
*
* Título: Imprimir Hastes
*
* Autor: Thales Augusto Ramos Vieira
*
* Data de Criação: 27/12/2015
* Última modificação: 16/02/2016
*
* Descrição: Função responsável por imprimir a Torre de Hanoi na tela e no arquivo
*
* Parâmetros: A função irá receber um endereço de memória da estrutura criada e um inteiro que conta o número de passos
*
* Valor de retorno: A função retorna void
*
****/
void ImprimirHastes(TEstrutura * , int );

/****
*
* Título: Liberar Memória
*
* Autor: Thales Augusto Ramos Vieira
*
* Data de Criação: 27/12/2015
* Última modificação: 16/02/2016
*
* Descrição: A função é responsável apenas por remover a memória alocada pelas matrizes e vetores
*
* Parâmetros: Recebe o endereço de memória da estrutura criada
*
* Valor de retorno: A função retorna void
*
****/
void LiberarMemoria(TEstrutura * );

/****
*
* Título: Menu
*
* Autor: Thales Augusto Ramos Vieira
*
* Data de Criação: 27/12/2015
* Última modificação: 16/02/2016
*
* Descrição: A função é responsável por mostrar o menu todas as vezes que for chamada
*
* Parâmetros: A função irá receber um endereço de memória da estrutura criada
*
* Valor de retorno: A função retorna void
*
****/
void Menu(TEstrutura * );

/****
*
* Título: Mover Disco
*
* Autor: Thales Augusto Ramos Vieira
*
* Data de Criação: 27/12/2015
* Última modificação: 16/02/2016
*
* Descrição: Função responsável por mover os discos, que na verdade apenas troca os ponteiros
*
* Parâmetros: Recebe o endereço de memória da estrutura criada. Recebe dois inteiros, haste de origem e destino
*
* Valor de retorno: A função retorna void
*
****/
void MoverDisco(TEstrutura * , int , int );

/****
*
* Título: Termino
*
* Autor: Thales Augusto Ramos Vieira
*
* Data de Criação: 27/12/2015
* Última modificação: 16/02/2016
*
* Descrição: A função mostra uma mensagem final e salva no arquivo
*
* Parâmetros: Recebe o endereço de memória da estrutura criada
*
* Valor de retorno: A função retorna void
*
****/
void Termino(TEstrutura * );

/****
*
* Título: Torres de Hanoi
*
* Autor: Thales Augusto Ramos Vieira
*
* Data de Criação: 27/12/2015
* Última modificação: 16/02/2016
*
* Descrição: Essa é a função recursiva responsável por resolver o problema das Torres de Hanoi
*
* Parâmetros: Recebe o endereço de memória da estrutura criada. Recebe também 5 inteiros: o primeiro será a quantidade
*			  de discos a ser movido da haste de origem; os 3 próximos será as haste de origem, destino e a auxiliar; 
			  e o ultimo inteiro será a quantidade de passos para resolução da torre
* Valor de retorno: A função irá retornando a quantidade de passos
*
****/
int TorresHanoi(TEstrutura * , int , int , int , int , int );

int main(){
	TEstrutura torres; /* Variavel da estrutura */

	do{
		Menu(&torres);
	}while(1);

	return 0;
}

FILE * AbrirArquivo(char *oper){
	FILE *f; /* ponteiro para o arquivo  */

	// Abrindo o arquivo de acordo com seu tipo de operação e verificando
	f = fopen("torres.txt", oper);
	if(!f){
		printf("Erro ao manipular o arquivo!\n");
		exit(-1);
	}

	return f;
}

void CriarBase(TEstrutura *hanoi){
	// Fazendo o calculo do tamanho da base da Torre
	int tamBase; /* inteiro para guardar o tamanho da base  */
	int linhas; /* inteiro com o numero de discos */
	int i;

	// Recebendo valor das linhas para evitar acessar a struct constantemente
	linhas = hanoi->linhas;

	// Formula para calcular o tamanho da base. o maior discos ocupa 2n-1, multiplicando por 3 hastes dará...
	tamBase = (6 * linhas + 9);

	// Alocando o vetor com o tamanho da base e verificando
	hanoi->base = (char *) malloc(tamBase * sizeof(char));
	if(hanoi->base == NULL)
		exit(-1);

	// Enchendo o vetor Base, que sera impresso embaixo da Torre
	for(i = 0; i < tamBase; i++){
		hanoi->base[i] = '-';
	}

	// Colocando o "+" no seus devidos lugares
	hanoi->base[linhas + 1] = '+';
	hanoi->base[tamBase / 2] = '+';
	hanoi->base[tamBase - linhas - 2] = '+';
}

void CriarHastes(TEstrutura *hanoi){
	char ***torres; /* ponteiro para cada haste  */
	char **a; /* ponteiro para matriz da primeira haste(A, haste cheia)  */
	char *bc; /* ponteiro para o vetor das hastes B e C (haste vazias) */
	int tamBase; /* guarda o tamanho da base  */
	int linhas, cols; /* guarda o número de discos e colunas usadas */
	int i;

	// Recebendo valor das linhas para evitar acessar a struct constantemente
	linhas = hanoi->linhas;

	// Alocando os discos nas hastes e verificando
	for(i = 0; i < h; i++){
		hanoi->haste[i].disco = (char **) malloc(linhas * sizeof(char *));
		if(hanoi->haste[i].disco == NULL)
			exit(-1);
	}


	// Recebendo a referencia da haste A
	a = HasteA(linhas, hanoi->cols);

	// Recebendo a referencia do vetor vazio das hastes B e C
	bc = HasteBC(hanoi->cols);

	// Atribuindo as referencias das hastes a Torre
	for(i = 0; i < linhas; i++){
		hanoi->haste[0].disco[i] = a[i];
		hanoi->haste[1].disco[i] = bc;
		hanoi->haste[2].disco[i] = bc;
	}

	// Atribuindo o tamanho inicial de cada haste
	hanoi->haste[0].tam = linhas;
	hanoi->haste[1].tam = hanoi->haste[2].tam = 0;
}

char ** HasteA(int linhas, int cols){
	char **a; /* ponteiro para haste A  */
	int i, j;

	// Alocando dinamicamente o vetor A de acordo com a quantidade de discos e verificando
	a = (char **) malloc(linhas * sizeof(char *));
	if(a == NULL)
		exit(-1);
	
	// Alocando o espaco necessario do maior disco, verificando e enchendo com espaços
	for(i = 0; i < linhas; i++){
		a[i] = (char * ) malloc(cols * sizeof(char));
		if(a[i] == NULL)
			exit(-1);
		for(j = 0; j < cols; j++)
			a[i][j] = ' ';
	}

	// Algoritmo para encher a matriz no estilo piramide
	for(i = 0; i < linhas; i++)
		for(j = i; j < cols - i; j++)
			a[i][j] = '*';

	return a;
}

char * HasteBC(int cols){
	char *bc; /* ponteiro para o vetor vazio  */
	int i;

	// Alocando o espaco necessarionas hastes B e C para o maior disco e verificando
	bc = (char *) malloc(cols * sizeof(char));
	if(bc == NULL)
		exit(-1);

	// Enchendo as hastes B e C com espaços e um "|"
	for(i = 0; i < cols; i++)
		bc[i] = ' ';
	bc[cols / 2] = '|';

	return bc;
}

void ImprimirHastes(TEstrutura *hanoi, int passo){
	int i, j, k;

	// Esperando meio segundo para mover o disco. criar-se o efeito de movimento
	usleep(500000);
	system("clear");

	printf("\nQuando quiser sair aperte CTRL+C\n\n");

	// Imprimindo na tela e no arquivo o número de discos e o passo atual
	printf("%d discos. Passo: %d\n\n", hanoi->linhas, passo);
	fprintf(hanoi->f, "%d discos. Passo: %d\n\n", hanoi->linhas, passo);

	// Algortimo para apresentar a Torre na tela e salvar no arquivo
	for(i = hanoi->linhas - 1; i >= 0; i--){
		printf("  ");
		fprintf(hanoi->f, "  ");
		for(k = 0; k < h; k++){
			for(j = 0; j < hanoi->cols; j++){
				printf("%c", hanoi->haste[k].disco[i][j]);
				fprintf(hanoi->f, "%c", hanoi->haste[k].disco[i][j]);
			}
			printf("    ");
			fprintf(hanoi->f, "    ");
		}
		printf("\n");
		fprintf(hanoi->f, "\n");
	}

	// Apresentando a base da Torre na tela e no arquivo
	printf("%s\n", hanoi->base);
	fprintf(hanoi->f, "%s\n\n", hanoi->base);
}

void LiberarMemoria(TEstrutura *hanoi){
	int i;

	for(i = 0; i < hanoi->linhas; i++){
		// Liberando cada disco
		free(hanoi->haste[1].disco[i]);
	}

	// Liberando as linhas sem discos
	free(hanoi->haste[0].disco[0]);

	// Liberando a primeira haste
	free(hanoi->haste[0].disco);
	// Liberando a segunda haste
	free(hanoi->haste[1].disco);
	// Liberando a terceira haste
	free(hanoi->haste[2].disco);
	// Liberando a base da torre
	free(hanoi->base);

}

void Menu(TEstrutura *hanoi){
	int opc;

	// Apresentando o menu na tela e pedindo a opção desejada
	do{
		system("clear");

		printf("***** TORRES DE HANOI *****\t\t\t      *            |            |      \n");
		printf("                           \t\t\t     ***           |            |      \n");
		printf("(1) Testar a Torre de Hanoi\t\t\t    *****          |            |      \n");
		printf("(2) Como funciona?         \t\t\t   *******         |            |      \n");
		printf("(3) Créditos               \t\t\t  *********        |            |      \n");
		printf("(4) Sair                   \t\t\t------+------------+------------+------\n\n");

		printf("Digite a opção desejada: ");
		scanf("%d", &opc);
	}while(opc < 1 || opc > 4);

	system("clear");

	switch(opc){
		case 1:
			// Solicitando a quantidade de discos e verificando
			hanoi->linhas = 0;
			do{
				system("clear");

				printf("Digite o número de discos(maior que 0 e menor que 32): ");
				setbuf(stdin, NULL);
				scanf("%d", &(hanoi->linhas));
			}while(hanoi->linhas < 1 || hanoi->linhas > 32);

			// Fazendo o calculo de colunas que sera usado pelo maior disco
			hanoi->cols = 2 * hanoi->linhas - 1;

			// Criando as 3 hastes da Torre de Hanoi
			CriarHastes(hanoi);

			// Criando a base das Torres: ---+------+------+---
			CriarBase(hanoi);

			// Cria ou limpa o arquivo que será usado durante o programa e logo após fecha
			hanoi->f = AbrirArquivo("w");
			fclose(hanoi->f);

			// Abre novamente o arquivo no modo append
			hanoi->f = AbrirArquivo("a");

			// Imprimindo a Torre no seu estagio inicial na tela e no arquivo
			ImprimirHastes(hanoi, 0);

			// Funcao recursiva que trata os passos da resolucao do problema
			TorresHanoi(hanoi, hanoi->linhas, 0, 1, 2, 1);

			printf("\n\n");

			Termino(hanoi);
	
			// Fechando o arquivo que estava aberto no modo append
			fclose(hanoi->f);

			// Liberando a memória para o SO
			LiberarMemoria(hanoi);
		break;

		case 2:
			printf("#COMO FUNCIONA?\n\n");

			printf( "    O problema das Torres de Hanoi é um problema clássico em Ciências da Computação, \n"
					"geralmente utilizado para ilustrar os conceitos de programação recursiva.\n"
					"    O problema foi criado pelo matemático francês Edouard Lucas, e estabelece, que dada\n"
					"três hastes (A, B, e C), existem n discos de vários tamanhos no haste A, colocados em\n"
					"ordem decrescente segundo o tamanho. Os discos deverão ser movimentados do haste\n"
					"A para o haste B respeitando as seguintes restrições:\n"
					"    • nunca colocar um disco maior sobre um disco menor,\n"
					"    • pode-se mover um único disco por vez,\n"
					"    • nunca colocar um disco em outro lugar que não numa das três hastes.\n\n");
		break;

		case 3:
			printf("#CRÉDITOS\n\n");

			printf("• Autor: Thales Augusto Ramos Vieira, Graduando em Ciência da Computação - UESC\n");
			printf("• GitHub: github.com/tarv7\n");
			printf("• Ultima data de modificação: 16 de Fevereiro de 2016\n");
			printf("• Versão do projeto: 4.0\n\n");
		break;

		case 4:
			system("clear");
			printf("Espero que tenha gostado! Volte sempre ;)");

			setbuf(stdin, NULL);
			getchar();

			printf("\n");
			exit(0);
		break;
	}

	// Esperando qualquer caracter para retornar ao menu
	printf("Pressione qualquer tecla para retornar ao menu");
	setbuf(stdin, NULL);
	getchar();
	
}

void MoverDisco(TEstrutura *hanoi, int orig, int dest){
	char *pont; /* Criando um ponteiro auxiliar para trocar os enderecos dos discos */ 

	/* Realizando a troca dos ponteiros dos discos e já alterando o tamanho das hastes */
	pont = hanoi->haste[dest].disco[hanoi->haste[dest].tam];
	hanoi->haste[dest].disco[hanoi->haste[dest].tam++] = hanoi->haste[orig].disco[--hanoi->haste[orig].tam];
	hanoi->haste[orig].disco[hanoi->haste[orig].tam] = pont;
}

void Termino(TEstrutura *hanoi){
	// Imprimindo uma mensagem final tanto na tela quanto no arquivo
	printf("A Torre de Hanoi foi resolvida com sucesso para %d discos!\n\n", hanoi->linhas);
	fprintf(hanoi->f, "A Torre de Hanoi foi resolvida com sucesso para %d discos!\n", hanoi->linhas);
}

int TorresHanoi(TEstrutura *hanoi, int quantDiscos, int orig, int dest, int aux, int passo){

	// Verificando o caso base para retorno
	if(quantDiscos == 1){
		// Fazendo a troca de enderecos
		MoverDisco(hanoi, orig, dest);

		// Imprimindo a Torre a cada passo
		ImprimirHastes(hanoi, passo);

		return ++passo; 
	}

	/* Chamadas recursiva */
	// Pegar o disco do topo da haste orig e colocar em uma haste auxiliar
	passo = TorresHanoi(hanoi, quantDiscos - 1, orig, aux, dest, passo);
	// Quando retornada a ultima funcao, sobrará uma haste livre, entao troca automaticamente
	passo = TorresHanoi(hanoi, 1, orig, dest, aux, passo);
	// Pega o(s) disco(s) da haste auxiliar e coloca na haste de destino
	passo = TorresHanoi(hanoi, quantDiscos - 1, aux, dest, orig, passo);
}
