#include<stdio.h>
#include<stdlib.h>

int main(){
	int grao = 1, i;
	
	for(i = 1; i <= 4; i++)
		grao *= 2;
		
	printf("%d\n", --grao);
	
	system("pause");
	return 0;
}
