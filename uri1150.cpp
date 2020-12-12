#include <iostream>

using namespace std;


int resposta(int x, int z);

int main() {

	int x, z;
	cin >> x;

	z = x;
	while(z <= x) cin >> z;

	cout << resposta(x, z) << endl;

	return 0;
}

int resposta(int x, int z) {

	int quant, aux;

	quant = 1;
	aux = x;

	while(x <= z) {
	
		x += ++aux;
		++quant;
	}

	return quant;
}
