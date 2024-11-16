#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    string nome_arquivo;
    string conteudo_arquivo;
    
    cin >> nome_arquivo;
    cin >> conteudo_arquivo;
    
    ofstream arquivo_saida(nome_arquivo);
    arquivo_saida << conteudo_arquivo << endl;
    
    arquivo_saida.close();
    return 0;
}
