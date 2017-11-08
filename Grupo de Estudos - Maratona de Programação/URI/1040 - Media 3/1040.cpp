#include<bits/stdc++.h>

using namespace std;

int main(){
	float a, b, c, d, e, media;

	cin >> a >> b >> c >> d;

	media = ((a * 2) + (b * 3) + (c * 4) + d) / 10.0;
	cout.precision(1);
	cout << fixed << "Media: " << media << endl;
	if(media >= 7){
		cout << "Aluno aprovado." << endl;
	}else if(media >= 5){
		cout << "Aluno em exame." << endl;
		cin >> e;
		cout << fixed << "Nota do exame: " << e << endl;
		media = (media + e) / 2.0;
		if(media >= 5)
			cout << "Aluno aprovado." << endl;
		else
			cout << "Aluno reprovado." << endl;
		cout << fixed << "Media final: " << media << endl;
	}else{
		cout << "Aluno reprovado." << endl;
	}

	return 0;
}
