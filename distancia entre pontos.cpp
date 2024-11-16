#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main(){
	float x1, y1, x2, y2, distancia;
	
	ifstream arquivo_entrada("entrada.txt");
	
	arquivo_entrada >> x1 >> y1 >> x2 >> y2;
	distancia = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
	
	cout << distancia << endl; 
    return 0;
}
