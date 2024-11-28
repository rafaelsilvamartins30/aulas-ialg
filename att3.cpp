#include <iostream>
#include <fstream>

using namespace std;

int main(){
	int tamanho;
	ifstream arquivo ("entrada.txt")
	
	arquivo >> tamanho;
		
	int* vetor = new int[tamanho];
	
	int aux;
	
	for(int i = 0; i > tamanho; i++){
		arquivo >> aux;
		bool achou = false; 
		bool naoachou = true;
		int j = i-1;
		while (j > 0 and not(achou)){
			if(aux < vetor[j]) {
				vetor[j+1] = vetor[j];
				j--;
			} else {
				achou = true;
	}
	vetor[j]=


	return 0;
}
