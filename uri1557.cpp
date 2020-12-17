#include <iostream>
#include <cmath>

using namespace std;


void justificar(int d, int num, int indice_i, int indice_j);

int len(int valor);

int main() {

	int n, elemento;

	while(cin >> n && n != 0) {
		
		for(int i = 0; i < n; i++) {

			for(int j = 0; j < n; j++) {
		
				elemento = pow(2, i + j);	
				justificar(n, elemento, i, j);	
				cout << elemento;
			}

			cout << endl;
		}

		cout << endl;
	}
	
	return 0;
}

void justificar(int d, int num, int indice_i, int indice_j) {

	int tam_num = len(num);
	int tam_d = len(pow(2, 2 * (d - 1)));

	for(int i = 1; i <= (indice_j == 0 ? tam_d - tam_num : tam_d - tam_num + 1); i++)
		cout << " ";

}

int len(int valor) {

	int i = 0;

	while((valor /= 10) && valor != 0) ++i;

	return i + 1;
}
