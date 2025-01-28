#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Função para implementar o algoritmo Shell Sort com gaps 5, 3 e 1
void shellSort(vector<char>& vetor) {
    int n = vetor.size();
    
    // Gaps predefinidos: 5, 3 e 1 (ordem decrescente)
    vector<int> gaps = {5, 3, 1};
    
    // Exibe o vetor inicial
    cout << "Vetor Inicial: ";
    for (char c : vetor) {
        cout << c << " ";
    }
    cout << endl;
    
    // Realiza a ordenação para cada gap (em ordem decrescente)
    for (int intervalo : gaps) {
        cout << "Gap: " << intervalo << endl;
        
        for (int i = intervalo; i < n; i++) {
            char chave = vetor[i];
            int j = i;
            
            // Exibe a posição de i e o valor do gap
            cout << "  i: " << i << ", Gap: " << intervalo << ", pos gap: " << j << endl;
            
            // Alteração para ordenação decrescente: comparando se o valor é menor
            while (j >= intervalo && vetor[j - intervalo] < chave) {  // < para decrescente
                vetor[j] = vetor[j - intervalo];
                j -= intervalo;
            }
            vetor[j] = chave;
        }
        
        // Exibe o vetor a cada iteração de intervalo
        cout << "Vetor com intervalo " << intervalo << ": ";
        for (char c : vetor) {
            cout << c << " ";
        }
        cout << endl;
    }
}

int main() {
    // Vetor com os dados fornecidos
    vector<char> vetor1 = {'A', 'B', 'C', 'F', 'G', 'I', 'D', 'E', 'S', 'M', 'H', 'T', 'J'};
    
    // Chama a função shellSort
    shellSort(vetor1);
    
    // Exibe o vetor final ordenado
    cout << "Vetor Final Ordenado (decrescente): ";
    for (char c : vetor1) {
        cout << c << " ";
    }
    cout << endl;
    
    return 0;
}
