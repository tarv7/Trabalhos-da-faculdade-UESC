#include<stdio.h>

int main(){
	char key, choice;
	int num, count;
	long int date;
	float yield;
	double price;

	// Mostrando os enderecos de cada variavel
	printf("***** Endereco das variaveis *****\n");
	printf("key: %p\nchoice: %p\nnum: %p\n"
		"count: %p\ndate: %p\nyield: %p\nprice: %p\n",
		&key, &choice, &num, &count, &date, &yield, &price);

	// mostrando o tamanho de bytes usados por cada variavel
	printf("\n***** Sizeof *****\n");
	printf("key: %ld\nchoice: %ld\nnum: %ld\n"
                "count: %ld\ndate: %ld\nyield: %ld\nprice: %ld\n",
		sizeof(key), sizeof(choice), sizeof(num), sizeof(count),
		sizeof(date), sizeof(yield), sizeof(price));

	return 0;
}
