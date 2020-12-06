#include <iostream>

using namespace std;


void cont_pares(int *n);

int main() {

	int n[5];
	cin >> n[0] >> n[1] >> n[2] >> n[3] >> n[4];

	cont_pares(n);

	return 0;
}

void cont_pares(int *n) {

	int cont = 0;

	for(int i = 0; i < 5; i++)
		if(n[i] % 2 == 0) cont++;

	cout << cont << " valores pares" << endl;	
}
