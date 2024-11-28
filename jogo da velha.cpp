#include <iostream>

using namespace std;

//funcao para verificar
char verificarVencedor(char tabuleiro[5][5]) {
	
	//verifica colunas
    for (int i = 0; i < 5; i++) {
        if (tabuleiro[i][0] != '-' &&
            tabuleiro[i][0] == tabuleiro[i][1] &&
            tabuleiro[i][1] == tabuleiro[i][2] &&
            tabuleiro[i][2] == tabuleiro[i][3] &&
            tabuleiro[i][3] == tabuleiro[i][4]) {
            return tabuleiro[i][0];
        }
    }
	
	//verifica linhas
    for (int j = 0; j < 5; j++) {
        if (tabuleiro[0][j] != '-' &&
            tabuleiro[0][j] == tabuleiro[1][j] &&
            tabuleiro[1][j] == tabuleiro[2][j] &&
            tabuleiro[2][j] == tabuleiro[3][j] &&
            tabuleiro[3][j] == tabuleiro[4][j]) {
            return tabuleiro[0][j];
        }
    }
	
	//verifica diagonal
    if (tabuleiro[0][0] != '-' &&
        tabuleiro[0][0] == tabuleiro[1][1] &&
        tabuleiro[1][1] == tabuleiro[2][2] &&
        tabuleiro[2][2] == tabuleiro[3][3] &&
        tabuleiro[3][3] == tabuleiro[4][4]) {
        return tabuleiro[0][0];
    }
	
	//verifica outra diagonal
    if (tabuleiro[0][4] != '-' &&
        tabuleiro[0][4] == tabuleiro[1][3] &&
        tabuleiro[1][3] == tabuleiro[2][2] &&
        tabuleiro[2][2] == tabuleiro[3][1] &&
        tabuleiro[3][1] == tabuleiro[4][0]) {
        return tabuleiro[0][4];
    }
	
	// caso nenhum resultado caractere pra velha
    return '-';
}

int main(){
	
	//declaracao da matriz
	char matriz [5][5];
	
	// lendo a matriz
	for(int i = 0; i < 5; i++){
			for(int j = 0; j < 5; j++){
				cin >> matriz[i][j];
			}
	}
	
	//chama funcao de verificacao e atribui a uma variavel
	char vencedor = verificarVencedor(matriz);
	
	// verifica se tem vencedor ou se deu velha pela variavel
	if (vencedor != '-') {
        cout << vencedor << endl;
    } else {
		cout << "VELHA" << endl;
	}

	return 0;
}
