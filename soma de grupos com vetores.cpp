#include <iostream>

using namespace std;

bool pertence(int num[5], int num2) {
	for(int i = 0; i < 5; i++){
		if (num[i] == num2){
			return true;		
		} 
	}
	return false;
}
int main(){
	int cont = 5, grupoa[5], grupob[5], grupoc[cont];
	for(int i = 0; i < 5; i++){
		cin >> grupoa[i];
		}
	for(int p = 0; p < 5; p++){
		cin >> grupob[p];
		}
	for(int q = 0; q < cont; q++){
		grupoc[q] = grupoa[q];
		}
	for(int t = 0; t < 5; t++){
		if (not pertence(grupoa, grupob[t])){
			grupoc[cont] = grupob[t];
			cont ++;
			}	
		}
	for(int u = 0; u < cont; u++){
		cout << grupoc[u] << " ";
		}
	return 0;
}
