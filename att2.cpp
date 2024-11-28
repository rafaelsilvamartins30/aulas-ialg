#include <iostream>

using namespace std;

int main(){
	int tamanho;
	cin >> tamanho;
	
	int* vetor = new int[tamanho];
	int* vetor2 = new int[tamanho];
	
	for(int i = 0; i < tamanho; i++){
		cin >> vetor[i];
	}
	
	for(int i = 0; i < tamanho; i++){
		cin >> vetor2[i];
	}
	
	int soma = 0;
	
	for(int i = 0; i < tamanho; i++){
	    soma += vetor[i]* vetor2[i];
	}
	
	cout << soma << endl;
	
	delete [] vetor;
	delete [] vetor2;
    return 0;
}
