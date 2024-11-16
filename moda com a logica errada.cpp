#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream entrada("entrada.txt");
    ofstream saida("saida.txt");
	
	// Vetor para armazenar os números
    int numeros[10];
    // Vetor para contar a frequência de cada número (assumindo números de 0 a 9)
    int frequencias[10] = {0};

    // Lê os 10 números do arquivo de entrada e conta as frequências
    for (int i = 0; i < 10; i++) {
        entrada >> numeros[i];
        frequencias[numeros[i]]++;
    }
    entrada.close();

    // Encontra a maior frequência
    int max_frequencia = 0;
    for (int i = 0; i < 10; i++) {
        if (frequencias[i] > max_frequencia) {
            max_frequencia = frequencias[i];
        }
    }

    // Conta quantos números têm a maior frequência e escreve no arquivo de saída
    int moda_count = 0;
    for (int i = 0; i < 10; i++) {
        if (frequencias[i] == max_frequencia) {
            moda_count++;
        }
    }
    saida << moda_count << endl;

    // Escreve as modas (números com maior frequência) no arquivo de saída
    for (int i = 0; i < 10; i++) {
        if (frequencias[i] == max_frequencia) {
            saida << i << " ";
        }
    }
    saida << endl;

    saida.close();
    return 0;
}
