#include <iostream>
#include <iomanip>

using namespace std;


int main() {

	double items[]{4.0, 4.5, 5.0, 2.0, 1.5};

	int cod = 0, quant = 0;
	cin >> cod;
	cin >> quant;

	cout << "Total: R$ " << fixed << setprecision(2) << (items[cod - 1] * quant) << endl;

	return 0;
}
