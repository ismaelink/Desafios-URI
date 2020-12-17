#include <iostream>
#include <cmath>

using namespace std;


void resto_quoc(int a, int b, int *r, int *q);

int main() {

	int a, b, q, r;
	cin >> a >> b;

	resto_quoc(a, b, &r, &q);
	cout << q << " " << r << endl;

	return 0;
}

void resto_quoc(int a, int b, int *r, int *q) {

	int aux;

	for(int i = 0; i < abs(b); i++) {
	
		*q = (a - i) / b;

		if(i + *q * b == a) {
		
			*r = i;
			return;
		}
	}
}
