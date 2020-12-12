#include <iostream>

using namespace std;


void resposta(int x);

int main() {

	int x;
	cin >> x;

		while(x != 0) {

		resposta(x);
		cin >> x;
	}

	return 0;
}

void resposta(int x) {
	
	int soma = 0;

	x = (x % 2 == 0) ? x : x + 1;

	for(int i = 0; i < 5; i++) {

		soma += x;
		x += 2;
	}

	cout << soma << endl;
}
