#include <iostream>
#include <string>
// usando insertion sort com a autorização do joaquim
using namespace std;

struct mercado {
	int id;
	char nome[79];
	float preco;
};

void exibirprodutos(mercado* vetor, int tamanho, float minimo, float maximo){
	
	for(int i = 0; i < tamanho; i++){
		if(vetor[i].preco >= minimo and vetor[i].preco <= maximo){
			cout << vetor[i].id << " \"" << vetor[i].nome << "\" " << vetor[i].preco << endl;
			
		}
	}
	
	
}

void insertionsort (mercado* vetor, int tamanho) {
	
	for (int i = 1; i < tamanho; i++){
	
		mercado atual = vetor[i];
		
		int j = i - 1;
								
		while(j >= 0 and vetor[j].preco > atual.preco){
		
			vetor[j + 1] = vetor[j];
		
			j--;
		
		}
		
		vetor[ j + 1 ] = atual;
		
	}

} 
int main(){
	int tamanho;
	
	cin >> tamanho;
	
	mercado* vetor = new mercado[tamanho];
	
	for (int i = 0; i < tamanho; i++){
	
		cin >> vetor[i].id;	
		
		cin.ignore();
	
		cin.getline(vetor[i].nome, 79);
		
		cin >> vetor[i].preco;
		
	}
				
	insertionsort(vetor, tamanho);
	
	float minimo, maximo;
	cin >> minimo >> maximo;
	cout << endl;
	 
	exibirprodutos(vetor, tamanho, minimo, maximo);
	
	delete [] vetor;	

	return 0;
}
