#include <iostream>
using namespace std;

int main() {
    float num1, num2, num3, num4;
    float maior, segundomaior;
    cin >> num1 >> num2 >> num3 >> num4;
    
    if (num1 > num2) {
        maior = num1;
        segundomaior = num2;
    } else {
        maior = num2;
        segundomaior = num1;
    }

    if (num3 > maior) {
        segundomaior = maior;
        maior = num3;
    } else if (num3 > segundomaior) {
        segundomaior = num3;
    }

    if (num4 > maior) {
        segundomaior = maior;
        maior = num4;
    } else if (num4 > segundomaior) {
        segundomaior = num4;
    }

    cout << maior << endl;
    cout << segundomaior << endl;

    return 0;
}
