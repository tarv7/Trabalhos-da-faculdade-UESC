#include<stdio.h>
#include<stdlib.h>

int main(){
	char nome[48];
	int idade, totProf;
	
	printf("Digite idade, total de anos de profissao e nome, respectivamente: ");
	scanf("%d %d", &idade, &totProf);
	fflush(stdin);
	fgets(nome, 48, stdin);
	
	printf("%s", nome);	
	if((idade < 18) || (idade > 70))
		printf("Idade esta invalida!");
	else
		if(totProf <= 2)
			printf("Professor novato!\n");
		else if(totProf <= 30)
			printf("Professor experiente!\n");
		else
			printf("Professor ja pode se aposentar!\n");
	
	system("pause");
	return 0;
}
