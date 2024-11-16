#include <iostream>
#include <cmath>
using namespace std;

int main(){
	float num;
	
	cin >> num;
	float quadrado = num * num;
	cout << quadrado << endl;
	cout << num*num <<endl;
	cout << pow(num, 2) << endl;
	
	cout << num*num*num << endl;
	cout << pow(num, 3) << endl;
	
	cout << sqrt(num) << endl;
	cout << pow(num, 0.5)<< endl;
    
    return 0;
}
