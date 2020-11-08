#include <iostream>

using namespace std;


int main() {

	int valor;
	cin >> valor;

	cout << valor << endl;

	int divisao_int = valor / 100;
	
	cout << divisao_int << " nota(s) de R$ 100,00" << endl;

	valor -= (divisao_int * 100);
	divisao_int = valor / 50;
	cout << divisao_int << " nota(s) de R$ 50,00" << endl;

	valor -= (divisao_int * 50);
	divisao_int = valor / 20;
	cout << divisao_int << " nota(s) de R$ 20,00" << endl;

	valor -= (divisao_int * 20);
	divisao_int = valor /	10;
	cout << divisao_int << " nota(s) de R$ 10,00" << endl;

	valor -= (divisao_int * 10);
	divisao_int = valor / 5;
	cout << divisao_int << " nota(s) de R$ 5,00" << endl;

	valor -= (divisao_int * 5);
	divisao_int = valor / 2;
	cout << divisao_int << " nota(s) de R$ 2,00" << endl;

	valor -= (divisao_int * 2);
	cout << valor << " nota(s) de R$ 1,00" << endl;

	return 0;
}
