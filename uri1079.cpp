#include <iostream>
#include <iomanip>

using namespace std;


void media(int n);

int main() {

	int n;
	cin >> n;

	media(n);

	return 0;
}

void media(int n) {

	double peso[] {2, 3, 5};
	double valor = 0.0;
	double soma = 0.0;
	double m[n];

	for(int i = 0; i < n; i++) {
	
		soma = 0.0;

		for(int j = 0; j < 3; j++) {
		
			cin >> valor;
			soma += valor * peso[j];
		}

		m[i] = soma / 10;	
	}

	for(double v: m)
		cout << fixed << setprecision(1) << v << endl;
}
