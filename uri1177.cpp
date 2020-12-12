#include <iostream>

using namespace std;


void insere(int t, int *n);

void result(int *n);

int main() {

	int n[1000];
	int t;
	cin >> t;

	insere(t, n);
	result(n);

	return 0;
}

void insere(int t, int *n) {

	int aux = 0;

	for(int i = 0; i < 1000; i++) {
	
		n[i] = aux++;

		if(aux == t) aux = 0;
	}

}

void result(int *n) {

	for(int i = 0; i < 1000; i++)
		cout << "N[" << i << "] = " << n[i] << endl;
	
}
