#include <iostream>

using namespace std;


int main() {

	int hora_inicio, min_inicio, hora_fim, min_fim;
	cin >> hora_inicio;
	cin >> min_inicio;
	cin >> hora_fim;
	cin >> min_fim;

	if(hora_fim <= hora_inicio && !(hora_fim == hora_inicio && min_inicio < min_fim)) hora_fim += 24;

	if(min_fim < min_inicio) {

		hora_fim--;
		min_fim += 60;
	}
	
	cout << "O JOGO DUROU " << hora_fim - hora_inicio << " HORA(S) E " << min_fim - min_inicio << " MINUTO(S)" << endl;
	
	return 0;
}
