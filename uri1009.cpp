#include <iostream>
#include <iomanip>

using namespace std;


int main() {

	string nome;
	double salario, total_vendas;
	cin >> nome;
	cin >> salario;
	cin >> total_vendas;

	double salario_com_bonus = salario + (total_vendas * 0.15);
	cout << "TOTAL = R$ " << fixed << setprecision(2) << salario_com_bonus << endl;

	return 0;
}
