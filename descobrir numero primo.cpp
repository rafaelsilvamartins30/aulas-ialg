#include <iostream>
#include <fstream>
using namespace std;

bool eprimo(int num){
	if (num < 2) {
		return false;
	}
	for (int i = 2; i < num; i++) {
		if (num % i == 0) {
			return false;
		}
	}
	return true;
}
int main () {
	int n;
	cin >> n;
	ofstream arquivosaida("saida");
	
	
	int numeroatual = 2;
	int contador = 0;
	
	while ( contador < n ){
		if (eprimo(numeroatual)){
			arquivosaida << numeroatual << endl;
			contador ++;
		} 
		numeroatual ++;
	}
	
	arquivosaida.close();
	return 0;
}
