#include <iostream>

using namespace std;


int conta_positivos(double valores[]);

int main() {

	double valores[6];
	cin >> valores[0];
	cin >> valores[1];
	cin >> valores[2];
	cin >> valores[3];
	cin >> valores[4];
	cin >> valores[5];

	cout << conta_positivos(valores) << " valores positivos" << endl;

	return 0;
}

int conta_positivos(double valores[]) {

	int cont = 0;

	for(int i = 0; i < 6; i++)
		if(valores[i] > 0) cont++;
	
	
	return cont;
}
