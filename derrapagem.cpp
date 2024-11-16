#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float derrapagem;
    cin >> derrapagem;
    
    float velocidade = 14.6 * sqrt(derrapagem);
    cout << velocidade << endl;
    
    
    return 0;
}
