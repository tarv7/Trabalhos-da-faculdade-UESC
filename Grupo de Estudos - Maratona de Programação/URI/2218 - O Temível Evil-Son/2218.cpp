#include <iostream>
 
using namespace std;
 
int main() {
    int n, v;
    
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> v;
        
        v *= (v + 1);
        v /= 2;
        v++;
        
        cout << v << endl;
    }
 
    return 0;
}
