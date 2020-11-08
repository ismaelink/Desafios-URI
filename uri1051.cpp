#include <iostream>
#include <iomanip>

using namespace std;


void calc_imposto_renda(double valor);

int main() {

	double valor;
	cin >> valor;

	calc_imposto_renda(valor);

	return 0;
}

void calc_imposto_renda(double valor) {

	double imposto = 0.0;

	if(0.0 <= valor && valor <= 2000.00) {

		cout << "Isento" << endl;
		return;
	}
	else valor -= 2000;


	if(0.0 <= valor && valor <= 1000.00) {
		
		imposto += (valor * 8) / 100;
		cout << "R$ " << fixed << setprecision(2) << imposto << endl;
		return;
	}
	else if(valor > 1000.00) valor -= 1000;
	imposto += 10 * 8;


	if(0.0 <= valor && valor <= 1500) {
	
		imposto += (valor * 18) / 100;
		cout << "R$ " << fixed << setprecision(2) << imposto << endl;
		return;
	}
	else if(valor > 1500.00) valor -= 1500;
	imposto += 15 * 18;

	
	imposto += (valor * 28) / 100;
	cout << "R$ " << fixed << setprecision(2) << imposto << endl;
}
