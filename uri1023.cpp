#include <iostream>
#include <list>

using namespace std;

struct matriz {

	int xy[2];
} Matriz;

int main() {

	list<list<matriz>> cidades;
	list<matriz> casas;
	list<int> aux;

	matriz mat;

	double media = 0.0, soma_pessoas = 0.0, soma_cosumo = 0.0;

	int l;
	int casos_teste = -1;
	while(casos_teste != 0) {
	
		cin >> casos_teste;	
		for(int i = 0; i < casos_teste; i++) {

			cin >> mat.xy[0];
			cin >> mat.xy[1];

			cout << mat.xy[0] << " | " << mat.xy[1] << endl;
			casas.push_back(mat);
		}

		cidades.push_back(casas);
		casas.clear();
	}

	casas = cidades.front();
	for(int i = 0; i < casas.size(); i++) {

		soma_pessoas += casas.front().xy[0];
		soma_cosumo += casas.front().xy[1];

		casas.pop_front();
	}
	cout << "Media: " << soma_cosumo / soma_pessoas << endl;

	return 0;
}

