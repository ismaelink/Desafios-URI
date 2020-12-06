#include <iostream>

using namespace std;


struct Teste {

	int x, y;

	void insere() {
	
		cin >> x >> y;
	}
};

void soma_impares(Teste *t, int n);

int main() {

	int n;
	cin >> n;

	Teste *testes = new Teste[n];

	for(int i = 0; i < n; i++) testes[i].insere();

	soma_impares(testes, n);

	return 0;
}

void soma_impares(Teste *t, int n) {

	int soma, inicio, fim;

	for(int i = 0; i < n; i++) {
	
		soma = 0;
		inicio = (t[i].x > t[i].y) ? t[i].y + 1 : t[i].x + 1;
		fim = (t[i].x > t[i].y) ? t[i].x : t[i].y;

		for(int j = inicio; j < fim; j++)
			if(j % 2 != 0) soma += j;

		cout << soma << endl;
	}
}
