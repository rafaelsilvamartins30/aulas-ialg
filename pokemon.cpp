#include <iostream>

using namespace std;

struct pokemon{
	string nomep;
	int ataque;
	int defesa;
};
struct treinador{
	string nomet;
	pokemon equipe [3];
};

void duelo(treinador atacante,treinador defensor) {
    pokemon melhorataque = atacante.equipe[0];
    for (int i = 1; i < 3; i++) {
        if (atacante.equipe[i].ataque > melhorataque.ataque) {
            melhorataque = atacante.equipe[i];
        }
    }

    pokemon melhordefesa = defensor.equipe[0];
    for (int i = 1; i < 3; i++) {
        if (defensor.equipe[i].defesa > melhordefesa.defesa) {
            melhordefesa = defensor.equipe[i];
        }
    }
    if (melhorataque.ataque > melhordefesa.defesa) {
		cout << atacante.nomet << endl;
        cout << melhorataque.nomep << endl;
    } else {
        cout << defensor.nomet << endl;
        cout << melhordefesa.nomep << endl;
    }
}

int main(){
	int n;
	cin >> n;
	treinador* vetort = new treinador[n];

	for(int i = 0; i < n; i++){
		cin >> vetort[i].nomet;
		for(int j = 0; j < 3; j++){
			cin >> vetort[i].equipe[j].nomep;
			cin >> vetort[i].equipe[j].ataque;
			cin >> vetort[i].equipe[j].defesa;
		}
	}
	int a, b;
	cin >> a >> b;
	
    duelo(vetort[a], vetort[b]);
	
	delete [] vetort;
	return 0;
}
