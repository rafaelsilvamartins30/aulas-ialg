#include <iostream>
#include <cmath>

using namespace std;

double phi(int num){
	double natual = 1;
	
	for(int i = 1; num > i; i++){
		natual = sqrt(1+ natual);	
		
	} 
	
	return natual;
}


int main(){
	int n;
	cin >> n;
	
	cout << phi(n) << endl;




	return 0;
}
