#include <iostream>
#include <iomanip>

using namespace std;


int main() {

	double notas[] = {100.00, 50.00, 20.00, 10.00, 5.00, 2.00, 1.00, 0.50, 0.25, 0.10, 0.05, 0.01};
	double n;
	cin >> n;

	int inteiro = (int) n; // ex: (int)576.73 == 576
	int decimal = (int) ((n - inteiro) * 100); // ex: (576.73 - 576) * 100 == 0.73 * 100 == 73.0 -> (int) == 73
	int div;
	int resto = inteiro;

	cout << "NOTAS:" << endl;
	for(int i = 0; i < 6; i++) {

		inteiro = resto;
		div = inteiro / (int) notas[i];
		resto = inteiro % (int) notas[i];

		cout << div << " nota(s) de R$ " << fixed << setprecision(2) << notas[i] << endl;
	}

	resto = (resto * 100) + decimal;
	cout << "MOEDAS:" << endl;
	for(int i = 6; i < 12; i++) {
	
		decimal = resto;
		div = decimal / (int) (notas[i] * 100);
		resto = decimal % (int) (notas[i] * 100);

		cout << div << " moeda(s) de R$ " << fixed << setprecision(2) << notas[i] << endl;		
	}
	
	return 0;
}
