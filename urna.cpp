#include <iostream>
using namespace std;
// Rafael Silva Martins e Fernando Chaves
int main(){
    int numero, votos1, votos2, votos3, votos4, nulo, branco, totalvotos, votosv;
    votos1 = 0, votos2 = 0, votos3 = 0, votos4 = 0, nulo = 0, branco = 0, totalvotos = 0;

    
    do {
        cin >> numero;

        switch (numero) {
			case (1):
            votos1 ++;
            totalvotos++;
            break;
            case (2):
            votos2 ++;
            totalvotos++;
            break;
            case (3):
            votos3 ++;
            totalvotos++;
            break;
            case (4):
            votos4 ++;
            totalvotos++;
            break;
            case (5):
            nulo ++;
            totalvotos++;
            break;
            case (6):
            branco ++;
            totalvotos++;
            break;
            default:
            cout << " " << endl;
            }
        }while (numero != 0);
        
        votosv = totalvotos - branco - nulo ;
        
        float  pct1 = (static_cast<float>(votos1) / totalvotos);
        float  pct2 = (static_cast<float>(votos2) / totalvotos);
        float  pct3 = (static_cast<float>(votos3) / totalvotos);
        float  pct4 = (static_cast<float>(votos4) / totalvotos);
        float  pctn = (static_cast<float>(nulo) / totalvotos);
        float  pctb = (static_cast<float>(branco) / totalvotos);
        float  pctt = (static_cast<float>(votosv) / totalvotos);
        
        cout << "1: " << votos1 << " " << pct1 << endl;
        cout << "2: "  << votos2 << " "   << pct2 << endl;   
        cout << "3: "  << votos3 << " "   << pct3 << endl;   
        cout << "4: "  << votos4 << " "   << pct4 << endl;  
        cout << "5: "  << nulo  << " "  << pctn << endl;   
        cout << "6: "  << branco   << " " << pctb << endl;
        cout << "7: "  << votosv   << " " << pctt << endl;             
   return 0;

}
