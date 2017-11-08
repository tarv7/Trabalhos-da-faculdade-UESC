#include<iostream>
#include<set>

using namespace std;

int main(){
	int n;
	long long a;
	set<long long> numeros;
	set<long long>::iterator it;

	while(cin >> n){
		for(int i = 0; i < n; i++){
			cin >> a;

			it = numeros.find(a);
            if(it != numeros.end())
                numeros.erase(it);
            else
                numeros.insert(a);
		}

        if(n){
            it = numeros.begin();
            cout << *it << " ";
            it++;
            cout << *it << endl;

            numeros.clear();
        }
	}

	return 0;
}
