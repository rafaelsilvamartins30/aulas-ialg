#include <iostream>
using namespace std;
//Rafael Silva Martins e Alexandre Bortone
int main() {
    int numero, totalNumeros = 0;
    int soma = 0, positivos = 0, negativos = 0;

    
    do {
        cin >> numero;

        if (numero != 0) {
            soma += numero;
            totalNumeros++;

            if (numero > 0) {
                positivos++;
            } else if (numero < 0) {
                negativos++;
            }
        }
    } while (numero != 0);

    if (totalNumeros > 0) {
       
        float media = static_cast<float>(soma) / totalNumeros;

        
        float percentualPositivos = (static_cast<float>(positivos) / totalNumeros);
        float percentualNegativos = (static_cast<float>(negativos) / totalNumeros);

        
        cout << media << endl;
        cout << positivos << endl;
        cout << negativos << endl;
        cout << percentualPositivos << endl;
        cout << percentualNegativos << endl;
    
    }

    return 0;
}
