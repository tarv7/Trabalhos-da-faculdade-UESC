// Importando bibliotecas nescessarias
#include<stdio.h>
#include<stdlib.h>

// Struct de consumo
typedef struct cons{
	int x, // Pessoas
		y; // Metros cubicos de agua
	struct cons *prox; // Proximo da lista
}tCons;

// Struct da cidade
typedef struct{
	int imoveis, // Quantidade total de imoveis da cidade
		moradores, // Quantidade total de moradores da cidade
		consTot; // Consumo total da cidade
	tCons *lista; // Inicio da lista de consumos
	float consMedio; // Consumo medio da cidade
}tCidade;

// Cria cada cidade
tCidade * CriarCidade();

// Cria os nos de consumo de cada cidade
tCons * CriarCons(tCidade * );

// Imprime informacoes na tela
void Imprimir(tCidade * );

// Exclui as cidades e seus consumos
void Excluir(tCidade * );

//Insere ordenadamente os nos de consumo de cada cidade
void Inserir(tCidade * , tCons * );

int main(){
	tCidade *cidade;	// Cidade atual
	tCons *atual;		// Nó de consumo atual
	int i, j = 1;		// Variaveis de laço e contagem

	// Recebendo a primeira cidade
	cidade = CriarCidade();

	// Recendo o primeiro consumo atual
	atual = cidade->lista;

	// Enquanto cidade tiver imovel
	while(cidade->imoveis != 0){
		printf("Cidade# %d:\n", j++);

		// Repeticao de acordo com quantidade de imoveis
		for(i = 0; i < cidade->imoveis; i++){
			// Recebendo um novo consumo atual
			atual = CriarCons(cidade);

			// Inserindo ordenadamente o consumo
			Inserir(cidade, atual);

			// "Limpando" a variavel de consumo atual
			atual = atual->prox;

		}

		// Calculo do consumo medio
		cidade->consMedio = cidade->consTot / (float) cidade->moradores;

		cidade->consMedio = (int) (cidade->consMedio * 100) / (float) 100;

		// Imprimindo informacoes na tela e excluindo cidade atual
		Imprimir(cidade);
		Excluir(cidade);

		// Recebendo uma nova cidade atual
		cidade = CriarCidade();

		// Verificando se existe imoveis nessa cidade
		if(cidade->imoveis != 0){
			printf("\n");
			atual = cidade->lista;
		}

	}
}

tCons * CriarCons(tCidade *city){
	tCons 	*cons,	// Criando um novo nó de consumo 
			aux;	// Auxilia nas verificacoes

	// Alocando consumo e verificando
	cons =(tCons *) malloc(sizeof(tCons));
	if(cons == NULL)
		exit(0);

	// Recebendo quantidade de pessoas, seus gastos
	scanf("%d %d", &aux.x, &aux.y);

	// Somando quandidades de cada cidade
	city->moradores += aux.x;
	city->consTot += aux.y;

	// Salvando na struct a quantidade de pessoas e seus gastos
	cons->x = aux.x;
	cons->y = aux.y / aux.x;
	cons->prox = NULL;

	return cons;
}

tCidade * CriarCidade(){
	int quant;		// Quantidade de imoveis
	tCidade *cidade;// Criando uma nova cidade

	// Recebendo quantidade de imoveis
	scanf("%d", &quant);

	// Alocando a Cidade e verificando
	cidade = (tCidade *) malloc(sizeof(tCidade));
	if(!cidade)
		exit(0);

	// Enchendo a cidade com seus valores
	cidade->imoveis = quant;
	cidade->moradores = 0;
	cidade->consTot = 0;
	cidade->lista = NULL;

	return cidade;
}

void Imprimir(tCidade *city){
	tCons *no = city->lista; // Recebe o primeiro nó da lista de consumos

	// Enquanto chegar nao chegar no fim, faça...
	while(no != NULL){
		printf("%d-%d", no->x, no->y);

		no = no->prox;
		if(no != NULL)
			printf(" ");
	}

	printf("\nConsumo medio: %.2f m3.\n", city->consMedio);
}

void Excluir(tCidade *city){
	tCons 	*ant, 					// Anterior em relacao a variavel atual
			*atual = city->lista;	// Variavel atual recebe o primeiro elemento da lista

	// Laço para dar free em cada consumo
	while(atual != NULL){
		ant = atual;
		atual = atual->prox;
		free(ant);
	}
}

void Inserir(tCidade *city, tCons *no){
	tCons 	*ant,	// Nó anterior em relacao a variavel atual 
			*atual; // Variavel de nó atual de consumo

	// Veirifica se a lista ta vazia
	if(city->lista == NULL){
		city->lista = no;
		return;
	}

	// Variavel atual recebe o primeiro nó da lista
	atual = city->lista;

	// Enquanto exista nó e esse nó seja menor que o nó a ser inserido, faça...
	while((atual != NULL) && (atual->y <= no->y)){
		// Se tais nós forem iguais não precisa inserir, apenas realiza a soma
		if(atual->y == no->y){
			atual->x += no->x;
			free(no);
			return;
		}
		ant = atual;
		atual = atual->prox;
	}

	// Caso precise ser inserir o nó apartir do segundo elemento da lista
	if(atual != city->lista){
		ant->prox = no;
		no->prox = atual;
	}else{ // Caso tenha que inserir no começo da lista
		no->prox = city->lista;
		city->lista = no;
	}
}
