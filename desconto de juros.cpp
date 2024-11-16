#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;
int main(){
	ifstream entrada ("entrada");
    int dias;
	float valorLiquido;
	entrada >> dias;
	valorLiquido = (dias * 60) - (dias * 60 * 0.08) ;
	ofstream saida ("saida");
	saida << "R$ " <<  valorLiquido;
	saida.close();

    
    
  
    return 0;
}
