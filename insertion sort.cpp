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

void insertionsort (int* vetor, int tamanho) {
	
	for (int i = tamanho - 2; i >= 0; i--){
	
		int aux = vetor[i];
		
		int j = i + 1;
		
		while(j < tamanho and vetor[j] > aux){
		
		vetor[j - 1] = vetor[j];
		
		j++;
		
		}
		
		vetor[j -1 ] = aux;
		
		printvetor(vetor, tamanho);
		
	}

} 
int main(){
	int tamanho;
	
	cin >> tamanho;
	
	int* vetor = new int[tamanho];
	
	for (int i = 0; i < tamanho; i++){
	
		cin >> vetor[i];	
	
	}
		
	insertionsort(vetor, tamanho);
	
	delete [] vetor;	

	return 0;
}
