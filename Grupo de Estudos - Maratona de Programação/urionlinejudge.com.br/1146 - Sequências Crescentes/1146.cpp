#include<iostream>

using namespace std;

int main() {
    int i, j;
    
    cin >> i;
    
    while(i){
        if(i > 1){
            for(j = 1; j < i; j++)
                cout << j << " ";
            cout << i << endl;
        }else if(i < 1){
            for(j = 1; j > i; j--)
                cout << j << " ";
            cout << i << endl;
        }else
            cout << 1 << endl;
        
        cin >> i;
    }
 
    return 0;
}
