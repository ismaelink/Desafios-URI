#include <iostream>
#include <iomanip>
#include <list>

using namespace std;


void resultado(list<float> l);

int main() {

	int continuar = 1;
	int valido;

	float nota = 0.0;
	
	list<float> notas;
	

	while(continuar != 2) {
	
		if(continuar == 1) {
			
			valido = 2;

			while(valido != 0) {
			
				cin >> nota;
				notas.push_back(nota);

				if(0 <= nota && nota <= 10) valido--;
			}

			resultado(notas);
			
			notas.clear();
		}
	
		cout << "novo calculo (1-sim 2-nao)" << endl;
		cin >> continuar;
	}

	return 0;
}

void resultado(list<float> l) {

	float soma = 0.0;

	for(float nota: l) {
	
		if(0 <= nota && nota <= 10) 
			soma += nota;
		else
			cout << "nota invalida" << endl;

	}
	cout << "media = " << fixed << setprecision(2) << (soma / 2) << endl;
}
