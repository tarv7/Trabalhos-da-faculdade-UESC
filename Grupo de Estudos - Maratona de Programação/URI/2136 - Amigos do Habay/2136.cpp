#include<iostream>
#include<set>

using namespace std;

int main(){
    set<string> yes, no;
    string nome, resp, amigo;

    cin >> nome;

    while(nome != "FIM"){
        cin >> resp;

        if(resp == "YES"){
            yes.insert(nome);
            if(nome.size() > amigo.size())
                amigo = nome;
        }else
            no.insert(nome);

        cin >> nome;
    }

    set<string>::iterator it;
    for(it = yes.begin(); it != yes.end(); it++)
        cout << *it << endl;

    for(it = no.begin(); it != no.end(); it++)
        cout << *it << endl;


    cout << endl << "Amigo do Habay:" << endl << amigo << endl;

    return 0;
}
