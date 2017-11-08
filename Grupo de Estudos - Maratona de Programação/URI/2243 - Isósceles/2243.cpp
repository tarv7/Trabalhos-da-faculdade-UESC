#include<iostream>

using namespace std;

int main(){
	int tam, *vet;
	int maior = 1;
	
	cin >> tam;
	
	vet = new int[tam];
	
	for(int i = 0; i < tam; i++)
		cin >> vet[i];
		
	for(int i = 0; i < tam; i++){
		vet[i] = (vet[i] > (i+1)) ? (i+1) : vet[i];
		vet[i] = (vet[i] > (tam-i)) ? (tam-i) : vet[i];
	}
	
	for(int i = 0; i < tam-maior-1; i++){
		if(vet[i+1] - vet[i] > 1)
			vet[i+1] = vet[i] + 1;
		if(vet[i] - vet[i+1] > 1)
			vet[i] = vet[i+1] + 1;
	}
	
	for(int i = tam-1; i >= maior; i--){
		if(vet[i-1] - vet[i] > 1)
			vet[i-1] = vet[i] + 1;
		if(vet[i] - vet[i-1] > 1)
			vet[i] = vet[i-1] + 1;
	}
	
	for(int i = 0; i < tam; i++){
		maior = (vet[i] > maior) ? vet[i] : maior;
	}
		cout << maior << endl;
	
	delete[] vet;
	
	return 0;
}
