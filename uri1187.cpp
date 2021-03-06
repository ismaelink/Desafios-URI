#include <iostream>
#include <iomanip>

using namespace std;


double result(double m[][12], char op);

int main() {

	double m[12][12];

	char op;
	cin >> op;

	for(int i = 0; i < 12; i++) {
	
		for(int j = 0; j < 12; j++) 
			cin >> m[i][j];
	}

	cout << fixed << setprecision(1) << result(m, op) << endl;

	return 0;
}


double result(double m[][12], char op) {

	double soma = 0.0;
	int cont = 0;

	for(int i = 0; i < 12; i++) {
	
		for(int j = 0; j < 12; j++) {
		
			if((2 * i + 1) <= i + j && i + j <= 10) {
			
				soma += m[i][j];
				cont++;
			}
		}
	}


	return (op == 'S') ? soma : soma / cont;
}
