#include <iostream>

using namespace std;


void insere(int *x, int n);

int menor(int *x, int n);

int indice(int valor, int *x, int n);

int main() {

	int n;
	cin >> n;

	int x[n];

	insere(x, n);
	
	int men = menor(x, n);
	int pos = indice(men, x, n);

	cout << "Menor valor: " << men << endl;
	cout << "Posicao: " << pos << endl;

	return 0;
}

void insere(int *x, int n) {

	for(int i = 0; i < n; i++)
		cin >> x[i];
}

int menor(int *x, int n) {

	int menor = x[0];

	for(int i = 1; i < n; i++)
		if(menor > x[i]) menor = x[i];
	
	return menor;
}

int indice(int valor, int *x, int n) {

	int i = 0;

	for(i; i < n; i++)
		if(valor == x[i]) break;

	return i;
}
