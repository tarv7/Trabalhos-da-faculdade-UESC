#include<stdio.h>
#include<stdlib.h>

int main(){
	int i;
	float s;
	
	for(i = 2; i <= 15+2; i++){
		if(i % 2 != 0)
			s -= ((float)i / 4);
		else
			s += ((float)i / 5);
		printf("%.4f\n", s);
	}
	
	system("pause");
	return 0;
}
