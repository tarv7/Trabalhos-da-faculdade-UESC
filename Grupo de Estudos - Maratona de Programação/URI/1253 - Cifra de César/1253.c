#include<stdio.h>
#include<string.h>

#define h 52

int main(){
	char str[h];
	int n, i, j, sobra, cifra;

	scanf("%d", &n);
	n*=2;
	
	for(j = 3; j < n+3; j++){
		setbuf(stdin, NULL);
		fgets(str, h, stdin);

		scanf("%d", &cifra);

		for(i = 0; i < (int)strlen(str)-1; i++){
			str[i] -= cifra;

			if(str[i] < 65)
				str[i] = 91-(65-str[i]);

			printf("%c", str[i]);
		}
		if(j % 2 == 0)
			printf("\n");
	}

	return 0;
}
