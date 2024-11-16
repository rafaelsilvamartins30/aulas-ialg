#include <iostream>

using namespace std;
//Rafael Silva Martins e Alexandre Bortone

int main(){

   float R, N, TA =1; 
   cin >> R >> N;
   
   while ( N > 0) {
	   cout << TA << endl;
	   TA = TA * R;
	   N = N - 1;
	}
	    
   
   
    

	

	return 0;
}
