#include <iostream>

using namespace std;


void insere(int *n);

void palindrome(int *n);

void resposta(int *n);

int main() {

	int n[20];

	insere(n);
	palindrome(n);	
	resposta(n);

	return 0;
}

void insere(int *n) {

	for(int i = 0; i < 20; i++)
		cin >> n[i];
}

void palindrome(int *n) {

	int aux;

	for(int i = 0; i < 10; i++) {
	
		aux = n[i];
		n[i] = n[20 - i - 1];
		n[20 - i - 1] = aux;
	}
}

void resposta(int *n) {

	for(int i = 0; i < 20; i++)
		cout << "N[" << i << "] = " << n[i] << endl;
}
