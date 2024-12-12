#include <iostream>
#include <string>

using namespace std;

bool pertence(string* lista1, int n1, const string& item){
	for(int i = 0; i < n1; i++){
		if (lista1[i] == item) {
				return true;
		}
	}
	return false;
}

void imprime(string* intersecao, int tamanhoIntersecao){
	
	for (int i = 0; i < tamanhoIntersecao; ++i) {
        cout << intersecao[i] << endl;
    }
    
    cout << tamanhoIntersecao << endl;
}

int main(){
	int n1, n2;
	cin >> n1;
			
	string *lista1 = new string[n1];

	for(int i = 0; i < n1; i++){
		cin >> lista1[i];
	}
		
	cin >> n2;
	int tamanhoIntersecao = 0;	
	string* intersecao;
    
	for(int i = 0; i < n2; i++){
		string item;
		cin >> item;
		
	    if(pertence(lista1, n1, item)){
			
			if ( tamanhoIntersecao > 0 ) {
				string* novoIntersecao = new string[tamanhoIntersecao + 1];
                
                
				for (int j = 0; j < tamanhoIntersecao; j++) {
					novoIntersecao[j] = intersecao[j];
				}

				novoIntersecao[tamanhoIntersecao] = item;
				delete[] intersecao;
				intersecao = novoIntersecao;
				tamanhoIntersecao++;
			} else {
				intersecao = new string [1];
				intersecao [0] = item;
				tamanhoIntersecao++;
			}
		}
	}
	
	imprime(intersecao, tamanhoIntersecao);
		
	
	delete[] lista1;
    delete[] intersecao;
		
	return 0;
}
