#include<stdio.h>
#include<stdlib.h>

typedef struct{
	int x, y;
}Tpontos;

int main(){
	Tpontos p;


	do{
		printf("Digite x: ");
		scanf("%d", &p.x);
		printf("Digite y: ");
		scanf("%d", &p.y);
		if(p.x == 0 && p.y == 0){
			printf("Ponto na origem\n");
			exit(-1);
		}else if(p.x == 0 || p.y == 0)
			printf("Ponto sobre os eixos\n");
		else
			if(p.x > 0)
				if(p.y > 0)
					printf("I quadrante\n");
				else
					printf("IV quadrante\n");
			else
				if(p.y > 0)
					printf("II quadrante\n");
				else
					printf("III quadrante\n");

	}while(p.x != 0 || p.y != 0);

	return 0;
}
