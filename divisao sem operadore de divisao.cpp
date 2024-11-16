#include <iostream>
#include <cmath>
using namespace std;
//Rafael Silva Martins e Alexandre Bortone
int main(){
	int divd, divs, quo;
	cin >> divd >> divs;
	
	while (divd >= divs){
		divd = divd - divs;
		quo = quo + 1;
	} 
    cout << quo << endl;

	return 0;
}
