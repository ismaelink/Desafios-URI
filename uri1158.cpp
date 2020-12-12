#include <iostream>

using namespace std;


void resposta(int n);

int main() {

	int n;
	cin >> n;

	resposta(n);

	return 0;
}

void resposta(int n) {

	int x, y, soma;

	for(int i = 0; i < n; i++) {

                cin >> x >> y;

                x = (x % 2 != 0) ? x : x + 1;
                soma = 0;

                for(int j = 0; j < y; j++) {

                        soma += x;
                        x += 2;
                }

                cout << soma << endl;
        }
}
