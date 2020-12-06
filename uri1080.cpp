#include <iostream>

using namespace std;


int maior(int *n);

int posicao(int *n, int valor);

int main() {

	int n[100];
	
	for(int i = 0; i < 100; i++) cin >> n[i];

	int m = maior(n);

	cout << m << endl;
	cout << posicao(n, m) << endl;

	return 0;
}

int maior(int *n) {

	int m = n[0];

	for(int i = 0; i < 100; i++) 
		if(m < n[i]) m = n[i];

	return m;
	
}

int posicao(int *n, int valor) {

	int pos = 0;

	for(int i = 0; i < 100; i++) {

		if(n[i] == valor) {

			pos = i + 1;
			break;
		}
	}

	return pos;
}
