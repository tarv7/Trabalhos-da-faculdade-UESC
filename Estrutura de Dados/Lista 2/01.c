#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define h 5
#define size 20

typedef struct{
	char name[size];
	int id;
}tPeople;

void Eliminating(tPeople * , int , int * , int * );
void Inserting(tPeople * );
void Printing(tPeople * , int );

int main(){
	tPeople people[h];
	int n, head = 0, quantity = h;

	Inserting(people);

	printf("\n");

	Printing(people, quantity);
	
	do{
		do{
			printf("\nType a number: ");
			scanf("%d", &n);
		}while(n < 1);

		Eliminating(people, n - 1, &head, &quantity);

		Printing(people, quantity);
	}while(quantity > 1);

	printf("\nThe winner was: %d - %s\n", people[0].id, people[0].name);

	return 0;
}

void Eliminating(tPeople *people, int n, int *head, int *quantity){
	int deleted, i;

	deleted = (*head + n) % *quantity;

	for(i = deleted; i < *quantity; i++){
		people[i] = people[i + 1];

		people[i].id -= 1;
	}

	*head = deleted;
	*quantity -= 1;
}

void Inserting(tPeople *people){
	int i;

	for(i = 0; i < h; i++){
		printf("type %dº name: ", i + 1);
		setbuf(stdin, NULL);
		fgets(people->name, size, stdin);
		people->name[strlen(people->name) - 1] = '\0';

		people->id = i + 1;

		people++;
	}
}

void Printing(tPeople *people, int quantity){
	int i;

	for(i = 0; i < quantity; i++){
		printf("%d - %s\n", people->id, people->name);

		people++;
	}
}
