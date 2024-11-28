#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int tamanho;
	cin >> tamanho;
	
	int* vetor = new int[tamanho];
	int* aux = new int[tamanho];
	int* res = new int[tamanho];
	
	for(int i = 0; i < tamanho; i++){
		cin >> vetor[i];
		aux[i] = 1;
	}
	
	for(int i = 0; i < tamanho; i++){
		for(int j = i+1; j < tamanho; j++){
			if ( vetor[i] == vetor[j] and aux[j] != -1){
				aux[i]++;
				aux[j] = -1;
		    }
		}
	}

	for(int i = 0; i < tamanho; i++){
		if (aux[i] == 1){
				res[i] = vetor[i];
		} else if( aux[i] >= 2 and aux[i] % 2 == 0){
			res[i] = aux[i] * vetor[i];
		} else if(aux[i] != -1 and aux[i] / 2 != 0){
			res[i] = pow(vetor[i], aux[i]);
		} 
	}
	
	for(int i = 0; i < tamanho; i++){
		if(aux[i] != -1){
		cout << res[i] << " ";
		}
	}
	
	delete [] aux;
	delete [] vetor;
	delete [] res;
	return 0;
}
