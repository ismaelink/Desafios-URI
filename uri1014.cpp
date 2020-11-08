#include <iostream>
#include <iomanip>

using namespace std;


int main() {

	int x;
	double y;
	cin >> x;
	cin >> y;

	double consumo_medio = x / y;
	cout << fixed << setprecision(3) << consumo_medio << " km/l" << endl;

	return 0;
}
