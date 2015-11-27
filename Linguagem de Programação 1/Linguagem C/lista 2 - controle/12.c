#include<stdio.h>
#include<stdlib.h>

int main(){
	int velMax, velMot, multa;
	
	printf("Digite a velocidade Maxima permitida e a velocidade que o motorista se encontra:[Km] ");
	scanf("%d %d", &velMax, &velMot);
	
	if(velMot <= velMax){
		pritnf("Motorista dentro da lei!\n");
	}else{
		if(velMot <= velMax + 10)
			multa = 50;
		else 
			if(velMot <= velMax + 30)
				multa = 100;
			else
				multa = 200;
	}
	system("pause");
	return 0;
}
