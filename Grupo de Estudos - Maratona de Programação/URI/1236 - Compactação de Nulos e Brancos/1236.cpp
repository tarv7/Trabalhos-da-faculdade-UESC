#include <iostream>
#include <cstdio>

using namespace std;

int main (){
	int i, k, n, qtd;
	string teste;
	cin >> n;
	cin.ignore();

	for (int j=0; j<n; j++){
        getline(cin, teste);

		int tam = teste.size();
		for (i = 0; i < tam;){
            if (teste[i] != '0' && teste[i] != ' '){
                printf ("%c", teste[i]);
                qtd = 0;
                i++;
            } else if (teste[i] == '0'){
                qtd=0;
                for (k=i; teste[k] == '0'; k++){
                    qtd++;
                    if (qtd == 255){
                        printf("#%c", 255);
                        qtd=0;
                        i+=255;
                    }
                }
                if(qtd==1)
                    printf ("0");
                else if(qtd==2)
                    printf ("00");
                else
                    printf("#%c", qtd);
                i+=qtd;
            } else if (teste[i] == ' '){
                qtd=0;
                for (k=i; teste[k] == ' '; k++){
                    qtd++;
                    if (qtd == 255){
                        printf("$%c", 255);
                        qtd=0;
                        i+=255;
                    }
                }
                if(qtd==1)
                    printf (" ");
                else if(qtd==2)
                    printf ("  ");
                else
                    printf("$%c", qtd);
                i+=qtd;
            }

        }

        printf("\n");
    }

	return 0;
}
