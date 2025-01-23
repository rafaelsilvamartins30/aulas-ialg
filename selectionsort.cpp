#include <iostream>

//rafael silva martins 202420228
//alexandre bortone 202420541
using namespace std;

void printvetor(int* vetor, int tamanho){
	for (int i = 0; i < tamanho; i++){
	
		cout << vetor[i] << " ";	
	
	}
	
	cout << endl;
	
}

void selectionsort (int* vetor, int tamanho) {
	
	  for (int i = 0; i < tamanho - 1; i++) {
        int maxIndex = i; 

        for (int j = i + 1; j < tamanho; j++) {
            if (vetor[j] > vetor[maxIndex]) {
                maxIndex = j;
            }
        }

        if (maxIndex != i) {
            int temp = vetor[i];
            vetor[i] = vetor[maxIndex];
            vetor[maxIndex] = temp;
        }

        printvetor(vetor, tamanho);
    }
} 

int main() {
	
  	int tamanho;
	
	cin >> tamanho;
	
	int* vetor = new int[tamanho];
	
	for (int i = 0; i < tamanho; i++){
	
		cin >> vetor[i];	
	
	}
		
	selectionsort(vetor, tamanho);
	
	delete [] vetor;	

    return 0;
}
