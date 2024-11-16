#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    string nome_arquivo;
    string conteudo_arquivo;
    
    cin >> nome_arquivo;
    ifstream arquivo_entrada(nome_arquivo);
    arquivo_entrada >> conteudo_arquivo;
    
    cout<< conteudo_arquivo <<endl;
    
    arquivo_entrada.close();
    return 0;
}
