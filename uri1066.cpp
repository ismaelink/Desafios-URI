#include <iostream>

using namespace std;


void cont_pares(int *n);

void cont_impares(int *n);

void cont_positivos(int *n);

void cont_negativos(int *n);

int main() {

	int n[5];
	cin >> n[0] >> n[1] >> n[2] >> n[3] >> n[4];

	cont_pares(n);
	cont_impares(n);
	cont_positivos(n);
	cont_negativos(n);

	return 0;
}

void cont_pares(int *n) {

	int cont = 0;

	for(int i = 0; i < 5; i++) 
		if(n[i] % 2 == 0) cont++;

	cout << cont << " valor(es) par(es)" << endl;
}

void cont_impares(int *n) {

	int cont = 0;

	for(int i = 0; i < 5; i++)
		if(n[i] % 2 != 0) cont++;

	cout << cont << " valor(es) impar(es)" << endl;
}

void cont_positivos(int *n) {

	int cont = 0;

	for(int i = 0; i < 5; i++)
		if(n[i] > 0) cont++;

	cout << cont << " valor(es) positivo(s)" << endl;
}

void cont_negativos(int *n) {

	int cont = 0;

	for(int i = 0; i < 5; i++)
		if(n[i] < 0) cont++;

	cout << cont << " valor(es) negativo(s)" << endl;
}
