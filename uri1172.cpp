#include <iostream>

using namespace std;


void insere(int *x);

void resposta(int *x);

int main() {

	int x[10];

	insere(x);
	resposta(x);

	return 0;
}

void insere(int *x) {

	for(int i = 0; i < 10; i++) {

                cin >> x[i];

                if(x[i] <= 0) x[i] = 1;
        }
}

void resposta(int *x) {

	for(int i = 0; i < 10; i++)
		cout << "X[" << i << "] = " << x[i] << endl;
}
