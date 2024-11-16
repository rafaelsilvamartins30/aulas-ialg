#include <iostream>

using namespace std;

int main(){
	int tamanho;
	cin >> tamanho;
	
	int* vetor = new int[tamanho];
	int* moda = new int[tamanho];
	
	for(int i = 0; i < tamanho; i++){
		cin >> vetor[i];
	    moda[i] = 1;
	}
	
	int maior = vetor[0];
	int menor = vetor[0];
	
	for(int i = 1; i < tamanho; i++){
		if (vetor[i] < menor){
				menor = vetor[i];
		}
		if (vetor[i] > maior){
				maior = vetor[i];
		}
	}
	
	int soma = 0;
	
	for(int i = 0; i < tamanho; i++){
		soma += vetor[i];
	}
	
	float media = soma/float(tamanho);
	
	for(int i = 0; i < tamanho; i++){
		for(int j = i+1; j < tamanho; j++){
			if ( vetor[i] == vetor[j]){
				moda[i]++;
		    }
		}
	}
	
	int maiormoda = moda[0];
	
	for(int i = 1; i < tamanho; i++){
		if (moda[i] > maiormoda){
				maiormoda = moda[i];
		}
	}
	
	cout << maior << endl << menor << endl << media << endl;
	
	for(int i = 0; i < tamanho; i++){
		if (moda[i] == maiormoda){
				cout << vetor[i] << " ";
		}
	}
	
	delete [] moda;
	delete [] vetor;
	return 0;
}
