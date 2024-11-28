#include <iostream>
#include <fstream>

using namespace std;

int main(){

	float matriza [3][4];
	float matrizb [3][4];
	float matrizc [3][4];
	ifstream entrada("entrada.txt");
	
	if(entrada) {
		for(int i = 0; i < 3; i++){
			for(int j = 0; j < 4; j++){
				entrada >> matriza[i][j];
			}
		}
		for(int i = 0; i < 3; i++){
			for(int j = 0; j < 4; j++){
				entrada >> matrizb[i][j];
			}
		}
		for(int i = 0; i < 3; i++){
			for(int j = 0; j < 4; j++){
				matrizc[i][j] = matriza [i][j] + matrizb[i][j];
			}
		}
		for(int i = 0; i < 3; i++){
			for(int j = 0; j < 4; j++){
				cout << matrizc[i][j] << "\t";
			}
			cout << endl;
		}
		
	} else {
		cout << "arquivo n pode ser aberto" << endl;
	}

	return 0;
}
