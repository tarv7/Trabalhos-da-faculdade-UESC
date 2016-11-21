#include <iostream>

using namespace std;

int main(){
    int dias, custo, receita[1000], acc, maximo;
    
    while(cin >> dias){
        cin >> custo;
        maximo = 0;
        acc = 0;
        for (int i = 0; i < dias; i++){
            cin >> receita[i];
            receita[i] -= custo;
        }
        
        for (int i = 0; i < dias; i++){
            acc += receita[i];
            
            if(acc > maximo)
				maximo = acc;
            if(acc <= 0)
				acc= 0;
        }
        cout << maximo << endl;
    }
}
