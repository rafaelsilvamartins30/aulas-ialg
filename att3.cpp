ordena vetor com codigo

#include <iostream>
#include <fstream>

using namespace std;

int main() {
    int tamanho;
    ifstream arquivo("entrada.txt");

    arquivo >> tamanho;

    int* vetor = new int[tamanho];

    arquivo >> vetor[0]; // Lê o primeiro elemento

    for (int i = 1; i < tamanho; i++) {
        int aux;
        arquivo >> aux;
        int j = i - 1;

        while (j >= 0 && aux < vetor[j]) {
            vetor[j + 1] = vetor[j];
            j--;
        }
        vetor[j + 1] = aux; // Insere o elemento na posição correta
    }

    arquivo.close(); // Fecha o arquivo

    // Imprimir o vetor ordenado (opcional)
    for (int i = 0; i < tamanho; i++) {
        cout << vetor[i] << " ";
    }

    delete[] vetor;
    return 0;
}

