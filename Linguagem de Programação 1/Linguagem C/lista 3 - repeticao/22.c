#include<stdio.h>
#include<stdlib.h>

int main(){
	int i;
	float s=0;
	
	for(i = 1; i <= 50; i++)
		if(i % 2 == 1)
			s += ((float)i / 1);
		else
			s += ((float)i / 3);
	
	printf("%.2f\n", s);
	
	system("pause");
	return 0;
}
