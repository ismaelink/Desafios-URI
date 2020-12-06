#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


void resultado(int n);

int main() {

	unsigned int n;
	cin >> n;

	resultado(n);

	return 0;
}

void resultado(int n) {

	unsigned int aux1;
	unsigned int aux2 = 0;
	
	for(int i = 1; i <= n; i++) {
	
		aux1 = pow(i, 2);
		for(int j = 1; j <= 2; j++) {

			cout << i << " " << aux1 << " ";
			cout << fixed << setprecision(0) << ((j == 1) ? pow(i, 3) : (i * aux1 - aux2)) << endl;

			aux1++;
		}

		aux2++;		
	}
}
