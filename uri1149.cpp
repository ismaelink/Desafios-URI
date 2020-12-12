#include <iostream>

using namespace std;


int resposta(int a, int b);

int main() {

	int a, b;
	cin >> a;

	b = 0;
	while(b <= 0) cin >> b;

	cout << resposta(a, b) << endl;

	return 0;
}

int resposta(int a, int b) {

	int aux = a;

	for(int i = 0; i < b - 1; i++) 
		a += ++aux;

	return a;
}
