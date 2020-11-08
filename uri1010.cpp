#include <iostream>
#include <iomanip>

using namespace std;


int main() {

	int codigo_p1, codigo_p2, quant_p1, quant_p2;
	double valor_unidade_p1, valor_unidade_p2;
	cin >> codigo_p1;
	cin >> quant_p1;
        cin >> valor_unidade_p1;
	cin >> codigo_p2;
        cin >> quant_p2;
        cin >> valor_unidade_p2;

	double valor_a_pagar = (quant_p1 * valor_unidade_p1) + (quant_p2 * valor_unidade_p2);
	cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << valor_a_pagar << endl;

	return 0;
}
