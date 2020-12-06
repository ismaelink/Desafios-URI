#include <iostream>
#include <iomanip>

using namespace std;


struct Numeros {

	int x, y;
};

void inserir(Numeros *numeros, int n);

void divisao(Numeros *numeros, int n);

int main() {

	int n;
	cin >> n;

	Numeros *numeros = new Numeros[n];
	
	inserir(numeros, n);

	divisao(numeros, n);

	return 0;
}

void inserir(Numeros *numeros, int n) {

	Numeros aux;

	for(int i = 0; i < n; i++) {
	
		cin >> aux.x >> aux.y;
		numeros[i] = aux;
	}
}

void divisao(Numeros *numeros, int n) {

	float div = 0.0;

	for(int i = 0; i < n; i++) {
	
		if(numeros[i].y != 0) {

			div = (float)numeros[i].x / numeros[i].y;
			cout << fixed << setprecision(1) << div << endl;
		}
		else
			cout << "divisao impossivel" << endl;
	}
}
