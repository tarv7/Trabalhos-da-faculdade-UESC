#include<stdio.h>
#include<string.h>

#define h 53

int main(){
	char str[h];
	int i, n, aux;

	while(fgets(str, h, stdin) != NULL){
		for(i = 0; i < strlen(str)-1; i++){
			if(str[i] > 64 && str[i] < 91){
				str[i] += 13;
				if(str[i] > 90)
					str[i] = 65 + (str[i] - 91);
			}else if(str[i] > 96 && str[i] < 123){
				aux = str[i] + 13;
				if(aux > 122)
					str[i] = 97 + (aux - 123);
				else
					str[i] = aux;
			}
		}

		printf("%s", str);
	}

	return 0;
}
