#include <iostream>

//rafael silva martins 202420228
//alexandre bortone 202420541
using namespace std;

int main() {
    int V[20] = {1, 3, 6, 7, 8, 22, 25, 41};
    int tamanho = 8;
    int numero = 0;  

    while (numero != -1 and tamanho < 20) {
        cin >> numero;

        if (numero != -1) {
            int i = tamanho - 1;
            while (i >= 0 and V[i] > numero) {
                V[i + 1] = V[i];
                i--;
            }

            V[i + 1] = numero;

           
            tamanho++;
        }
    }

   
    for (int i = 0; i < tamanho; i++) {
        cout << V[i] << " ";
    }
    cout << endl;

    return 0;
}
