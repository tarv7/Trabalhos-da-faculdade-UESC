#include<stdio.h>
#include<stdlib.h>

int main(){
	char nome[48], sexo;
	float n1, n2, media;
	
	printf("Digite nome, sexo e 2 notas: ");
	fflush(stdin);
	fgets(nome, 48, stdin);
	fflush(stdin);
	scanf("%c %f %f", &sexo, &n1, &n2);
	
	if(sexo != 'f' && sexo != 'F' && sexo != 'm' && sexo != 'M'){
		printf("Sexo invalido!\n");
	}else{
		media = (n1 + n2) / 2;
		if(media < 5)
			printf("Aluno reprovado!\n");
		else if(media <= 8)
			printf("Aluno regular!\n");
		else
			printf("Aluno com excelente desempenho!\n");
	}
	system("pause");
	return 0;
}
