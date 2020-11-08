#include <iostream>
#include <iomanip>

using namespace std;


void reajuste_salario(double salario);

int main() {

	double salario;
	cin >> salario;

	reajuste_salario(salario);	

	return 0;
}

void reajuste_salario(double salario) {

	double novo_salario;

	if(0 <= salario && salario <= 400.00) {
	
		novo_salario = salario + ((salario * 15) / 100);
		cout << "Novo salario: " << fixed << setprecision(2) << novo_salario << endl;
		cout << "Reajuste ganho: " << fixed << setprecision(2) << novo_salario - salario << endl;
		cout << "Em percentual: 15 %" << endl;
	}
	else if(400.01 <= salario && salario <= 800.00) {
	
		novo_salario = salario + ((salario * 12) / 100);
                cout << "Novo salario: " << fixed << setprecision(2) << novo_salario << endl;
                cout << "Reajuste ganho: " << fixed << setprecision(2) << novo_salario - salario << endl;
                cout << "Em percentual: 12 %" << endl;
	}
	else if(800.01 <= salario && salario <= 1200.00) {
	
		novo_salario = salario + (salario / 10);
                cout << "Novo salario: " << fixed << setprecision(2) << novo_salario << endl;
                cout << "Reajuste ganho: " << fixed << setprecision(2) << novo_salario - salario << endl;
                cout << "Em percentual: 10 %" << endl;
	}
	else if(1200.01 <= salario && salario <= 2000.00) {
	
		novo_salario = salario + ((salario * 7) / 100);
                cout << "Novo salario: " << fixed << setprecision(2) << novo_salario << endl;
                cout << "Reajuste ganho: " << fixed << setprecision(2) << novo_salario - salario << endl;
                cout << "Em percentual: 7 %" << endl;
	}
	else if(salario > 2000.00) {
	
		novo_salario = salario + ((salario * 4) / 100);
                cout << "Novo salario: " << fixed << setprecision(2) << novo_salario << endl;
                cout << "Reajuste ganho: " << fixed << setprecision(2) << novo_salario - salario << endl;
                cout << "Em percentual: 4 %" << endl;
	}
}
