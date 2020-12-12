#include <iostream>

using namespace std;


void insere(int *n);

void resposta(int *n);

int main() {

	int n[10];

	insere(n);
	resposta(n);

	return 0;
}

void insere(int *n) {

	int v;
	cin >> v;

	n[0] = v;
	for(int i = 1; i < 10; i++)
		n[i] = 2 * n[i - 1];

}

void resposta(int *n) {

	for(int i = 0; i < 10; i++) 
		cout << "N[" << i << "] = " << n[i] << endl;
}
