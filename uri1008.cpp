#include <iostream>
#include <iomanip>

using namespace std;


int main() {

	int numero_func, horas_trab;
	double renda_hora;
	cin >> numero_func;
	cin >> horas_trab;
	cin >> renda_hora;

	double salario_func = horas_trab * renda_hora;
	cout << "NUMBER = " << numero_func << endl;
	cout << "SALARY = U$ " << fixed << setprecision(2) << salario_func << endl;

	return 0;
}
